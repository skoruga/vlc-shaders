/*****************************************************************************
 * mkv.cpp : matroska demuxer
 *****************************************************************************
 * Copyright (C) 2003-2004 the VideoLAN team
 * $Id: ffa3226a5176f5ccd5bc705b22a9d5a87cd162e1 $
 *
 * Authors: Laurent Aimar <fenrir@via.ecp.fr>
 *          Steve Lhomme <steve.lhomme@free.fr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include "chapter_command.hpp"

void chapter_codec_cmds_c::AddCommand( const KaxChapterProcessCommand & command )
{
    uint32 codec_time = uint32(-1);
    for( size_t i = 0; i < command.ListSize(); i++ )
    {
        const EbmlElement *k = command[i];

        if( MKV_IS_ID( k, KaxChapterProcessTime ) )
        {
            codec_time = uint32( *static_cast<const KaxChapterProcessTime*>( k ) );
            break;
        }
    }

    for( size_t i = 0; i < command.ListSize(); i++ )
    {
        const EbmlElement *k = command[i];

        if( MKV_IS_ID( k, KaxChapterProcessData ) )
        {
            KaxChapterProcessData *p_data =  new KaxChapterProcessData( *static_cast<const KaxChapterProcessData*>( k ) );
            switch ( codec_time )
            {
            case 0:
                during_cmds.push_back( p_data );
                break;
            case 1:
                enter_cmds.push_back( p_data );
                break;
            case 2:
                leave_cmds.push_back( p_data );
                break;
            default:
                delete p_data;
            }
        }
    }
}

int16 dvd_chapter_codec_c::GetTitleNumber()
{
    if ( p_private_data->GetSize() >= 3)
    {
        const binary* p_data = p_private_data->GetBuffer();
        if ( p_data[0] == MATROSKA_DVD_LEVEL_SS )
        {
            return int16( (p_data[2] << 8) + p_data[3] );
        }
    }
    return -1;
}

bool dvd_chapter_codec_c::Enter()
{
    bool f_result = false;
    std::vector<KaxChapterProcessData*>::iterator index = enter_cmds.begin();
    while ( index != enter_cmds.end() )
    {
        if ( (*index)->GetSize() )
        {
            binary *p_data = (*index)->GetBuffer();
            size_t i_size = *p_data++;
            // avoid reading too much from the buffer
            i_size = __MIN( i_size, ((*index)->GetSize() - 1) >> 3 );
            for ( ; i_size > 0; i_size--, p_data += 8 )
            {
                msg_Dbg( &sys.demuxer, "Matroska DVD enter command" );
                f_result |= sys.dvd_interpretor.Interpret( p_data );
            }
        }
        index++;
    }
    return f_result;
}

bool dvd_chapter_codec_c::Leave()
{
    bool f_result = false;
    std::vector<KaxChapterProcessData*>::iterator index = leave_cmds.begin();
    while ( index != leave_cmds.end() )
    {
        if ( (*index)->GetSize() )
        {
            binary *p_data = (*index)->GetBuffer();
            size_t i_size = *p_data++;
            // avoid reading too much from the buffer
            i_size = __MIN( i_size, ((*index)->GetSize() - 1) >> 3 );
            for ( ; i_size > 0; i_size--, p_data += 8 )
            {
                msg_Dbg( &sys.demuxer, "Matroska DVD leave command" );
                f_result |= sys.dvd_interpretor.Interpret( p_data );
            }
        }
        index++;
    }
    return f_result;
}

std::string dvd_chapter_codec_c::GetCodecName( bool f_for_title ) const
{
    std::string result;
    if ( p_private_data->GetSize() >= 3)
    {
        const binary* p_data = p_private_data->GetBuffer();
/*        if ( p_data[0] == MATROSKA_DVD_LEVEL_TT )
        {
            uint16_t i_title = (p_data[1] << 8) + p_data[2];
            char psz_str[11];
            sprintf( psz_str, " %d  ---", i_title );
            result = N_("---  DVD Title");
            result += psz_str;
        }
        else */ if ( p_data[0] == MATROSKA_DVD_LEVEL_LU )
        {
            char psz_str[11];
            sprintf( psz_str, " (%c%c)  ---", p_data[1], p_data[2] );
            result = N_("---  DVD Menu");
            result += psz_str;
        }
        else if ( p_data[0] == MATROSKA_DVD_LEVEL_SS && f_for_title )
        {
            if ( p_data[1] == 0x00 )
                result = N_("First Played");
            else if ( p_data[1] == 0xC0 )
                result = N_("Video Manager");
            else if ( p_data[1] == 0x80 )
            {
                uint16_t i_title = (p_data[2] << 8) + p_data[3];
                char psz_str[20];
                sprintf( psz_str, " %d -----", i_title );
                result = N_("----- Title");
                result += psz_str;
            }
        }
    }

    return result;
}
class virtual_segment_c;
class chapter_item_c;

// see http://www.dvd-replica.com/DVD/vmcmdset.php for a description of DVD commands
bool dvd_command_interpretor_c::Interpret( const binary * p_command, size_t i_size )
{
    if ( i_size != 8 )
        return false;

    virtual_segment_c *p_segment = NULL;
    chapter_item_c *p_chapter = NULL;
    bool f_result = false;
    uint16 i_command = ( p_command[0] << 8 ) + p_command[1];

    // handle register tests if there are some
    if ( (i_command & 0xF0) != 0 )
    {
        bool b_test_positive = true;//(i_command & CMD_DVD_IF_NOT) == 0;
        bool b_test_value    = (i_command & CMD_DVD_TEST_VALUE) != 0;
        uint8 i_test = i_command & 0x70;
        uint16 i_value;

        // see http://dvd.sourceforge.net/dvdinfo/vmi.html
        uint8  i_cr1;
        uint16 i_cr2;
        switch ( i_command >> 12 )
        {
        default:
            i_cr1 = p_command[3];
            i_cr2 = (p_command[4] << 8) + p_command[5];
            break;
        case 3:
        case 4:
        case 5:
            i_cr1 = p_command[6];
            i_cr2 = p_command[7];
            b_test_value = false;
            break;
        case 6:
        case 7:
            if ( ((p_command[1] >> 4) & 0x7) == 0)
            {
                i_cr1 = p_command[2];
                i_cr2 = (p_command[6] << 8) + p_command[7];
            }
            else
            {
                i_cr1 = p_command[2];
                i_cr2 = (p_command[6] << 8) + p_command[7];
            }
            break;
        }

        if ( b_test_value )
            i_value = i_cr2;
        else
            i_value = GetPRM( i_cr2 );

        switch ( i_test )
        {
        case CMD_DVD_IF_GPREG_EQUAL:
            // if equals
            msg_Dbg( &sys.demuxer, "IF %s EQUALS %s", GetRegTypeName( false, i_cr1 ).c_str(), GetRegTypeName( b_test_value, i_value ).c_str() );
            if (!( GetPRM( i_cr1 ) == i_value ))
            {
                b_test_positive = false;
            }
            break;
        case CMD_DVD_IF_GPREG_NOT_EQUAL:
            // if not equals
            msg_Dbg( &sys.demuxer, "IF %s NOT EQUALS %s", GetRegTypeName( false, i_cr1 ).c_str(), GetRegTypeName( b_test_value, i_value ).c_str() );
            if (!( GetPRM( i_cr1 ) != i_value ))
            {
                b_test_positive = false;
            }
            break;
        case CMD_DVD_IF_GPREG_INF:
            // if inferior
            msg_Dbg( &sys.demuxer, "IF %s < %s", GetRegTypeName( false, p_command[3] ).c_str(), GetRegTypeName( b_test_value, i_value ).c_str() );
            if (!( GetPRM( i_cr1 ) < i_value ))
            {
                b_test_positive = false;
            }
            break;
        case CMD_DVD_IF_GPREG_INF_EQUAL:
            // if inferior or equal
            msg_Dbg( &sys.demuxer, "IF %s < %s", GetRegTypeName( false, p_command[3] ).c_str(), GetRegTypeName( b_test_value, i_value ).c_str() );
            if (!( GetPRM( i_cr1 ) <= i_value ))
            {
                b_test_positive = false;
            }
            break;
        case CMD_DVD_IF_GPREG_AND:
            // if logical and
            msg_Dbg( &sys.demuxer, "IF %s & %s", GetRegTypeName( false, p_command[3] ).c_str(), GetRegTypeName( b_test_value, i_value ).c_str() );
            if (!( GetPRM( i_cr1 ) & i_value ))
            {
                b_test_positive = false;
            }
            break;
        case CMD_DVD_IF_GPREG_SUP:
            // if superior
            msg_Dbg( &sys.demuxer, "IF %s >= %s", GetRegTypeName( false, p_command[3] ).c_str(), GetRegTypeName( b_test_value, i_value ).c_str() );
            if (!( GetPRM( i_cr1 ) > i_value ))
            {
                b_test_positive = false;
            }
            break;
        case CMD_DVD_IF_GPREG_SUP_EQUAL:
            // if superior or equal
            msg_Dbg( &sys.demuxer, "IF %s >= %s", GetRegTypeName( false, p_command[3] ).c_str(), GetRegTypeName( b_test_value, i_value ).c_str() );
            if (!( GetPRM( i_cr1 ) >= i_value ))
            {
                b_test_positive = false;
            }
            break;
        }

        if ( !b_test_positive )
            return false;
    }

    // strip the test command
    i_command &= 0xFF0F;

    switch ( i_command )
    {
    case CMD_DVD_NOP:
    case CMD_DVD_NOP2:
        {
            msg_Dbg( &sys.demuxer, "NOP" );
            break;
        }
    case CMD_DVD_BREAK:
        {
            msg_Dbg( &sys.demuxer, "Break" );
            // TODO
            break;
        }
    case CMD_DVD_JUMP_TT:
        {
            uint8 i_title = p_command[5];
            msg_Dbg( &sys.demuxer, "JumpTT %d", i_title );

            // find in the ChapProcessPrivate matching this Title level
            p_chapter = sys.BrowseCodecPrivate( 1, MatchTitleNumber, &i_title, sizeof(i_title), p_segment );
            if ( p_segment != NULL )
            {
                sys.JumpTo( *p_segment, p_chapter );
                f_result = true;
            }

            break;
        }
    case CMD_DVD_CALLSS_VTSM1:
        {
            msg_Dbg( &sys.demuxer, "CallSS" );
            binary p_type;
            switch( (p_command[6] & 0xC0) >> 6 ) {
                case 0:
                    p_type = p_command[5] & 0x0F;
                    switch ( p_type )
                    {
                    case 0x00:
                        msg_Dbg( &sys.demuxer, "CallSS PGC (rsm_cell %x)", p_command[4]);
                        break;
                    case 0x02:
                        msg_Dbg( &sys.demuxer, "CallSS Title Entry (rsm_cell %x)", p_command[4]);
                        break;
                    case 0x03:
                        msg_Dbg( &sys.demuxer, "CallSS Root Menu (rsm_cell %x)", p_command[4]);
                        break;
                    case 0x04:
                        msg_Dbg( &sys.demuxer, "CallSS Subpicture Menu (rsm_cell %x)", p_command[4]);
                        break;
                    case 0x05:
                        msg_Dbg( &sys.demuxer, "CallSS Audio Menu (rsm_cell %x)", p_command[4]);
                        break;
                    case 0x06:
                        msg_Dbg( &sys.demuxer, "CallSS Angle Menu (rsm_cell %x)", p_command[4]);
                        break;
                    case 0x07:
                        msg_Dbg( &sys.demuxer, "CallSS Chapter Menu (rsm_cell %x)", p_command[4]);
                        break;
                    default:
                        msg_Dbg( &sys.demuxer, "CallSS <unknown> (rsm_cell %x)", p_command[4]);
                        break;
                    }
                    p_chapter = sys.BrowseCodecPrivate( 1, MatchPgcType, &p_type, 1, p_segment );
                    if ( p_segment != NULL )
                    {
                        sys.JumpTo( *p_segment, p_chapter );
                        f_result = true;
                    }
                break;
                case 1:
                    msg_Dbg( &sys.demuxer, "CallSS VMGM (menu %d, rsm_cell %x)", p_command[5] & 0x0F, p_command[4]);
                break;
                case 2:
                    msg_Dbg( &sys.demuxer, "CallSS VTSM (menu %d, rsm_cell %x)", p_command[5] & 0x0F, p_command[4]);
                break;
                case 3:
                    msg_Dbg( &sys.demuxer, "CallSS VMGM (pgc %d, rsm_cell %x)", (p_command[2] << 8) + p_command[3], p_command[4]);
                break;
            }
            break;
        }
    case CMD_DVD_JUMP_SS:
        {
            msg_Dbg( &sys.demuxer, "JumpSS");
            binary p_type;
            switch( (p_command[5] & 0xC0) >> 6 ) {
                case 0:
                    msg_Dbg( &sys.demuxer, "JumpSS FP");
                break;
                case 1:
                    p_type = p_command[5] & 0x0F;
                    switch ( p_type )
                    {
                    case 0x02:
                        msg_Dbg( &sys.demuxer, "JumpSS VMGM Title Entry");
                        break;
                    case 0x03:
                        msg_Dbg( &sys.demuxer, "JumpSS VMGM Root Menu");
                        break;
                    case 0x04:
                        msg_Dbg( &sys.demuxer, "JumpSS VMGM Subpicture Menu");
                        break;
                    case 0x05:
                        msg_Dbg( &sys.demuxer, "JumpSS VMGM Audio Menu");
                        break;
                    case 0x06:
                        msg_Dbg( &sys.demuxer, "JumpSS VMGM Angle Menu");
                        break;
                    case 0x07:
                        msg_Dbg( &sys.demuxer, "JumpSS VMGM Chapter Menu");
                        break;
                    default:
                        msg_Dbg( &sys.demuxer, "JumpSS <unknown>");
                        break;
                    }
                    // find the VMG
                    p_chapter = sys.BrowseCodecPrivate( 1, MatchIsVMG, NULL, 0, p_segment );
                    if ( p_segment != NULL )
                    {
                        p_chapter = p_segment->BrowseCodecPrivate( 1, MatchPgcType, &p_type, 1 );
                        if ( p_chapter != NULL )
                        {
                            sys.JumpTo( *p_segment, p_chapter );
                            f_result = true;
                        }
                    }
                break;
                case 2:
                    p_type = p_command[5] & 0x0F;
                    switch ( p_type )
                    {
                    case 0x02:
                        msg_Dbg( &sys.demuxer, "JumpSS VTSM (vts %d, ttn %d) Title Entry", p_command[4], p_command[3]);
                        break;
                    case 0x03:
                        msg_Dbg( &sys.demuxer, "JumpSS VTSM (vts %d, ttn %d) Root Menu", p_command[4], p_command[3]);
                        break;
                    case 0x04:
                        msg_Dbg( &sys.demuxer, "JumpSS VTSM (vts %d, ttn %d) Subpicture Menu", p_command[4], p_command[3]);
                        break;
                    case 0x05:
                        msg_Dbg( &sys.demuxer, "JumpSS VTSM (vts %d, ttn %d) Audio Menu", p_command[4], p_command[3]);
                        break;
                    case 0x06:
                        msg_Dbg( &sys.demuxer, "JumpSS VTSM (vts %d, ttn %d) Angle Menu", p_command[4], p_command[3]);
                        break;
                    case 0x07:
                        msg_Dbg( &sys.demuxer, "JumpSS VTSM (vts %d, ttn %d) Chapter Menu", p_command[4], p_command[3]);
                        break;
                    default:
                        msg_Dbg( &sys.demuxer, "JumpSS VTSM (vts %d, ttn %d) <unknown>", p_command[4], p_command[3]);
                        break;
                    }

                    p_chapter = sys.BrowseCodecPrivate( 1, MatchVTSMNumber, &p_command[4], 1, p_segment );

                    if ( p_segment != NULL && p_chapter != NULL )
                    {
                        // find the title in the VTS
                        p_chapter = p_chapter->BrowseCodecPrivate( 1, MatchTitleNumber, &p_command[3], 1 );
                        if ( p_chapter != NULL )
                        {
                            // find the specified menu in the VTSM
                            p_chapter = p_segment->BrowseCodecPrivate( 1, MatchPgcType, &p_type, 1 );
                            if ( p_chapter != NULL )
                            {
                                sys.JumpTo( *p_segment, p_chapter );
                                f_result = true;
                            }
                        }
                        else
                            msg_Dbg( &sys.demuxer, "Title (%d) does not exist in this VTS", p_command[3] );
                    }
                    else
                        msg_Dbg( &sys.demuxer, "DVD Domain VTS (%d) not found", p_command[4] );
                break;
                case 3:
                    msg_Dbg( &sys.demuxer, "JumpSS VMGM (pgc %d)", (p_command[2] << 8) + p_command[3]);
                break;
            }
            break;
        }
    case CMD_DVD_JUMPVTS_PTT:
        {
            uint8 i_title = p_command[5];
            uint8 i_ptt = p_command[3];

            msg_Dbg( &sys.demuxer, "JumpVTS Title (%d) PTT (%d)", i_title, i_ptt);

            // find the current VTS content segment
            p_chapter = sys.p_current_segment->BrowseCodecPrivate( 1, MatchIsDomain, NULL, 0 );
            if ( p_chapter != NULL )
            {
                int16 i_curr_title = p_chapter->GetTitleNumber( );
                if ( i_curr_title > 0 )
                {
                    p_chapter = sys.BrowseCodecPrivate( 1, MatchVTSNumber, &i_curr_title, sizeof(i_curr_title), p_segment );

                    if ( p_segment != NULL && p_chapter != NULL )
                    {
                        // find the title in the VTS
                        p_chapter = p_chapter->BrowseCodecPrivate( 1, MatchTitleNumber, &i_title, sizeof(i_title) );
                        if ( p_chapter != NULL )
                        {
                            // find the chapter in the title
                            p_chapter = p_chapter->BrowseCodecPrivate( 1, MatchChapterNumber, &i_ptt, sizeof(i_ptt) );
                            if ( p_chapter != NULL )
                            {
                                sys.JumpTo( *p_segment, p_chapter );
                                f_result = true;
                            }
                        }
                    else
                        msg_Dbg( &sys.demuxer, "Title (%d) does not exist in this VTS", i_title );
                    }
                    else
                        msg_Dbg( &sys.demuxer, "DVD Domain VTS (%d) not found", i_curr_title );
                }
                else
                    msg_Dbg( &sys.demuxer, "JumpVTS_PTT command found but not in a VTS(M)");
            }
            else
                msg_Dbg( &sys.demuxer, "JumpVTS_PTT command but the DVD domain wasn't found");
            break;
        }
    case CMD_DVD_SET_GPRMMD:
        {
            msg_Dbg( &sys.demuxer, "Set GPRMMD [%d]=%d", (p_command[4] << 8) + p_command[5], (p_command[2] << 8) + p_command[3]);

            if ( !SetGPRM( (p_command[4] << 8) + p_command[5], (p_command[2] << 8) + p_command[3] ) )
                msg_Dbg( &sys.demuxer, "Set GPRMMD failed" );
            break;
        }
    case CMD_DVD_LINKPGCN:
        {
            uint16 i_pgcn = (p_command[6] << 8) + p_command[7];

            msg_Dbg( &sys.demuxer, "Link PGCN(%d)", i_pgcn );
            p_chapter = sys.p_current_segment->BrowseCodecPrivate( 1, MatchPgcNumber, &i_pgcn, 2 );
            if ( p_chapter != NULL )
            {
                if ( !p_chapter->Enter( true ) )
                    // jump to the location in the found segment
                    sys.p_current_segment->Seek( sys.demuxer, p_chapter->i_user_start_time, -1, p_chapter, -1 );

                f_result = true;
            }
            break;
        }
    case CMD_DVD_LINKCN:
        {
            uint8 i_cn = p_command[7];

            p_chapter = sys.p_current_segment->CurrentChapter();

            msg_Dbg( &sys.demuxer, "LinkCN (cell %d)", i_cn );
            p_chapter = p_chapter->BrowseCodecPrivate( 1, MatchCellNumber, &i_cn, 1 );
            if ( p_chapter != NULL )
            {
                if ( !p_chapter->Enter( true ) )
                    // jump to the location in the found segment
                    sys.p_current_segment->Seek( sys.demuxer, p_chapter->i_user_start_time, -1, p_chapter, -1 );

                f_result = true;
            }
            break;
        }
    case CMD_DVD_GOTO_LINE:
        {
            msg_Dbg( &sys.demuxer, "GotoLine (%d)", (p_command[6] << 8) + p_command[7] );
            // TODO
            break;
        }
    case CMD_DVD_SET_HL_BTNN1:
        {
            msg_Dbg( &sys.demuxer, "SetHL_BTN (%d)", p_command[4] );
            SetSPRM( 0x88, p_command[4] );
            break;
        }
    default:
        {
            msg_Dbg( &sys.demuxer, "unsupported command : %02X %02X %02X %02X %02X %02X %02X %02X"
                     ,p_command[0]
                     ,p_command[1]
                     ,p_command[2]
                     ,p_command[3]
                     ,p_command[4]
                     ,p_command[5]
                     ,p_command[6]
                     ,p_command[7]);
            break;
        }
    }

    return f_result;
}



bool dvd_command_interpretor_c::MatchIsDomain( const chapter_codec_cmds_c &data, const void *p_cookie, size_t i_cookie_size )
{
    return ( data.p_private_data != NULL && data.p_private_data->GetBuffer()[0] == MATROSKA_DVD_LEVEL_SS );
}

bool dvd_command_interpretor_c::MatchIsVMG( const chapter_codec_cmds_c &data, const void *p_cookie, size_t i_cookie_size )
{
    if ( data.p_private_data == NULL || data.p_private_data->GetSize() < 2 )
        return false;

    return ( data.p_private_data->GetBuffer()[0] == MATROSKA_DVD_LEVEL_SS && data.p_private_data->GetBuffer()[1] == 0xC0);
}

bool dvd_command_interpretor_c::MatchVTSNumber( const chapter_codec_cmds_c &data, const void *p_cookie, size_t i_cookie_size )
{
    if ( i_cookie_size != 2 || data.p_private_data == NULL || data.p_private_data->GetSize() < 4 )
        return false;

    if ( data.p_private_data->GetBuffer()[0] != MATROSKA_DVD_LEVEL_SS || data.p_private_data->GetBuffer()[1] != 0x80 )
        return false;

    uint16 i_gtitle = (data.p_private_data->GetBuffer()[2] << 8 ) + data.p_private_data->GetBuffer()[3];
    uint16 i_title = *(uint16*)p_cookie;

    return (i_gtitle == i_title);
}

bool dvd_command_interpretor_c::MatchVTSMNumber( const chapter_codec_cmds_c &data, const void *p_cookie, size_t i_cookie_size )
{
    if ( i_cookie_size != 1 || data.p_private_data == NULL || data.p_private_data->GetSize() < 4 )
        return false;

    if ( data.p_private_data->GetBuffer()[0] != MATROSKA_DVD_LEVEL_SS || data.p_private_data->GetBuffer()[1] != 0x40 )
        return false;

    uint8 i_gtitle = data.p_private_data->GetBuffer()[3];
    uint8 i_title = *(uint8*)p_cookie;

    return (i_gtitle == i_title);
}

bool dvd_command_interpretor_c::MatchTitleNumber( const chapter_codec_cmds_c &data, const void *p_cookie, size_t i_cookie_size )
{
    if ( i_cookie_size != 1 || data.p_private_data == NULL || data.p_private_data->GetSize() < 4 )
        return false;

    if ( data.p_private_data->GetBuffer()[0] != MATROSKA_DVD_LEVEL_TT )
        return false;

    uint16 i_gtitle = (data.p_private_data->GetBuffer()[1] << 8 ) + data.p_private_data->GetBuffer()[2];
    uint8 i_title = *(uint8*)p_cookie;

    return (i_gtitle == i_title);
}

bool dvd_command_interpretor_c::MatchPgcType( const chapter_codec_cmds_c &data, const void *p_cookie, size_t i_cookie_size )
{
    if ( i_cookie_size != 1 || data.p_private_data == NULL || data.p_private_data->GetSize() < 8 )
        return false;

    if ( data.p_private_data->GetBuffer()[0] != MATROSKA_DVD_LEVEL_PGC )
        return false;

    uint8 i_pgc_type = data.p_private_data->GetBuffer()[3] & 0x0F;
    uint8 i_pgc = *(uint8*)p_cookie;

    return (i_pgc_type == i_pgc);
}

bool dvd_command_interpretor_c::MatchPgcNumber( const chapter_codec_cmds_c &data, const void *p_cookie, size_t i_cookie_size )
{
    if ( i_cookie_size != 2 || data.p_private_data == NULL || data.p_private_data->GetSize() < 8 )
        return false;

    if ( data.p_private_data->GetBuffer()[0] != MATROSKA_DVD_LEVEL_PGC )
        return false;

    uint16 *i_pgc_n = (uint16 *)p_cookie;
    uint16 i_pgc_num = (data.p_private_data->GetBuffer()[1] << 8) + data.p_private_data->GetBuffer()[2];

    return (i_pgc_num == *i_pgc_n);
}

bool dvd_command_interpretor_c::MatchChapterNumber( const chapter_codec_cmds_c &data, const void *p_cookie, size_t i_cookie_size )
{
    if ( i_cookie_size != 1 || data.p_private_data == NULL || data.p_private_data->GetSize() < 2 )
        return false;

    if ( data.p_private_data->GetBuffer()[0] != MATROSKA_DVD_LEVEL_PTT )
        return false;

    uint8 i_chapter = data.p_private_data->GetBuffer()[1];
    uint8 i_ptt = *(uint8*)p_cookie;

    return (i_chapter == i_ptt);
}

bool dvd_command_interpretor_c::MatchCellNumber( const chapter_codec_cmds_c &data, const void *p_cookie, size_t i_cookie_size )
{
    if ( i_cookie_size != 1 || data.p_private_data == NULL || data.p_private_data->GetSize() < 5 )
        return false;

    if ( data.p_private_data->GetBuffer()[0] != MATROSKA_DVD_LEVEL_CN )
        return false;

    uint8 *i_cell_n = (uint8 *)p_cookie;
    uint8 i_cell_num = data.p_private_data->GetBuffer()[3];

    return (i_cell_num == *i_cell_n);
}

const std::string matroska_script_interpretor_c::CMD_MS_GOTO_AND_PLAY = "GotoAndPlay";

// see http://www.matroska.org/technical/specs/chapters/index.html#mscript
//  for a description of existing commands
bool matroska_script_interpretor_c::Interpret( const binary * p_command, size_t i_size )
{
    bool b_result = false;

    char *psz_str = (char*) malloc( i_size + 1 );
    memcpy( psz_str, p_command, i_size );
    psz_str[ i_size ] = '\0';

    std::string sz_command = psz_str;
    free( psz_str );

    msg_Dbg( &sys.demuxer, "command : %s", sz_command.c_str() );

#if defined(__GNUC__) && (__GNUC__ < 3)
    if ( sz_command.compare( CMD_MS_GOTO_AND_PLAY, 0, CMD_MS_GOTO_AND_PLAY.size() ) == 0 )
#else
    if ( sz_command.compare( 0, CMD_MS_GOTO_AND_PLAY.size(), CMD_MS_GOTO_AND_PLAY ) == 0 )
#endif
    {
        size_t i,j;

        // find the (
        for ( i=CMD_MS_GOTO_AND_PLAY.size(); i<sz_command.size(); i++)
        {
            if ( sz_command[i] == '(' )
            {
                i++;
                break;
            }
        }
        // find the )
        for ( j=i; j<sz_command.size(); j++)
        {
            if ( sz_command[j] == ')' )
            {
                i--;
                break;
            }
        }

        std::string st = sz_command.substr( i+1, j-i-1 );
        int64_t i_chapter_uid = atoi( st.c_str() );

        virtual_segment_c *p_segment;
        chapter_item_c *p_chapter = sys.FindChapter( i_chapter_uid, p_segment );

        if ( p_chapter == NULL )
            msg_Dbg( &sys.demuxer, "Chapter %"PRId64" not found", i_chapter_uid);
        else
        {
            if ( !p_chapter->EnterAndLeave( sys.p_current_segment->CurrentChapter() ) )
                p_segment->Seek( sys.demuxer, p_chapter->i_user_start_time, -1, p_chapter, -1 );
            b_result = true;
        }
    }

    return b_result;
}

bool matroska_script_codec_c::Enter()
{
    bool f_result = false;
    std::vector<KaxChapterProcessData*>::iterator index = enter_cmds.begin();
    while ( index != enter_cmds.end() )
    {
        if ( (*index)->GetSize() )
        {
            msg_Dbg( &sys.demuxer, "Matroska Script enter command" );
            f_result |= interpretor.Interpret( (*index)->GetBuffer(), (*index)->GetSize() );
        }
        index++;
    }
    return f_result;
}

bool matroska_script_codec_c::Leave()
{
    bool f_result = false;
    std::vector<KaxChapterProcessData*>::iterator index = leave_cmds.begin();
    while ( index != leave_cmds.end() )
    {
        if ( (*index)->GetSize() )
        {
            msg_Dbg( &sys.demuxer, "Matroska Script leave command" );
            f_result |= interpretor.Interpret( (*index)->GetBuffer(), (*index)->GetSize() );
        }
        index++;
    }
    return f_result;
}



/*****************************************************************************
 * file_bitmap.cpp
 *****************************************************************************
 * Copyright (C) 2003 the VideoLAN team
 * $Id: 00bf4f41fe7d73bcbce5d04d06d4359ac75581db $
 *
 * Authors: Cyril Deguet     <asmax@via.ecp.fr>
 *          Olivier Teulière <ipkiss@via.ecp.fr>
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

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc_common.h>
#include <vlc_image.h>
#include <vlc_url.h>
#include "file_bitmap.hpp"

FileBitmap::FileBitmap( intf_thread_t *pIntf, image_handler_t *pImageHandler,
                        string fileName, uint32_t aColor, int nbFrames,
                        int fps, int nbLoops ):
    GenericBitmap( pIntf, nbFrames, fps, nbLoops ), m_width( 0 ), m_height( 0 ),
    m_pData( NULL )
{
    video_format_t fmt_in = {0}, fmt_out = {0};
    picture_t *pPic;

    fmt_out.i_chroma = VLC_CODEC_RGBA;

    char* psz_uri = make_URI( fileName.c_str() );
    pPic = image_ReadUrl( pImageHandler, psz_uri, &fmt_in, &fmt_out );
    free( psz_uri );

    if( !pPic )
        return;

    m_width = fmt_out.i_width;
    m_height = fmt_out.i_height;

    m_pData = new uint8_t[m_height * m_width * 4];

    // Compute the alpha layer
    uint8_t *pData = m_pData, *pSrc = pPic->p->p_pixels;
    for( int y = 0; y < m_height; y++ )
    {
        for( int x = 0; x < m_width; x++ )
        {
            uint32_t r = *pSrc++;
            uint32_t g = *pSrc++;
            uint32_t b = *pSrc++;
            uint8_t  a = *pSrc++;

            *(pData++) = b * a / 255;
            *(pData++) = g * a / 255;
            *(pData++) = r * a / 255;

            // Transparent pixel ?
            if( aColor == (r<<16 | g<<8 | b) )
            {
                *pData = 0;
            }
            else
            {
                *pData = a;
            }
            pData++;
        }
        pSrc += pPic->p->i_pitch - m_width * 4;
    }

    picture_Release( pPic );
    return;
}


FileBitmap::~FileBitmap()
{
    delete[] m_pData;
}


uint8_t *FileBitmap::getData() const
{
    if( m_pData == NULL )
    {
        msg_Warn( getIntf(), "FileBitmap::getData() returns NULL" );
    }
    return m_pData;
}

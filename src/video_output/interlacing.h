/*****************************************************************************
 * interlacing.h: Interlacing related helpers
 *****************************************************************************
 * Copyright (C) 2010 Laurent Aimar
 * $Id: bc0b729ea0313b566780431e8c06068438458d69 $
 *
 * Authors: Laurent Aimar <fenrir _AT_ videolan _DOT_ org>
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

#if defined(__PLUGIN__) || defined(__BUILTIN__) || !defined(__LIBVLC__)
# error This header file can only be included from LibVLC.
#endif

#ifndef _VOUT_INTERLACING_H
#define _VOUT_INTERLACING_H

typedef struct {
    bool    is_interlaced;
    mtime_t date;
} vout_interlacing_support_t;

void vout_InitInterlacingSupport(vout_thread_t *, bool is_interlaced);
void vout_SetInterlacingState(vout_thread_t *, vout_interlacing_support_t *, bool is_interlaced);

#endif

/*****************************************************************************
 * VLCLibrary.m: VLCKit.framework VLCLibrary implementation
 *****************************************************************************
 * Copyright (C) 2007 Pierre d'Herbemont
 * Copyright (C) 2007 the VideoLAN team
 * $Id: aadbc979eabe3d77b71166ba2863dfaa42a8cc5d $
 *
 * Authors: Pierre d'Herbemont <pdherbemont # videolan.org>
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

#import "VLCLibrary.h"
#import "VLCLibVLCBridging.h"

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc/vlc.h>
#include <vlc/libvlc_structures.h>

static VLCLibrary * sharedLibrary = nil;

@implementation VLCLibrary
+ (VLCLibrary *)sharedLibrary
{
    if (!sharedLibrary)
    {
        /* Initialize a shared instance */
        sharedLibrary = [[self alloc] init];
    }
    return sharedLibrary;
}

- (id)init
{
    if (self = [super init])
    {

        NSArray *vlcParams = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"VLCParams"];
        if (!vlcParams) {
            NSMutableArray *defaultParams = [NSMutableArray array];
            [defaultParams addObject:@"--no-video-title-show"];                     // Don't show the title on overlay when starting to play
            [defaultParams addObject:@"--no-sout-keep"];
            [defaultParams addObject:@"--vout=macosx"];                             // Select Mac OS X video output
            [defaultParams addObject:@"--text-renderer=quartztext"];                // our CoreText-based renderer
            [defaultParams addObject:@"--verbose=-1"];                              // Don't polute the stdio log
            [defaultParams addObject:@"--no-color"];                                // Don't use color in output (Xcode doesn't show it)
            [defaultParams addObject:@"--no-media-library"];                        // We don't need the media library
            [defaultParams addObject:@"--play-and-pause"];                          // We want every movie to pause instead of stopping at eof
            [defaultParams addObject:@"--extraintf=macosx_dialog_provider"];        // Some extra dialog (login, progress) may come up from here
            vlcParams = defaultParams;
        }

        NSUInteger paramNum = 0;
        NSUInteger count = [vlcParams count];
        const char *lib_vlc_params[count];
        while (paramNum < count) {
            NSString *vlcParam = [vlcParams objectAtIndex:paramNum];
            lib_vlc_params[paramNum] = [vlcParam cStringUsingEncoding:NSASCIIStringEncoding];
            paramNum++;
        }
        instance = (void *)libvlc_new( sizeof(lib_vlc_params)/sizeof(lib_vlc_params[0]), lib_vlc_params);
        NSAssert(instance, @"libvlc failed to initialize");
    }
    return self;
}

- (NSString *)version
{
    return [NSString stringWithUTF8String:libvlc_get_version()];
}

- (NSString *)changeset
{
    return [NSString stringWithUTF8String:libvlc_get_changeset()];
}

- (void)dealloc
{
    if( instance )
        libvlc_release( instance );

    if( self == sharedLibrary )
        sharedLibrary = nil;

    instance = nil;
    [super dealloc];
}

@end

@implementation VLCLibrary (VLCLibVLCBridging)
+ (void *)sharedInstance
{
    return [self sharedLibrary].instance;
}

- (void *)instance
{
    return instance;
}
@end


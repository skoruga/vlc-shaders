/*****************************************************************************
 * VLCTime.h: VLCKit.framework VLCTime header
 *****************************************************************************
 * Copyright (C) 2007 Pierre d'Herbemont
 * Copyright (C) 2007 the VideoLAN team
 * $Id: 1be0c82b360d1ea51d20c2dfed68b0c2811241b3 $
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

/**
 * Provides an object to define VLCMedia's time.
 */
@interface VLCTime : NSObject <NSCopying>
{
    NSNumber * value;       //< Holds, in seconds, the VLCTime value
}

/* Factories */
+ (VLCTime *)nullTime;
+ (VLCTime *)timeWithNumber:(NSNumber *)aNumber;
+ (VLCTime *)timeWithInt:(NSInteger)aInt;

/* Initializers */
- (id)initWithNumber:(NSNumber *)aNumber;
- (id)initWithInt:(int)aInt;

/* Properties */
@property (readonly) NSNumber * numberValue;
@property (readonly) NSString * stringValue;
@property (readonly) NSString * verboseStringValue;
@property (readonly) int intValue;

/* Comparitors */
- (NSComparisonResult)compare:(VLCTime *)aTime;
@end

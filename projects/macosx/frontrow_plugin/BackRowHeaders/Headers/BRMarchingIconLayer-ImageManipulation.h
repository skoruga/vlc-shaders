/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMarchingIconLayer.h>

@interface BRMarchingIconLayer (ImageManipulation)
- (void)_hideFrontIcon:(BOOL)fp8;
- (void)_positionIconAtIndex:(long)fp8 usingKeyFrame:(const struct BRMarchingIconKeyFrame *)fp12 inBounds:(struct CGSize)fp16;
- (void)_updateIcons;
- (id)_blurredImageForImage:(id)fp8;
@end


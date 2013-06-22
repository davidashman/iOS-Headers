/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKAbstractGradientBrush.h>

@interface GKSpotlightBackgroundBrush : GKAbstractGradientBrush
{
    float _spotlightScale;
    struct CGPoint _spotlightCenter;
}

+ (id)largeSpotlightBackgroundBrush;
+ (id)spotlightBackgroundBrush;
@property(nonatomic) struct CGPoint spotlightCenter; // @synthesize spotlightCenter=_spotlightCenter;
@property(nonatomic) float spotlightScale; // @synthesize spotlightScale=_spotlightScale;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (id)init;

@end

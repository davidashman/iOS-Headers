//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

@class AVLoadedTimeRangesView, NSArray, NSString, UIImageView;

@interface AVScrubber : UISlider
{
    NSArray *_loadedTimeRanges;
    AVLoadedTimeRangesView *_loadedTimeRangesMaxTrackView;
    UIImageView *_thumbView;
    float _touchLocationOffsetFromThumbViewCenter;
    float _beginTouchLocationInViewY;
    int _scrubbingSpeed;
}

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
+ (id)keyPathsForValuesAffectingPreciseScrubbingFeasible;
@property(nonatomic) int scrubbingSpeed; // @synthesize scrubbingSpeed=_scrubbingSpeed;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_layoutSubviewsForBoundsChange:(BOOL)arg1;
- (void)_initSubviews;
- (id)createThumbView;
@property(readonly, nonatomic) NSString *localizedScrubbingSpeedName;
@property(readonly, nonatomic, getter=isPreciseScrubbingFeasible) BOOL preciseScrubbingFeasible;
@property(retain, nonatomic) NSArray *loadedTimeRanges;
- (id)initWithFrame:(struct CGRect)arg1;

@end


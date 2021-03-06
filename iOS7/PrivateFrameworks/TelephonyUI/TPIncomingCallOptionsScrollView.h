/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIScrollView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class TPIncomingCallOptionsView, UIView;

@interface TPIncomingCallOptionsScrollView : UIScrollView <UIScrollViewDelegate>
{
    TPIncomingCallOptionsView *_optionsView;
    UIView *_offIntoInfinityView;
    _Bool _isDecelerating;
}

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)disableAndScrollToDefaultOffsetSuppressBarChanges:(_Bool)arg1 completion:(id)arg2;
- (void)setupAndAddToView:(id)arg1;
@property(retain) TPIncomingCallOptionsView *optionsView;
- (void)dealloc;

@end


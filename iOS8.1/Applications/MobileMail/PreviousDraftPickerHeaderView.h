/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface PreviousDraftPickerHeaderView : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicatorView;
    _Bool _hasDrafts;
    _Bool _loading;
    _Bool _completedFirstLoad;
}

- (void)updateUI;
- (void)setLoading:(_Bool)arg1;
- (void)setHasDrafts:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


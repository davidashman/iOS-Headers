/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@class UIImageView, UILabel;

@interface WAUnitSelectionControl : UIButton
{
    long long _selectedState;
    UILabel *_celsiusLabel;
    UILabel *_fahrenheitLabel;
    UIImageView *_dividerImageView;
}

@property(readonly, nonatomic) UIImageView *dividerImageView; // @synthesize dividerImageView=_dividerImageView;
@property(readonly, nonatomic) UILabel *fahrenheitLabel; // @synthesize fahrenheitLabel=_fahrenheitLabel;
@property(readonly, nonatomic) UILabel *celsiusLabel; // @synthesize celsiusLabel=_celsiusLabel;
@property(nonatomic) long long selectedState; // @synthesize selectedState=_selectedState;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)generateDivider;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


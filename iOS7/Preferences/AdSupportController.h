/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AdvertisingController.h"

@class UITableViewCell, UIView;

@interface AdSupportController : AdvertisingController
{
    _Bool _hasRefreshedStatus;
    id _restrictionsChangedObserver;
    id _effectiveSettingsChangedObserver;
    UITableViewCell *_limitAdTrackingCell;
    UIView *_originalAccessoryView;
}

@property(nonatomic) _Bool hasRefreshedStatus; // @synthesize hasRefreshedStatus=_hasRefreshedStatus;
@property(retain, nonatomic) UIView *originalAccessoryView; // @synthesize originalAccessoryView=_originalAccessoryView;
@property(retain, nonatomic) UITableViewCell *limitAdTrackingCell; // @synthesize limitAdTrackingCell=_limitAdTrackingCell;
@property(retain, nonatomic) id effectiveSettingsChangedObserver; // @synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver;
@property(retain, nonatomic) id restrictionsChangedObserver; // @synthesize restrictionsChangedObserver=_restrictionsChangedObserver;
- (_Bool)isLimitAdTrackingURLReachable;
- (void)dealloc;
- (void)userDidTapLearnMoreLink:(id)arg1;
- (void)userDidTapDoneButton:(id)arg1;
- (void)setLimitAdTrackingEnabled:(id)arg1 specifier:(id)arg2;
- (id)limitAdTrackingEnabled:(id)arg1;
- (_Bool)canChangeLimitAdTracking;
- (void)resetAdID;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (void)viewDidLoad;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "LocationServicesListController.h"

@class PSSpecifier;

@interface LocationFMiPListController : LocationServicesListController
{
    PSSpecifier *_fmipSpecifier;
}

- (id)specifiers;
- (void)setStatusEnabled:(id)arg1 specifier:(id)arg2;
- (id)isStatusEnabled:(id)arg1;
- (void)setFindMyiPhoneEnabled:(id)arg1 specifier:(id)arg2;
- (id)isFindMyiPhoneEnabled:(id)arg1;
- (void)updateSpecifiersForImposedSettings;
- (void)stopLocationStatusUpdates;
- (void)startLocationStatusUpdates;
- (void)updateLocationUsage;
- (void)dealloc;

@end


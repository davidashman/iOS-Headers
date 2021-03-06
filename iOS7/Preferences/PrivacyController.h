/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSListController.h"

@class ACAccountStore, PSSpecifier;

@interface PrivacyController : PSListController
{
    PSSpecifier *_locationSpecifier;
    ACAccountStore *_accountStore;
}

- (void)dealloc;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)locationServicesEnabled:(id)arg1;
- (void)updateLocationServicesVisibility;
- (id)capabilityEnabled:(id)arg1;
- (void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2;
- (_Bool)hasSocialSpecifiers:(id)arg1;
- (id)specifiers;
- (id)_accountStore;

@end


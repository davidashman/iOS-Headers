/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSListController.h"

@class PSSpecifier;

@interface SettingsNetworkRoamingController : PSListController
{
    PSSpecifier *_voiceRoamingSpecifier;
    PSSpecifier *_dataRoamingSpecifier;
    PSSpecifier *_cdmaRoamingSpecifier;
}

- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getVoiceRoamingStatus:(id)arg1;
- (void)setVoiceRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)reloadRoamingStatus;
- (void)newCarrierNotification;
- (id)specifiers;
- (id)_voiceRoamingFooterTextWithVoiceRoamingOn:(_Bool)arg1;
- (id)cdmaRoamingSpecifiers;
- (id)dataRoamingSpecifiers;
- (void)dealloc;
- (id)init;

@end


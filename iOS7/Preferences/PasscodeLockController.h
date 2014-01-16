/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSListController.h"

@class NSArray, NSDictionary, PSSpecifier, UIAlertView;

@interface PasscodeLockController : PSListController
{
    int _policyDictatedMaxFailedAttempts;
    PSSpecifier *_voiceDialSpecifier;
    PSSpecifier *_voiceDialGroupSpecifier;
    UIAlertView *_enablePasscodeMesaChoice;
    UIAlertView *_disablePasscodeWarning;
    UIAlertView *_disableSafariPasswordsAlert;
    NSArray *_defaultGracePeriodValues;
    NSDictionary *_defaultGracePeriodTitles;
    NSDictionary *_defaultGracePeriodShortTitles;
}

+ (long long)passcodeGracePeriod;
@property(retain, nonatomic) NSDictionary *defaultGracePeriodShortTitles; // @synthesize defaultGracePeriodShortTitles=_defaultGracePeriodShortTitles;
@property(retain, nonatomic) NSDictionary *defaultGracePeriodTitles; // @synthesize defaultGracePeriodTitles=_defaultGracePeriodTitles;
@property(retain, nonatomic) NSArray *defaultGracePeriodValues; // @synthesize defaultGracePeriodValues=_defaultGracePeriodValues;
- (void)suspend;
- (_Bool)canBeShownFromSuspendedState;
- (void)willCancelEnteringPIN;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)willAcceptEnteredPIN;
- (void)didUnlock;
- (id)specifiers;
- (void)setAssistantUnderLockEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)assistantUnderLockEnabled:(id)arg1;
- (void)setSimplePasscodeEnabled:(id)arg1 specifier:(id)arg2;
- (id)isSimplePasscodeEnabled:(id)arg1;
- (id)wipeEnabled:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateToggleState;
- (void)_didUpdatePasscode:(id)arg1;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didAcceptRemovePIN;
- (void)profileNotification;
- (void)updateState;
- (void)updateWipeDeviceFooterText;
- (_Bool)showReplyWithMessage;
- (void)setPassbook:(id)arg1 specifier:(id)arg2;
- (id)passbook:(id)arg1;
- (void)setVoiceDial:(id)arg1 specifier:(id)arg2;
- (id)voiceDial:(id)arg1;
- (id)_makeWipeDeviceGroupFooter;
- (void)setWipeEnabled:(id)arg1 specifier:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_setWipeEnabled:(_Bool)arg1;
- (void)togglePasscode:(id)arg1;
- (void)setGraceValue:(id)arg1 specifier:(id)arg2;
- (id)graceValue:(id)arg1;
- (void)updateGracePeriodSpecifier;
- (void)dealloc;
- (id)init;
- (void)_localizeGracePeriodTitles;

@end


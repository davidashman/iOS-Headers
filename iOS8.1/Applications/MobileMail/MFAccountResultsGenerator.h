/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_MFResultsGenerator.h"

@class MailAccount;

@interface MFAccountResultsGenerator : _MFResultsGenerator
{
    MailAccount *_account;
}

+ (id)resultsDictionaryFromAccount:(id)arg1 forKeys:(id)arg2;
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
- (id)_restrictedFromSyncingRecents:(id)arg1;
- (id)_syncsReadState:(id)arg1;
- (id)_supportsThreadNotifications:(id)arg1;
- (id)_supportsSoftBankCodePoints:(id)arg1;
- (id)_restrictedFromSendingExternally:(id)arg1;
- (id)_restrictsRepliesAndForwards:(id)arg1;
- (id)_isDefaultSendingAccount:(id)arg1;
- (id)_isActive:(id)arg1;
- (id)_defaultAddress:(id)arg1;
- (id)_fromEmailAddressesIncludingDisabled:(id)arg1;
- (id)_fromEmailAddresses:(id)arg1;
- (id)_emailAddressesAndAliases:(id)arg1;
- (id)_emailAddresses:(id)arg1;
- (id)_username:(id)arg1;
- (id)_fullUserName:(id)arg1;
- (id)_displayName:(id)arg1;
- (id)_accountReference:(id)arg1;
- (SEL)selectorForKey:(id)arg1;
- (void)dealloc;

@end


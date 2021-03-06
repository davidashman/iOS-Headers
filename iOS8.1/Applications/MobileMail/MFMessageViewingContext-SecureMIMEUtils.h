/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MFMessageViewingContext.h"

@interface MFMessageViewingContext (SecureMIMEUtils)
- (struct __SecCertificate *)copySigningCertificate;
- (void)removeSavedEncryptionCertificate;
- (void)saveEncryptionCertificate;
- (unsigned long long)keychainCertificateStatus;
- (id)firstSigner;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHManager;

@interface GEOPrivacyManager : NSObject
{
    CHManager *_callHistoryManager;
}

- (void)_fireResetLocationAndPrivacyNotification;
- (void)_fireRecentsClearedNotification;
- (void)_callHistoryManagerRecentsChangedNotificationObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end


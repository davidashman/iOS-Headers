//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GKSessionGlobals : NSObject
{
    unsigned int *_activePIDList;
    unsigned long _activePIDListSize;
    unsigned long _activePIDListCount;
    struct _opaque_pthread_mutex_t _lock;
}

- (void)unlock;
- (void)lock;
- (BOOL)hasActivePID:(unsigned int)arg1;
- (void)unregisterPID:(unsigned int)arg1;
- (void)registerPID:(unsigned int)arg1;
- (id)init;

@end


/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "RTNotifier.h"

@interface RTPurgeManager : RTNotifier
{
}

+ (id)earliestRawLocationDate;
+ (double)clearRoutineDelay;
+ (double)resetLocationsDelay;
+ (double)purgeDelay;
+ (id)purgeIdentifier;
+ (id)sharedInstance;
- (void)onAppResetChanged;
- (void)clearRoutine;
- (void)purge;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (id)init;

@end


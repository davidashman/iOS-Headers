/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface MPVolumeHUDController : NSObject
{
    NSMutableArray *_contexts;
    NSMutableSet *_categories;
}

+ (id)sharedInstance;
- (void)_updateVisibility;
- (BOOL)_sliderIsVisible:(id)arg1;
- (void)setNeedsUpdate;
- (void)unregisterView:(id)arg1 inContext:(id)arg2;
- (void)registerView:(id)arg1 inContext:(id)arg2;
- (void)popContext;
- (id)pushContext;
@property(readonly, nonatomic) id mainContext;
- (void)dealloc;
- (id)init;

@end

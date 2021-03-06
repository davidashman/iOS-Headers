/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "RTNotifier.h"

@class GEONavigationListener, GEONavigationRouteSummary;

@interface RTNavigationManager : RTNotifier
{
    _Bool _monitorRouteSummary;
    GEONavigationListener *_navigationListener;
    GEONavigationRouteSummary *_routeSummary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) GEONavigationRouteSummary *routeSummary; // @synthesize routeSummary=_routeSummary;
@property(nonatomic) _Bool monitorRouteSummary; // @synthesize monitorRouteSummary=_monitorRouteSummary;
@property(retain, nonatomic) GEONavigationListener *navigationListener; // @synthesize navigationListener=_navigationListener;
- (void).cxx_destruct;
- (void)onAuthorizationNotification:(id)arg1;
- (void)dealloc;
- (void)setup;
- (id)init;

@end


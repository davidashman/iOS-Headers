/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MailStatusBarViewDelegate.h"

@class MFMailboxUid, MailStatusBarView, NSMutableDictionary, NSSet, NSString;

@interface MailStatusBar : NSObject <MailStatusBarViewDelegate>
{
    struct CGRect _frame;
    MailStatusBarView *_ourBarView;
    NSMutableDictionary *_statusPerAccountDictionary;
    NSSet *_visibleMailboxes;
    MFMailboxUid *_lastTrackedMailbox;
    double _lastBarTime;
    _Bool _showsSubtitleString;
    NSString *_subtitleString;
    unsigned long long _unsentCount;
    unsigned long long _state;
}

+ (id)mailStatusBarButtonItem;
+ (id)sharedStatusBar;
@property(nonatomic) _Bool showsSubtitleString; // @synthesize showsSubtitleString=_showsSubtitleString;
@property(copy, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property(nonatomic) unsigned long long unsentCount; // @synthesize unsentCount=_unsentCount;
@property(copy, nonatomic) NSSet *visibleMailboxes; // @synthesize visibleMailboxes=_visibleMailboxes;
- (void)statusBarView:(id)arg1 stateDidChange:(unsigned long long)arg2;
- (long long)interfaceOrientation;
- (id)updatedSubtitleString;
- (id)lastUpdated;
- (id)statusWithCount:(int *)arg1 total:(int *)arg2 progress:(float *)arg3 state:(unsigned long long *)arg4;
- (unsigned long long)_unsentCount;
- (id)trackedMailbox;
- (void)showIndeterminateProgressWithMessage:(id)arg1 forMailbox:(id)arg2 withMonitor:(id)arg3;
- (void)resetStatusForObject:(id)arg1;
- (void)updateStatus:(id)arg1 forObject:(id)arg2 withMonitor:(id)arg3;
- (void)setView:(id)arg1;
- (void)setCount:(int)arg1 total:(int)arg2 progress:(float)arg3 forObject:(id)arg4;
- (void)setMonitor:(id)arg1 forObject:(id)arg2;
- (void)cleanUpForMonitor:(id)arg1;
- (void)setCount:(int)arg1 total:(int)arg2 progress:(float)arg3 forObject:(id)arg4 update:(_Bool)arg5;
- (void)setStatus:(id)arg1 forObject:(id)arg2;
- (id)valueForKey:(id)arg1 andObject:(id)arg2;
@property(nonatomic) unsigned long long state;
- (void)setValue:(id)arg1 forKey:(id)arg2 andObject:(id)arg3;
- (void)dealloc;
- (void)_dumpDiagnosticInformation:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_barView:(_Bool)arg1;
- (void)setNeedsDisplay;

@end


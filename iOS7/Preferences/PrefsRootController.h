/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSRootController.h"

@class PrefsListController;

@interface PrefsRootController : PSRootController
{
    PrefsListController *_rootListController;
}

+ (void)playRingtoneWithIdentifier:(id)arg1 loop:(_Bool)arg2;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (void)loadView;
- (id)rootListController;

@end


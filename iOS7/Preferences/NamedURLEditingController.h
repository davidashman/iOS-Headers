/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "URLEditingController.h"

@class WebRestrictionsController;

@interface NamedURLEditingController : URLEditingController
{
    _Bool _saved;
    WebRestrictionsController *_URLSaveController;
}

@property(retain, nonatomic) WebRestrictionsController *URLSaveController; // @synthesize URLSaveController=_URLSaveController;
@property(nonatomic) _Bool saved; // @synthesize saved=_saved;
- (id)controlledURL:(id)arg1;
- (void)setControlledURL:(id)arg1 specifier:(id)arg2;
- (id)controlledURLTitle:(id)arg1;
- (void)setControlledURLTitle:(id)arg1 specifier:(id)arg2;
- (void)saveURL;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willResignActive;
- (void)viewDidAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)dealloc;

@end


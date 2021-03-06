/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MFMailComposeRemoteService.h"
#import "MFMailComposeViewControllerDelegate.h"

@class ComposeNavigationController, MFAttachmentComposeManager, NSMutableDictionary, NSString, _MFMailCompositionContext;

@interface ComposeServiceRemoteViewController : UIViewController <MFMailComposeViewControllerDelegate, MFMailComposeRemoteService>
{
    ComposeNavigationController *_navigationController;
    _MFMailCompositionContext *_compositionContext;
    NSMutableDictionary *_attachmentIdentifiersMap;
    MFAttachmentComposeManager *_attachmentManager;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void)autosaveWithReply:(id)arg1;
- (void)framesForAttachmentsWithIdentifiers:(id)arg1 withReply:(id)arg2;
- (void)setContentVisible:(_Bool)arg1;
- (void)_invokeReply:(id)arg1;
- (void)commitCompositionValuesWithReply:(id)arg1;
- (void)addAttachmentWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setUICustomizationData:(id)arg1;
- (void)setCompositionValues:(id)arg1;
- (void)_firstDraw:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)_hostApplicationWillEnterForeground;
- (void)_hostApplicationDidEnterBackground;
- (void)_willAppearInRemoteViewController;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


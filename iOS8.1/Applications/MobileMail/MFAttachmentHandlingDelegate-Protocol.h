/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MFAttachmentHandlingDelegate <NSObject>
- (void)showSelectedAttachment:(id)arg1;
- (void)showMenuForSelectedAttachment:(id)arg1;
- (void)saveAllAttachments;
- (id)localizedTitleForSaveAllAttachmentsAction;
- (_Bool)canSaveAllAttachmentsInContext:(int)arg1;
@end


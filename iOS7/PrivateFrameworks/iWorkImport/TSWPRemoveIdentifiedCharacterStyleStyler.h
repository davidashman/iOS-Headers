/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPCharacterStyler.h>

@class TSWPCharacterStyle;

// Not exported
@interface TSWPRemoveIdentifiedCharacterStyleStyler : TSWPCharacterStyler
{
    TSWPCharacterStyle *_styleToRemove;
}

- (id)replacementStyleForStyle:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeStyle:(id)arg1 inRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

@end


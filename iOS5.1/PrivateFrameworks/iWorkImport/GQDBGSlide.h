/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDBGAbstractSlide.h>

@class GQDBGMasterSlide, GQDWPLayoutFrame;

@interface GQDBGSlide : GQDBGAbstractSlide
{
    GQDBGMasterSlide *mMaster;
    GQDWPLayoutFrame *mNoteFrame;
}

- (id)init;
- (void)dealloc;
- (id)master;
- (id)noteFrame;

@end


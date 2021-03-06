/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying>
{
    struct _NSRefCountedRunArray *theList;
}

- (id)description;
- (unsigned long long)count;
- (id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long *)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 runIndex:(unsigned long long *)arg3;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)_makeNewListFrom:(struct _NSRefCountedRunArray *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray *)arg1;
- (id)init;

@end


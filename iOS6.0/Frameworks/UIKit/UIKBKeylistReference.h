/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface UIKBKeylistReference : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    id m_value;
    NSArray *m_nameElements;
    int m_startKeyIndex;
    int m_endKeyIndex;
    unsigned int m_flags;
}

+ (id)referenceWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;
@property(readonly, nonatomic) int endKeyIndex; // @synthesize endKeyIndex=m_endKeyIndex;
@property(readonly, nonatomic) int startKeyIndex; // @synthesize startKeyIndex=m_startKeyIndex;
@property(readonly, nonatomic) NSArray *nameElements; // @synthesize nameElements=m_nameElements;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=m_flags;
@property(retain, nonatomic) id value; // @synthesize value=m_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
- (void)setNameElements:(id)arg1;
- (void)setFlags:(unsigned int)arg1 setStartKeyIndex:(int)arg2 setEndKeyIndex:(int)arg3;
- (unsigned int)endIndexForListCount:(unsigned int)arg1;
- (unsigned int)startIndexForListCount:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL isAttributesReference;
@property(readonly, nonatomic) BOOL isGeometryReference;
@property(readonly, nonatomic) BOOL isKeyIndexRangeReference;
@property(readonly, nonatomic) BOOL isKeyIndexReference;
@property(readonly, nonatomic) BOOL isNamedKeyReference;
@property(readonly, nonatomic) BOOL isKeysReference;
@property(readonly, nonatomic) BOOL isKeylistReference;
@property(readonly, nonatomic) BOOL isKeysetReference;
@property(readonly, nonatomic) NSString *keyName;
@property(readonly, nonatomic) NSString *keylistName;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@interface GEOSearchSubstring : PBCodable
{
    int _stringType;
    int _beginIndex;
    int _endIndex;
}

@property(nonatomic) int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) int beginIndex; // @synthesize beginIndex=_beginIndex;
@property(nonatomic) int stringType; // @synthesize stringType=_stringType;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end

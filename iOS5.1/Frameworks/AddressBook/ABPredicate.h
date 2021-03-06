/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPredicate.h"

@interface ABPredicate : NSPredicate
{
}

+ (id)personPredicateWithNameLike:(id)arg1 addressBook:(void *)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 group:(void *)arg2 source:(void *)arg3 account:(id)arg4 showingPersonLinks:(BOOL)arg5 addressBook:(void *)arg6;
+ (id)personPredicateWithNameLike:(id)arg1 group:(void *)arg2 source:(void *)arg3 account:(id)arg4 showingPersonLinks:(BOOL)arg5 includeSourceInResults:(BOOL)arg6 addressBook:(void *)arg7;
+ (id)personPredicateWithNameLike:(id)arg1 showingPersonLinks:(BOOL)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithName:(id)arg1 addressBook:(void *)arg2;
+ (id)personPredicateWithNameOnly:(id)arg1 account:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithValue:(id)arg1 comparison:(long)arg2 forProperty:(int)arg3;
+ (id)personPredicateWithAnyValueForProperty:(int)arg1;
+ (id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithGroup:(void *)arg1 source:(void *)arg2 account:(id)arg3;
+ (id)newQueryWithProperties:(id)arg1 joins:(id)arg2 whereString:(id)arg3 sortOrder:(unsigned int)arg4 groupByProperties:(id)arg5 addressBook:(void *)arg6 propertyIndices:(const struct __CFDictionary **)arg7;
+ (id)newQueryFromABPredicate:(id)arg1 withSortOrder:(unsigned int)arg2 addressBook:(void *)arg3 propertyIndices:(const struct __CFDictionary **)arg4;
+ (id)newQueryFromCompoundPredicate:(id)arg1 withSortOrder:(unsigned int)arg2 addressBook:(void *)arg3 propertyIndices:(const struct __CFDictionary **)arg4;
+ (void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned int)arg2 inAddressBook:(void *)arg3 withDelegate:(id)arg4;
- (id)init;
- (void)dealloc;
- (id)predicateFormat;
- (BOOL)isValid;
- (id)querySelectProperties;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (id)queryGroupByProperties;
- (id)queryWhereString;
- (BOOL)hasCallback;
- (void *)callbackContext;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context *)arg1 predicateContext:(void *)arg2 values:(struct Mem **)arg3 count:(int)arg4;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (void)bindString:(id)arg1 toStatement:(struct CPSqliteStatement *)arg2 withBindingOffset:(int *)arg3;
- (void)bindDouble:(double)arg1 toStatement:(struct CPSqliteStatement *)arg2 withBindingOffset:(int *)arg3;

@end


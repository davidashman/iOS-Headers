/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "RTSqliteTable.h"

@interface RTSqliteTableLocation : RTSqliteTable
{
}

+ (id)sharedInstance;
- (void)setLocation:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)_setLocation:(id)arg1;
- (void)fetchLocationsWithHandler:(id)arg1;
- (void)_fetchLocationsWithHandler:(id)arg1;
- (void)fetchLocationsBetweenStartDate:(id)arg1 andEndData:(id)arg2 withHandler:(id)arg3;
- (void)_fetchLocationsBetweenStartDate:(id)arg1 andEndData:(id)arg2 withHandler:(id)arg3;
- (id)getLocationsWithStatementString:(id)arg1;
- (id)init;
- (unsigned long long)encryptionClass;
- (id)tableColumns;
- (id)tableName;

@end


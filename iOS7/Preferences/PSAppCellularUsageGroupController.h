/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UsageFeedDelegate-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSObject<OS_dispatch_queue>, PSExpandableAppListGroupController;

@interface PSAppCellularUsageGroupController : NSObject <UsageFeedDelegate>
{
    NSArray *_cellularDataSwitches;
    _Bool _showInternalDetails;
    _Bool _cancelled;
    _Bool _enabled;
    NSNumber *_totalBytesUsed;
    NSNumber *_totalRoamingBytesUsed;
    PSExpandableAppListGroupController *_appGroupController;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSDictionary *_systemServiceCategoryNames;
}

@property(retain, nonatomic) NSDictionary *systemServiceCategoryNames; // @synthesize systemServiceCategoryNames=_systemServiceCategoryNames;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool showInternalDetails; // @synthesize showInternalDetails=_showInternalDetails;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) PSExpandableAppListGroupController *appGroupController; // @synthesize appGroupController=_appGroupController;
@property(retain, nonatomic) NSNumber *totalRoamingBytesUsed; // @synthesize totalRoamingBytesUsed=_totalRoamingBytesUsed;
@property(retain, nonatomic) NSNumber *totalBytesUsed; // @synthesize totalBytesUsed=_totalBytesUsed;
- (void)_createAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4;
- (void)_categorizeApps:(id)arg1 completion:(id)arg2;
- (id)alwaysDisplayedBundleIdentifiers;
- (id)forcedBundleIdentiferForBundleIdentifier:(id)arg1;
- (void)_calculateUsageForSubscriberIdentifier:(id)arg1 inWorkspace:(id)arg2;
- (void)_updateTotalBytesUsed:(double)arg1 roamingBytesUsed:(double)arg2;
- (id)specifierForSpecialCategory:(id)arg1 bytesUsed:(id)arg2;
- (id)nameForSpecialCategory:(id)arg1;
- (id)specifierForApp:(id)arg1 enabled:(_Bool)arg2;
- (id)dataUsageForApplicationSpecifier:(id)arg1;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setSwitchesEnabled:(_Bool)arg1;
- (void)setWorkspaceInformation:(id)arg1;
- (void)cancel;
- (id)specifiers;
- (void)dealloc;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, SBNewsstandIcon, SBRootFolder;

@interface SBIconModel : NSObject
{
    NSDictionary *_lastKnownUserGeneratedIconState;
    NSSet *_lastKnownUserGeneratedIconStateFlattened;
    NSMutableDictionary *_leafIconsByIdentifier;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    BOOL _tagsHaveBeenSet;
    NSMutableSet *_downloadedIconIDs;
    SBRootFolder *_rootFolder;
    SBNewsstandIcon *_newsstandIcon;
    BOOL _needsRelayout;
    BOOL _allowReadingCachedStateFromDisk;
}

+ (id)sharedInstance;
+ (id)_migrateLeafIdentifierIfNecessary:(id)arg1;
+ (id)_modernIconCellForCell:(id)arg1;
+ (id)_modernIconListForList:(id)arg1;
+ (id)_modernIconListsForLists:(id)arg1;
+ (id)modernIconStateForState:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)rootFolder;
- (id)newsstandIcon;
- (id)newsstandFolder;
- (void)localeChanged;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
- (BOOL)isIconVisible:(id)arg1;
- (id)addDownloadingIconForDownload:(id)arg1;
- (id)addDownloadingIconForIdentifier:(id)arg1;
- (void)removeApplicationIconForDownloadingIcon:(id)arg1;
- (id)downloadingIconForIdentifier:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (void)addIconForApplication:(id)arg1;
- (void)addNewsstandIcon;
- (void)loadAllIcons;
- (id)visibleIconIdentifiers;
- (id)leafIcons;
- (id)_applicationIcons;
- (id)leafIconForIdentifier:(id)arg1;
- (id)applicationIconForDisplayIdentifier:(id)arg1;
- (id)iconState;
- (id)iconStatePath;
- (id)_cachedIconStatePath;
- (id)_iconState:(BOOL)arg1;
- (void)noteIconStateChangedExternally;
- (id)firstPageLeafIdentifiers;
- (void)_createIconLists;
- (void)uninstallBookmarkIcon:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)removeIconForIdentifier:(id)arg1;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (id)_indexPathForIdentifier:(id)arg1 inListRepresentation:(id)arg2;
- (id)_indexPathForIdentifier:(id)arg1 inListsRepresentation:(id)arg2;
- (BOOL)hasCachedUserGeneratedIconState;
- (void)clearCachedUserGeneratedIconState;
- (void)clearCachedUserGeneratedIconStateIfPossible;
- (id)_indexPathForFirstFreeNewsstandSlot;
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(char *)arg2 replaceExistingIconAtIndexPath:(id *)arg3;
- (void)_addNewIconToDesignatedLocation:(id)arg1;
- (void)deleteIconState;
- (BOOL)_writeIconState:(id)arg1 toPath:(id)arg2;
- (BOOL)_writeIconState:(id)arg1 toPath:(id)arg2 withFormat:(unsigned int)arg3;
- (void)_writeCurrentIconStateWithNotification:(BOOL)arg1;
- (void)_writeCachedIconState;
- (void)saveIconState;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;
- (void)_flattenIconListState:(id)arg1 intoArray:(id)arg2;
- (id)newsstandFolderFromIconState:(id)arg1;
- (id)_newsstandIconIdentifiersFromIconState:(id)arg1;
- (id)_flattenIconState:(id)arg1;
- (void)noteFolderStoppedAnimating;
- (void)noteDownloadsEnded;
- (void)noteDownloadCompletedForIconID:(id)arg1;
- (void)removeDownloadedIconID:(id)arg1;
- (id)downloadedIconIDs;
- (void)relayout;
- (void)uninstallApplicationIcon:(id)arg1;
- (id)forecastedLayoutForIconState:(id)arg1;
- (void)_addNodeToRootLists:(id)arg1 node:(id)arg2 createListIfNecessary:(BOOL)arg3;
- (id)_trimList:(id)arg1 toMaxSize:(int)arg2;
- (id)_deepCopyIconState:(id)arg1;
- (id)_deepCopyListForIconState:(id)arg1;
- (id)exportState:(BOOL)arg1;
- (id)exportPendingState:(BOOL)arg1;
- (id)exportFlattenedState:(BOOL)arg1;
- (id)_iTunesIconListsForLists:(id)arg1 preApex:(BOOL)arg2 forPending:(BOOL)arg3;
- (id)_iTunesIconListForList:(id)arg1 preApex:(BOOL)arg2 forPending:(BOOL)arg3;
- (id)_iTunesIconCellForCell:(id)arg1 preApex:(BOOL)arg2 forPending:(BOOL)arg3;
- (id)_iTunesDictionaryForLeafIdentifier:(id)arg1;
- (id)_iTunesDictionaryForLeafIcon:(id)arg1;
- (id)_iTunesDictionaryForDownloadingIcon:(id)arg1;
- (BOOL)importState:(id)arg1;

@end

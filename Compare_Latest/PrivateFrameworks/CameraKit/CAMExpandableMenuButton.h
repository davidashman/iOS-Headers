//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, UIView;

@interface CAMExpandableMenuButton : UIControl
{
    BOOL _expanded;
    int _selectedIndex;
    int _expansionOrientation;
    int _orientation;
    id <CAMExpandableMenuButtonDelegate> _expandableMenuDelegate;
    NSMutableArray *__menuItems;
    UIView *__headerView;
    NSIndexSet *__hiddenIndexesWhileCollapsed;
    NSMutableIndexSet *__highlightedIndexesWhileCollapsed;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (double)expansionDuration;
@property(readonly, copy, nonatomic) NSMutableIndexSet *_highlightedIndexesWhileCollapsed; // @synthesize _highlightedIndexesWhileCollapsed=__highlightedIndexesWhileCollapsed;
@property(readonly, copy, nonatomic) NSIndexSet *_hiddenIndexesWhileCollapsed; // @synthesize _hiddenIndexesWhileCollapsed=__hiddenIndexesWhileCollapsed;
@property(readonly, nonatomic) UIView *_headerView; // @synthesize _headerView=__headerView;
@property(readonly, nonatomic) NSMutableArray *_menuItems; // @synthesize _menuItems=__menuItems;
@property(nonatomic) __weak id <CAMExpandableMenuButtonDelegate> expandableMenuDelegate; // @synthesize expandableMenuDelegate=_expandableMenuDelegate;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int expansionOrientation; // @synthesize expansionOrientation=_expansionOrientation;
@property(readonly, nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (BOOL)shouldIgnoreMenuInteraction;
- (id)hiddenIndexesWhileCollapsed;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(int)arg1;
- (int)numberOfMenuItems;
- (void)updateToContentSize:(id)arg1;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 forIndex:(int)arg2;
- (void)_updateFromOrientationChangeAnimated:(BOOL)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_applyMenuItemTextAlignmentForCurrentOrientation;
- (void)completeExpansionToProposedFrame:(struct CGRect)arg1;
- (void)finishExpansionAnimated:(BOOL)arg1;
- (void)startExpansionWithProposedFrame:(struct CGRect)arg1;
- (void)finishCollapsingAnimated:(BOOL)arg1;
- (void)startCollapsingWithProposedFrame:(struct CGRect)arg1;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect)arg1;
- (void)_updateFromExpansionChangeAnimated:(BOOL)arg1;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemColorsForCurrentState;
- (void)collapseMenuAnimated:(BOOL)arg1;
- (void)expandMenuAnimated:(BOOL)arg1;
- (void)reloadData;
- (void)_updateFromSelectedIndexChange;
- (id)_selectedLabel;
- (BOOL)_wantsSelectedItemToBeVisible;
- (void)layoutSubviews;
- (struct CGSize)_layoutMenuButton:(BOOL)arg1 expanded:(BOOL)arg2;
- (struct CGSize)_layoutForVerticalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2;
- (struct CGSize)_layoutForHorizontalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2;
- (struct CGSize)_layoutForVerticalExpandedLandscapeButton:(BOOL)arg1;
- (struct CGSize)_layoutForHorizontalExpandedLandscapeButton:(BOOL)arg1;
- (struct CGSize)_layoutForVerticalExpandedPortraitButton:(BOOL)arg1;
- (struct CGSize)_layoutForHorizontalExpandedPortraitButton:(BOOL)arg1;
- (struct CGSize)_layoutForVerticalCollapsedLandscapeButton:(BOOL)arg1;
- (struct CGSize)_layoutForHorizontalCollapsedLandscapeButton:(BOOL)arg1;
- (struct CGSize)_layoutForVerticalCollapsedPortraitButton:(BOOL)arg1;
- (struct CGSize)_layoutForHorizontalCollapsedPortraitButton:(BOOL)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSizeForExpansion:(BOOL)arg1;
- (struct CGRect)frameForAlignmentRect:(struct CGRect)arg1 expanded:(BOOL)arg2;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1 expanded:(BOOL)arg2;
- (id)initWithExpansionOrientation:(int)arg1;
- (id)init;

@end


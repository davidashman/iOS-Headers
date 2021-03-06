//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ABPersonEditDelegate.h"
#import "ABPersonTableViewDataSourceDelegate.h"
#import "ABPersonViewControllerDelegate.h"
#import "ABPickerViewControllerDismissDelegate.h"
#import "ABPopoverRepresentDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIViewControllerRestoration.h"

@class ABDatePickerViewController, ABMultiCellContentView_RelatedName, ABPeoplePickerNavigationController, ABPersonTableView, ABPersonTableViewDataSource, ABPersonTableViewLinkingDelegate, ABUIPerson, NSArray, NSIndexPath, NSString, UIBarButtonItem, UIPopoverController, UITableView, UIView, UIViewController;

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate, UIScrollViewDelegate, UIViewControllerRestoration>
{
    UIViewController *_viewController;
    id <ABPersonEditDelegate> _editDelegate;
    struct __CFArray *_displayedProperties;
    ABDatePickerViewController *_datePickerViewController;
    BOOL _isAnimatingDatePickerInputView;
    BOOL _willPresentDatePickerViewController;
    id _activeDialog;
    id _deletionDelegate;
    id _actionSheetDelegate;
    BOOL _allowsSettingAsPreferredCardForName;
    BOOL _animatedRight;
    BOOL _automaticallySetEditing;
    BOOL _allowsAddingToAddressBook;
    BOOL _showsPeoplePickerCancelButton;
    BOOL _savesNewContactOnSuspend;
    void *_addressBook;
    struct __CFDictionary *_valueByProperty;
    id <ABStyleProvider> _styleProvider;
    id <ABCardContentProvider> _cardContentProvider;
    BOOL _isOverridingCardContentProvider;
    UIView *_cardContentProviderHeaderView;
    int _selectedCardContentIndex;
    BOOL _isLocation;
    NSString *_addToPersonButtonTitle;
    UIBarButtonItem *_reusableCancelButton;
    ABPersonTableView *_controllerTableView;
    unsigned int _modelDatabaseLocalChangeCancellationCount;
    NSIndexPath *_popoverCellIndexPath;
    NSIndexPath *_popoverViewInCellIndexPath;
    UIPopoverController *_presentationPopoverController;
    ABPeoplePickerNavigationController *_peoplePickerForLinking;
    ABPeoplePickerNavigationController *_peoplePickerForAddToContacts;
    ABPeoplePickerNavigationController *_peoplePickerForRelatedNames;
    ABMultiCellContentView_RelatedName *_relatedPersonCell;
    BOOL _disablePopoverUpdates;
    int _favoritesListChangeNotificationCount;
    BOOL _hasAddedUnknownPersonActions;
    ABUIPerson *_displayedPerson;
    NSArray *_displayedPeople;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewLinkingDelegate *_linkingDelegate;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) NSIndexPath *popoverViewInCellIndexPath; // @synthesize popoverViewInCellIndexPath=_popoverViewInCellIndexPath;
@property(retain, nonatomic) NSIndexPath *popoverCellIndexPath; // @synthesize popoverCellIndexPath=_popoverCellIndexPath;
@property(copy, nonatomic) NSString *addToPersonButtonTitle; // @synthesize addToPersonButtonTitle=_addToPersonButtonTitle;
@property(readonly, nonatomic) UITableView *controllerTableView; // @synthesize controllerTableView=_controllerTableView;
@property(nonatomic) ABPersonTableViewLinkingDelegate *linkingDelegate; // @synthesize linkingDelegate=_linkingDelegate;
@property(nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) BOOL disablePopoverUpdates; // @synthesize disablePopoverUpdates=_disablePopoverUpdates;
@property(nonatomic) BOOL savesNewContactOnSuspend; // @synthesize savesNewContactOnSuspend=_savesNewContactOnSuspend;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL isLocation; // @synthesize isLocation=_isLocation;
@property(nonatomic) BOOL allowsAddingToAddressBook; // @synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook;
@property(nonatomic) BOOL allowsSettingAsPreferredCardForName; // @synthesize allowsSettingAsPreferredCardForName=_allowsSettingAsPreferredCardForName;
@property(nonatomic) BOOL showsPeoplePickerCancelButton; // @synthesize showsPeoplePickerCancelButton=_showsPeoplePickerCancelButton;
@property(readonly, nonatomic) NSArray *displayedPeople; // @synthesize displayedPeople=_displayedPeople;
@property(retain, nonatomic) ABUIPerson *displayedPerson; // @synthesize displayedPerson=_displayedPerson;
@property(nonatomic) BOOL automaticallySetEditing; // @synthesize automaticallySetEditing=_automaticallySetEditing;
@property(nonatomic) id <ABPersonEditDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)viewToRepresentPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)shouldBeRemovedFromNavigationStack;
- (void)preferredPersonDidChangeToPerson:(void *)arg1;
- (void)imageUpdatedForPerson:(void *)arg1;
- (void)personWasDeleted;
- (void)dismissPickerViewController:(id)arg1;
- (BOOL)updateAllDataForExternalChange;
- (void)updateTableDataForExternalChange;
- (BOOL)updatePeopleDataForExternalChange;
- (BOOL)_updatePeopleDataForExternalChangeWithFullReload:(BOOL)arg1;
- (void)addressBookChangedLocally:(struct __CFDictionary *)arg1;
- (void)ignoreNextLocalChange;
- (void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(BOOL)arg2;
- (void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1;
- (float)personTableViewDataSourceHeaderPadding:(id)arg1;
- (BOOL)personTableViewDataSourceShouldShowHeader:(id)arg1;
- (void)personTableViewDataSourceDidReloadData:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2;
- (BOOL)personTableViewDataSourceIsInPopover:(id)arg1;
- (void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5;
- (void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
- (BOOL)personTableViewDataSourceIsLocation:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3;
- (void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2;
- (void)_attemptSave;
- (void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (BOOL)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
- (void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
- (void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(int)arg2;
- (BOOL)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
- (BOOL)personTableViewDataSourceShouldShowContactSources:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
- (void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
- (BOOL)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
- (void)_dismissDatePickerInputViewAnimated:(BOOL)arg1;
- (void)_datePickerInputViewDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_presentDatePickerViewControllerAsInputView:(id)arg1 andScrollToIndexPath:(id)arg2;
- (BOOL)shouldAnimateDatePickerInputView;
- (BOOL)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
@property(readonly, nonatomic) BOOL hasPopoverController;
- (void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(BOOL)arg2;
- (void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(BOOL)arg3;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (BOOL)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(BOOL)arg5;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(BOOL)arg2;
- (void)performActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performInstantMessageActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (id)_chatURLWithPropertyValue:(id)arg1;
- (void)performSocialProfileActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performDefaultActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2;
- (void)performAction:(int)arg1 forPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)performAction:(int)arg1 forPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 withContext:(void *)arg4;
- (void)weiboActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)twitterActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)performWeiboActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (void)performTwitterActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (void)openSocialProfile:(id)arg1;
- (void)showWeiboSheetForPropertyValue:(id)arg1;
- (void)showTweetSheetForPropertyValue:(id)arg1;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (BOOL)shouldShowAddToExistingContact;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)peoplePickerNavigationController:(id)arg1 setRelatedPerson:(id)arg2;
- (void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(id)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void *)arg3;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void *)arg2 insertProperty:(int *)arg3 copyInsertValue:(id *)arg4 copyInsertLabel:(id *)arg5;
- (void)_mergeIntoDisplayedPerson:(void *)arg1;
- (BOOL)copyInsertValue:(id *)arg1 property:(int *)arg2 forPerson:(void *)arg3;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1;
- (void)_presentPeoplePickerNavigationController:(id)arg1 fromView:(id)arg2 inPopover:(BOOL)arg3;
- (id)_preparePeoplePicker;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2 informDelegate:(BOOL)arg3;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (id)_newContactViewControllerForAddToContacts;
- (void)_addProperties:(id)arg1 toPerson:(id)arg2;
- (id)viewControllerToPresentModal;
- (void)deleteDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)removeDisplayedPeople;
- (void)removeSelectedPerson;
- (void)removeSelectedPersonFromBarButtonItem:(id)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)ab_updatePopoverSize;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadViewWithPerson:(id)arg1 allowDeletion:(BOOL)arg2 allowActions:(BOOL)arg3;
- (void)loadUnknownViewWithPerson:(id)arg1 allowActions:(BOOL)arg2;
- (void)addUnknownPersonActionsIfNeeded;
- (void)contentSwitchingTabsTapped:(id)arg1;
- (void)showSelectedContentView;
- (id)prepareViewWithPerson:(id)arg1;
- (void)updateContentSwitchingTabs;
- (void)didDismissModalViewController;
- (void)viewDidLoad;
- (void)notifyScrollViewDidLoad;
- (void)updateEditButton;
- (void)presentModalViewController:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)viewForActionSheet;
- (BOOL)makeFirstFieldBecomeFirstResponder;
@property(readonly, nonatomic) id <ABPersonViewControllerPrivateDelegate> personViewDelegate;
- (id)newPersonViewDelegate;
@property(readonly, nonatomic) id <ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;
- (void)updateLinkBarButtonItem;
- (void)setDatePickerViewController:(id)arg1;
- (void)updateRecord;
- (void)reloadNameData;
- (void)reloadData;
- (void)updateDisplayedPeopleAndReloadData;
- (void)setAsPreferredCardForName:(id)arg1;
- (void)updateAllowsSettingAsPreferredCardForName;
- (void)_conferencingAvailabilityChanged:(id)arg1;
- (void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)_favoritesListChanged:(id)arg1;
- (void)setAllowsActions:(BOOL)arg1;
@property(readonly, getter=isReadonly) BOOL readonly;
@property(copy, nonatomic) NSArray *displayedProperties;
- (void)_updateDisplayedPeople;
- (void)_updateDisplayedPeopleForcingReloadData:(BOOL)arg1;
- (void)setDisplayedPeople:(id)arg1 forceReload:(BOOL)arg2;
@property(readonly, nonatomic) UIBarButtonItem *reusableCancelButton;
@property(readonly, nonatomic) void *existingAddressBook;
@property(nonatomic) void *addressBook;
- (id)_personToUseForAddressBook;
- (void)setCardContentProvider:(id)arg1;
- (void)_setCardContentProvider:(id)arg1;
- (BOOL)_shouldHideContentSwitchingTabsWhenEditing:(BOOL)arg1;
- (void)_updateCardContentProviderHeaderViewForEditing:(BOOL)arg1;
- (void)_updateBackgroundForCardContentProvider;
- (void)client:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)setActiveDialog:(id)arg1;
- (id)personContainerView;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 style:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAbstractSlide.h>

#import "TSKTransformableObject.h"
#import "TSSThemeAsset.h"

@class KNClassicStylesheetRecord, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface KNMasterSlide : KNAbstractSlide <TSSThemeAsset, TSKTransformableObject>
{
    NSString *mName;
    struct CGRect mObjectRect;
    KNClassicStylesheetRecord *mClassicStylesheetRecord;
    NSArray *mBodyParagraphStyles;
    NSArray *mBodyListStyles;
    NSString *mThumbnailTextForTitlePlaceholder;
    NSString *mThumbnailTextForBodyPlaceholder;
    BOOL mSlideObjectsLayerWithMaster;
    BOOL mHasBug16580905;
    BOOL mCalculatedHasBug16580905;
}

+ (id)p_defaultMasterGuideColor;
+ (void)setMasterGuideColor:(id)arg1;
+ (id)masterGuideColor;
+ (void)initialize;
@property(readonly, nonatomic) KNClassicStylesheetRecord *classicStylesheetRecord; // @synthesize classicStylesheetRecord=mClassicStylesheetRecord;
- (id)objectForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (BOOL)containsProperty:(int)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (void)updatePlaceholderText;
- (id)alignmentGuidesForEditing;
- (id)alignmentGuides;
- (void)wasAddedToTheme:(id)arg1;
- (void)willBeAddedToTheme:(id)arg1;
- (BOOL)isThemeContent;
- (id)childEnumerator;
- (id)nonPlaceholderObjects;
- (id)imagePlaceholders;
- (BOOL)isObjectVisible;
- (void)dealloc;
- (SEL)mapThemeAssetSelector;
- (BOOL)isThemeEquivalent:(id)arg1;
- (id)thumbnailTextForPlaceholder:(id)arg1;
- (id)p_defaultThumbnailTextForPlaceholder:(id)arg1;
- (id)tagsforNewPlaceholderInfos:(id)arg1;
- (id)tagforNewPlaceholderInfo:(id)arg1;
- (id)p_defaultTagForDrawable:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1 andSlideNode:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithSlideNode:(id)arg1 context:(id)arg2;
@property(nonatomic) BOOL slideObjectsLayerWithMaster;
@property(retain, nonatomic) NSString *thumbnailTextForBodyPlaceholder;
@property(retain, nonatomic) NSString *thumbnailTextForTitlePlaceholder;
@property(copy, nonatomic) NSArray *bodyListStyles;
@property(copy, nonatomic) NSArray *bodyParagraphStyles;
@property(nonatomic) struct CGRect objectRect;
@property(retain, nonatomic) NSString *name;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (BOOL)hasBug16580905;
- (void)generateObjectPlaceholderIfNecessary;
- (id)packageLocator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


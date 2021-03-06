//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DGeometryCollector.h>

#import "TSCH3DChartAllElementSceneObjectDelegate.h"
#import "TSCH3DSceneObjectDelegator.h"

@class NSString, TSCH3DChartModelEnumerator, TSCHChartSeries;

__attribute__((visibility("hidden")))
@interface TSCH3DChartGeometryArrayCompiler : TSCH3DGeometryCollector <TSCH3DSceneObjectDelegator, TSCH3DChartAllElementSceneObjectDelegate>
{
    tvec2_3b141483 mCurrentElementIndex;
    TSCH3DChartModelEnumerator *mEnumeratorSeries;
    id <TSCH3DChartGeometryArrayCompilerDelegate> mDelegate;
}

+ (void)p_compileScene:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)compileSceneObject:(id)arg1 scene:(id)arg2 delegate:(id)arg3;
@property(readonly, nonatomic) tvec2_3b141483 currentElementIndex; // @synthesize currentElementIndex=mCurrentElementIndex;
@property(retain, nonatomic) id <TSCH3DChartGeometryArrayCompilerDelegate> delegate; // @synthesize delegate=mDelegate;
- (id).cxx_construct;
- (void)p_endCompile;
- (void)submit:(const struct PrimitiveInfo *)arg1;
- (id)p_transformBuffer:(id)arg1 forVariable:(id)arg2 offset:(unsigned int)arg3 count:(unsigned int)arg4;
- (int)texture:(id)arg1 attributes:(const struct TextureAttributes *)arg2;
- (int)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs *)arg3;
- (struct ObjectState *)currentObjectState;
- (StateStack_15d84650 *)objectStateStack;
- (id)matrixProcessor;
- (id)objectStateProcessor;
- (id)combinationProcessor;
- (BOOL)willSubmitElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willRenderElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (void)didTransformElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass)renderPassForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willProcessElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didEndProcessingSceneObject:(id)arg1;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
@property(readonly, nonatomic) TSCHChartSeries *chartSeries;
- (void)dealloc;
- (id)p_initWithScene:(id)arg1;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


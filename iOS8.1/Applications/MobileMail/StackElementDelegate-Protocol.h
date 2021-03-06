/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol StackElementDelegate
- (void)stackElement:(id)arg1 targetStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(id)arg1 currentStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(id)arg1 willRemoveView:(id)arg2;
- (id)viewBelowStackElement:(id)arg1;
- (id)viewForStackElement:(id)arg1;
- (_Bool)stackIsTerminating;
- (long long)maximumStackElementDepth;
- (struct UIEdgeInsets)stackContainerViewEdgeInsets;
- (id)stackContainerView;
@end


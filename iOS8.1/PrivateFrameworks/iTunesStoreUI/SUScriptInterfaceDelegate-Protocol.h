//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMElement, ISURLRequestPerformance, SUDOMElement, SUScriptInterface, SUViewController;

@protocol SUScriptInterfaceDelegate <NSObject>

@optional
- (ISURLRequestPerformance *)performanceMetricsForScriptInterface:(SUScriptInterface *)arg1;
- (SUViewController *)parentViewControllerForScriptInterface:(SUScriptInterface *)arg1;
- (SUDOMElement *)DOMElementForScriptInterface:(SUScriptInterface *)arg1 element:(DOMElement *)arg2;
@end


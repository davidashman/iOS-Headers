/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PINView.h>

@class UIPasscodeField;

@interface NumericPINView : PINView
{
    UIPasscodeField *_passcodeField;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)hidePasscodeField:(BOOL)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)deleteLastCharacter;
- (void)appendString:(id)arg1;
- (void)showFailedAttempts:(int)arg1;

@end


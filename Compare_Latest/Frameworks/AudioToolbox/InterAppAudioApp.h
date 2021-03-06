//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface InterAppAudioApp : NSObject
{
    BOOL _isHost;
    BOOL _isCurrentApp;
    int _key;
    NSString *_name;
    UIImage *_icon;
    NSURL *_url;
}

@property(readonly, nonatomic) BOOL isCurrentApp; // @synthesize isCurrentApp=_isCurrentApp;
@property(readonly, nonatomic) BOOL isHost; // @synthesize isHost=_isHost;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int key; // @synthesize key=_key;
- (id)description;
- (void)dealloc;
- (id)init:(const struct InterAppAudioAppInfo *)arg1 iconSize:(float)arg2;

@end


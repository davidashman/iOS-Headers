//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXAccessQueue, NSMutableArray;

@interface AXUIMessageSender : NSObject
{
    BOOL _sendingMessage;
    id <AXUIMessageSenderDelegate> _delegate;
    NSMutableArray *_messageQueue;
    AXAccessQueue *_messageSchedulingSerializationQueue;
}

@property(nonatomic, getter=isSendingMessage) BOOL sendingMessage; // @synthesize sendingMessage=_sendingMessage;
@property(retain, nonatomic) AXAccessQueue *messageSchedulingSerializationQueue; // @synthesize messageSchedulingSerializationQueue=_messageSchedulingSerializationQueue;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(nonatomic) id <AXUIMessageSenderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned int)arg2 context:(void *)arg3 error:(id *)arg4;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned int)arg2 context:(void *)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_performBlock:(CDUnknownBlockType)arg1 inAccessQueue:(id)arg2 treatAsWritingBlock:(BOOL)arg3;
- (void)_didFinishSendingXPCMessage:(id)arg1 replyCustomData:(void *)arg2;
- (void)_sendXPCMessage:(id)arg1 context:(void *)arg2 remainingAttempts:(unsigned int)arg3 previousError:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end


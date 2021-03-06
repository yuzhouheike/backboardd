//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BKSTouchDeliveryPolicyServerInterface-Protocol.h"
#import "NSXPCConnectionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class BKSTouchDeliveryPolicy, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BKTouchDeliveryPolicyServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, BKSTouchDeliveryPolicyServerInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableSet *_assertionConnections;
    BKSTouchDeliveryPolicy *_policy;
}

+ (id)sharedServer;
@property(retain, setter=_queue_setPolicy:) BKSTouchDeliveryPolicy *_policy; // @synthesize _policy;
- (_Bool)shouldCancelTouchesDeliveredToContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
- (id)shouldDeliverTouchesToContextIds:(unsigned int *)arg1 count:(long long)arg2;
- (void)ipc_addPolicy:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)run;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


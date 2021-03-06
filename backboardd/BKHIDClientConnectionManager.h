//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface BKHIDClientConnectionManager : NSObject
{
    struct __IOHIDEventSystem *_hidEventSystem;
    NSMapTable *_taskPortToClientConnectionMapping;
    NSMapTable *_pidToClientConnectionMapping;
    NSMapTable *_pidToBundleIDMapping;
    struct __CFDictionary *_hidConnectionToBKConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

- (void)_clientConnectionRemoved:(struct __IOHIDEventSystemConnection *)arg1;
- (void)_clientConnectionAdded:(struct __IOHIDEventSystemConnection *)arg1;
- (int)_queue_pidForBundleID:(id)arg1;
- (id)clientForDestination:(id)arg1;
- (id)clientForTaskPort:(unsigned int)arg1;
- (struct __IOHIDEventSystemConnection *)copyClientForDestination:(id)arg1;
- (struct __IOHIDEventSystemConnection *)copyClientForTaskPort:(unsigned int)arg1;
- (int)pidForBundleID:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithHIDEventSystem:(struct __IOHIDEventSystem *)arg1;

@end


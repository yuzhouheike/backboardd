//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BKIOHIDServiceDisappearanceObserver-Protocol.h"
#import "BKIOHIDServiceMatchObserver-Protocol.h"

@class BKIOHIDServiceMatcher, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchPadManager : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver>
{
    NSObject<OS_dispatch_queue> *_touchPadQueue;
    NSMutableDictionary *_queue_currentTouchPads;
    BKIOHIDServiceMatcher *_touchPadMatcher;
}

+ (id)sharedInstance;
- (void)_queue_sendCancelEventForTouchPad:(id)arg1;
- (void)_queue_handleEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2;
- (void)_queue_sendEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2 toDestination:(id)arg3;
- (void)_queue_touchPadsDetected:(id)arg1;
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;
- (void)_queue_touchPadRemoved:(id)arg1;
- (void)serviceDidDisappear:(id)arg1;
- (void)sendCancelEventForAllDisplays;
- (void)sendCancelEventForDisplay:(id)arg1;
- (_Bool)filterEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


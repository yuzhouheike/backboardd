//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BKEventFocusManagerServer, NSMapTable;
@protocol OS_dispatch_queue;

@interface BKTouchDeliveryObservationManager : NSObject
{
    BKEventFocusManagerServer *_focusServer;
    NSMapTable *_touchIdentifiersToContextIDs;
    NSMapTable *_touchIdentifiersToPids;
    NSObject<OS_dispatch_queue> *_touchMapQueue;
}

+ (id)sharedInstance;
- (void)noteTouchUpOccured:(unsigned int)arg1 detached:(_Bool)arg2 context:(unsigned int)arg3 clientPort:(unsigned int)arg4 observers:(id)arg5;
- (void)noteTouchDetached:(unsigned int)arg1 context:(unsigned int)arg2 clientPort:(unsigned int)arg3 observers:(id)arg4;
- (int)_pidForClientPort:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end


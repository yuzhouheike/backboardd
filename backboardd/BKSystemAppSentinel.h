//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BKSystemApplicationServerDelegate-Protocol.h"

@class BKSystemAppHeartbeat, BKSystemApplication, BKSystemApplicationServer, NSLock, NSMapTable, NSMutableSet, NSString;

@interface BKSystemAppSentinel : NSObject <BKSystemApplicationServerDelegate>
{
    NSLock *_lock;
    BKSystemApplicationServer *_server;
    BKSystemApplication *_systemApp;
    NSMutableSet *_connectedSystemApps;
    NSMapTable *_checkinCompletionsBySystemApp;
    _Bool _readyForSystemApp;
    _Bool _systemAppBlocked;
    BKSystemAppHeartbeat *_heartbeat;
    unsigned int _enableIdleSleepAssertionID;
}

+ (id)sharedInstance;
- (void)server:(id)arg1 systemApp:(id)arg2 hasActions:(id)arg3;
- (void)server:(id)arg1 systemAppFinishBooting:(id)arg2;
- (void)server:(id)arg1 systemAppDisconnected:(id)arg2;
- (void)server:(id)arg1 systemAppWantsRestart:(id)arg2;
- (void)server:(id)arg1 systemAppCheckedIn:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)server:(id)arg1 systemAppConnected:(id)arg2;
- (_Bool)lock_unblockSystemApp;
- (_Bool)lock_blockSystemApp;
- (void)_handleRelaunchRequestFromSystemApp:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)lock_updatePrimarySystemApp;
- (void)lock_bootstrapSystemApp;
- (_Bool)unblockSystemApp;
- (_Bool)blockSystemApp;
- (_Bool)ping;
- (void)allowSystemAppCheckIn;
- (void)startSystemAppCheckInServer;
- (id)systemApplications;
- (id)systemApp;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


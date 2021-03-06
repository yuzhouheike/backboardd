//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BKAlternateSystemAppDelegate-Protocol.h"

@class BKAlternateSystemApp, NSString;
@protocol OS_dispatch_queue;

@interface BKAlternateSystemAppManager : NSObject <BKAlternateSystemAppDelegate>
{
    _Bool _blockingSystemApp;
    BKAlternateSystemApp *_alternateSystemApp;
    NSString *_openBundleId;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _pendingOpenResultBlock;
    CDUnknownBlockType _pendingExitBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType pendingExitBlock; // @synthesize pendingExitBlock=_pendingExitBlock;
@property(copy, nonatomic) CDUnknownBlockType pendingOpenResultBlock; // @synthesize pendingOpenResultBlock=_pendingOpenResultBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *openBundleId; // @synthesize openBundleId=_openBundleId;
@property(retain, nonatomic) BKAlternateSystemApp *alternateSystemApp; // @synthesize alternateSystemApp=_alternateSystemApp;
@property(nonatomic, getter=isBlockingSystemApp, setter=_setBlockingSystemApp:) _Bool blockingSystemApp; // @synthesize blockingSystemApp=_blockingSystemApp;
- (void)alternateSystemAppExited:(id)arg1 withContext:(id)arg2;
- (void)alternateSystemAppDidLaunch:(id)arg1;
- (void)alternateSystemAppDidFailToLaunch:(id)arg1;
- (void)_queue_cleanupAfterApp;
- (void)unblockSystemAppForAlternateSystemAppWithCompletion:(CDUnknownBlockType)arg1;
- (void)terminateAnyAlternateSystemApp;
- (void)terminateAlternateSystemApp:(id)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)openAlternateSystemApp:(id)arg1 options:(id)arg2 withResult:(CDUnknownBlockType)arg3 andExitBlock:(CDUnknownBlockType)arg4;
- (void)blockSystemAppForAlternateSystemAppWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


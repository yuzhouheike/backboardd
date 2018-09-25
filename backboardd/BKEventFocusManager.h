//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BKEventClientDelegate-Protocol.h"

@class BKEventFocusManagerServer, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface BKEventFocusManager : NSObject <BKEventClientDelegate>
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMapTable *_pidToClientMapping;
    NSString *_foregroundAppBundleID;
    int _foregroundAppPID;
    _Bool _systemAppControlsFocusOnMainDisplay;
    BKEventFocusManagerServer *_focusServer;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)clientDied:(id)arg1;
- (void)_noteSystemAppDidExit:(id)arg1;
- (id)focusServer;
- (id)_clientWithPid:(int)arg1 clientID:(id)arg2;
- (void)_removeClient:(id)arg1;
- (void)_addClient:(id)arg1;
- (void)addClient:(id)arg1;
- (id)_startingPointOfFocusChainOnDisplay:(id)arg1;
- (id)_propertiesWithFocusStartingWithProperties:(id)arg1 depth:(long long)arg2 iterationBlock:(CDUnknownBlockType)arg3;
- (void)_visitFocusClient:(id)arg1 propertyStack:(id)arg2 didEncounterCycleWithProperties:(id)arg3;
- (void)_visitFocusClient:(id)arg1 propertyStack:(id)arg2 currentDeferralProperties:(id)arg3;
- (id)_propertiesWithFocusStartingWithProperties:(id)arg1;
- (void)_updateDeferralPropertiesForAllDisplays;
- (id)destinationsForFocusedKeyCommandDescriptor:(id)arg1 withDisplay:(id)arg2;
- (void)addUniqueDestinationToSet:(id)arg1 destination:(id)arg2;
- (id)destinationForSystemApplicationWithDisplay:(id)arg1;
- (id)destinationForFocusedEventWithDisplay:(id)arg1;
- (id)_focusPropertiesWithDisplay:(id)arg1;
- (id)destinationForFocusedEventWithProperties:(id)arg1;
- (id)_destinationForFocusDeferralProperties:(id)arg1 display:(id)arg2 applyPolicy:(_Bool)arg3;
- (void)setDeferrals:(id)arg1 forClient:(id)arg2 pid:(int)arg3;
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;
- (void)systemAppControlsFocusOnMainDisplay:(_Bool)arg1;
- (id)conciseDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


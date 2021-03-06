//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSBasicServerClient.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSArray, NSDate, NSString;

@interface BKSystemApplication : BSBasicServerClient <BSDescriptionProviding>
{
    NSString *_bundlePath;
    NSDate *_connectDate;
    _Bool _checkedIn;
    _Bool _pendingCheckIn;
    _Bool _finishedStartup;
    int _pid;
    double _systemIdleSleepInterval;
    NSArray *_eventRouters;
    NSString *_bundleIdentifier;
    NSString *_jobLabel;
}

@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *jobLabel; // @synthesize jobLabel=_jobLabel;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSArray *eventRouters; // @synthesize eventRouters=_eventRouters;
@property(nonatomic) double systemIdleSleepInterval; // @synthesize systemIdleSleepInterval=_systemIdleSleepInterval;
@property(nonatomic) _Bool finishedStartup; // @synthesize finishedStartup=_finishedStartup;
@property(nonatomic) _Bool pendingCheckIn; // @synthesize pendingCheckIn=_pendingCheckIn;
@property(nonatomic) _Bool checkedIn; // @synthesize checkedIn=_checkedIn;
@property(retain, nonatomic) NSDate *connectDate; // @synthesize connectDate=_connectDate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


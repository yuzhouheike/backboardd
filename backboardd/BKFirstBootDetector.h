//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BKAlternateSystemAppManager, BKSystemAppSentinel, NSHashTable;
@protocol BKFirstBootTokenProviding, OS_dispatch_queue;

@interface BKFirstBootDetector : NSObject
{
    BKSystemAppSentinel *_systemAppSentinel;
    id <BKFirstBootTokenProviding> _firstBootToken;
    BKAlternateSystemAppManager *_alternateSystemAppManager;
    NSHashTable *_queue_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) BKAlternateSystemAppManager *alternateSystemAppManager; // @synthesize alternateSystemAppManager=_alternateSystemAppManager;
@property(retain, nonatomic) BKSystemAppSentinel *systemAppSentinel; // @synthesize systemAppSentinel=_systemAppSentinel;
- (void)_queue_finishBootingIfNecessaryAndTellObservers:(_Bool)arg1;
- (void)_systemAppDidFinishLaunching:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=isFirstBoot) _Bool firstBoot;
- (id)description;
- (void)dealloc;
- (id)initWithSystemAppSentinel:(id)arg1 firstBootToken:(id)arg2 alternateSystemAppManager:(id)arg3;

@end


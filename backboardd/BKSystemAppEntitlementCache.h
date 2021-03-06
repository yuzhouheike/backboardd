//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BKEntitlementCache-Protocol.h"

@class BKSystemApplication, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKSystemAppEntitlementCache : NSObject <BKEntitlementCache>
{
    NSObject<OS_dispatch_queue> *_queue;
    BKSystemApplication *_systemApp;
    NSMutableDictionary *_cachedEntitlementResults;
}

- (void)lock_setSystemApp:(id)arg1;
- (void)_systemAppChanged:(id)arg1;
- (void)cacheResult:(_Bool)arg1 forToken:(CDStruct_6ad76789 *)arg2 andEntitlement:(id)arg3;
- (_Bool)hasCacheResultForToken:(CDStruct_6ad76789 *)arg1 andEntitlement:(id)arg2 result:(_Bool *)arg3;
- (_Bool)shouldCacheResultForToken:(CDStruct_6ad76789 *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


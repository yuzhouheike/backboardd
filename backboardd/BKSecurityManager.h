//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol BKEntitlementCache, OS_dispatch_queue;

@interface BKSecurityManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <BKEntitlementCache> _entitlementCache;
}

+ (_Bool)hasEntitlement:(id)arg1 forConnection:(id)arg2;
+ (_Bool)hasEntitlement:(id)arg1 forAuditToken:(CDStruct_6ad76789 *)arg2;
+ (id)sharedInstance;
- (_Bool)hasEntitlement:(id)arg1 forAuditToken:(CDStruct_6ad76789 *)arg2;
@property(retain, nonatomic) id <BKEntitlementCache> entitlementCache; // @dynamic entitlementCache;
- (void)dealloc;
- (id)init;

@end


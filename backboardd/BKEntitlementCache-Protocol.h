//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BKEntitlementCache <NSObject>
- (void)cacheResult:(_Bool)arg1 forToken:(CDStruct_6ad76789 *)arg2 andEntitlement:(NSString *)arg3;
- (_Bool)hasCacheResultForToken:(CDStruct_6ad76789 *)arg1 andEntitlement:(NSString *)arg2 result:(_Bool *)arg3;
- (_Bool)shouldCacheResultForToken:(CDStruct_6ad76789 *)arg1;
@end


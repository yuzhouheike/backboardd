//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BKSystemApplication, BKSystemApplicationServer, NSSet;

@protocol BKSystemApplicationServerDelegate <NSObject>
- (void)server:(BKSystemApplicationServer *)arg1 systemApp:(BKSystemApplication *)arg2 hasActions:(NSSet *)arg3;
- (void)server:(BKSystemApplicationServer *)arg1 systemAppFinishBooting:(BKSystemApplication *)arg2;
- (void)server:(BKSystemApplicationServer *)arg1 systemAppDisconnected:(BKSystemApplication *)arg2;
- (void)server:(BKSystemApplicationServer *)arg1 systemAppWantsRestart:(BKSystemApplication *)arg2;
- (void)server:(BKSystemApplicationServer *)arg1 systemAppCheckedIn:(BKSystemApplication *)arg2 completion:(void (^)(void))arg3;
- (void)server:(BKSystemApplicationServer *)arg1 systemAppConnected:(BKSystemApplication *)arg2;
@end


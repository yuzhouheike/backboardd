//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BKHIDEventSenderInfo <NSObject>
@property(readonly, nonatomic, getter=isBuiltIn) _Bool builtIn;
@property(readonly, nonatomic, getter=isAuthenticated) _Bool authenticated;
@property(readonly, nonatomic) unsigned int primaryUsage;
@property(readonly, nonatomic) unsigned int primaryUsagePage;
@property(readonly, nonatomic) unsigned long long senderID;
@property(readonly, nonatomic) int eventSource;
@property(readonly, copy, nonatomic) NSString *displayUUID;
@end

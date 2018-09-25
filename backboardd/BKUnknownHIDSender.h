//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BKHIDEventSenderInfo-Protocol.h"

@class NSString;

@interface BKUnknownHIDSender : NSObject <BKHIDEventSenderInfo>
{
    _Bool _authenticated;
    _Bool _builtIn;
    int _eventSource;
    unsigned int _primaryUsagePage;
    unsigned int _primaryUsage;
    NSString *_displayUUID;
    unsigned long long _senderID;
}

+ (id)unknownSenderInfo;
@property(nonatomic, getter=isBuiltIn) _Bool builtIn; // @synthesize builtIn=_builtIn;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(nonatomic) unsigned int primaryUsage; // @synthesize primaryUsage=_primaryUsage;
@property(nonatomic) unsigned int primaryUsagePage; // @synthesize primaryUsagePage=_primaryUsagePage;
@property(nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property(nonatomic) int eventSource; // @synthesize eventSource=_eventSource;
@property(copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

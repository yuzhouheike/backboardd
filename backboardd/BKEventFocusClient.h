//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BKEventClient.h"

@class NSSet, NSString;

@interface BKEventFocusClient : BKEventClient
{
    NSString *_clientID;
    NSSet *_deferrals;
}

@property(retain, nonatomic) NSSet *deferrals; // @synthesize deferrals=_deferrals;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)deferredPropertiesForProperties:(id)arg1;
- (void)dealloc;
- (id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3;

@end

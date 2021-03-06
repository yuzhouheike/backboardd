//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSMachPortSendRight, NSString;

@interface BKEventDestination : NSObject
{
    _Bool _systemAppEvent;
    int _pid;
    unsigned int _contextID;
    NSString *_clientID;
    BSMachPortSendRight *_sendRight;
    NSString *_displayUUID;
}

@property(nonatomic, getter=isSystemAppEvent) _Bool systemAppEvent; // @synthesize systemAppEvent=_systemAppEvent;
@property(copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(retain, nonatomic) BSMachPortSendRight *sendRight; // @synthesize sendRight=_sendRight;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)description;
- (void)dealloc;
- (id)initWithPid:(int)arg1 clientID:(id)arg2;

@end


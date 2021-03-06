//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BKHIDClientConnection : NSObject
{
    struct __IOHIDEventSystemConnection *_connection;
    int _pid;
    unsigned int _task;
    NSString *_bundleID;
}

+ (id)connectionWithConnection:(struct __IOHIDEventSystemConnection *)arg1;
- (id)bundleID;
- (unsigned int)task;
- (int)pid;
- (struct __IOHIDEventSystemConnection *)connection;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithConnection:(struct __IOHIDEventSystemConnection *)arg1;

@end


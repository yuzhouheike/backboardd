//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface BKSystemAppHeartbeat : NSObject
{
    NSTimer *_timer;
    unsigned long long _firedCount;
    unsigned long long _numberOfTimesToFire;
    double _interval;
}

- (void)start;
- (void)_handleTimer:(id)arg1;
- (void)dealloc;
- (id)initWithFireCount:(unsigned long long)arg1 interval:(double)arg2;
- (id)init;

@end


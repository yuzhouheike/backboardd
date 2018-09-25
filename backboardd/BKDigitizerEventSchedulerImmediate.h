//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BKDigitizerEventSchedulerBase.h"

@class NSMutableArray;

@interface BKDigitizerEventSchedulerImmediate : BKDigitizerEventSchedulerBase
{
    NSMutableArray *_enqueuedEventBlocks;
}

@property(retain, nonatomic) NSMutableArray *enqueuedEventBlocks; // @synthesize enqueuedEventBlocks=_enqueuedEventBlocks;
- (void)dispatchEnqueuedEvents;
- (void)enqueueEvent:(struct __IOHIDEvent *)arg1 fromDigitizer:(struct OpaqueBKDigitizerInfo *)arg2 toClient:(unsigned int)arg3;
- (void)scheduleEvent:(struct __IOHIDEvent *)arg1 fromDigitizer:(struct OpaqueBKDigitizerInfo *)arg2 toClient:(unsigned int)arg3;
- (void)_sendEvent:(struct __IOHIDEvent *)arg1 toClient:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end


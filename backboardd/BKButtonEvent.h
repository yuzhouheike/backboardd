//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BKHIDEvent.h"

@interface BKButtonEvent : BKHIDEvent
{
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
- (void)_fillWithHIDEvent:(struct __IOHIDEvent *)arg1 descriptor:(id)arg2 senderInfo:(id)arg3;
- (id)description;
- (void)dealloc;
- (id)initWithHIDEventKeyboardDescriptor:(id)arg1 senderInfo:(id)arg2;

@end

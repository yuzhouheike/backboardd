//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BKHIDEvent.h"

@interface BKVendorDefinedEvent : BKHIDEvent
{
    struct __IOHIDEvent *_event;
}

- (void)_fillWithHIDEvent:(struct __IOHIDEvent *)arg1 descriptor:(id)arg2 senderInfo:(id)arg3;
@property(readonly, nonatomic) unsigned long long dataLength;
@property(readonly, nonatomic) char *data;
- (id)description;
- (void)dealloc;
- (id)initWithHIDEventVendorDefinedDescriptor:(id)arg1 senderInfo:(id)arg2;

@end


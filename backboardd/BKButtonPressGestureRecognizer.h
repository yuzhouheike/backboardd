//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BKGestureRecognizer.h"

@class BKSHIDEventKeyboardDescriptor;

@interface BKButtonPressGestureRecognizer : BKGestureRecognizer
{
    BKSHIDEventKeyboardDescriptor *_descriptor;
}

@property(retain, nonatomic) BKSHIDEventKeyboardDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)_handleEvent:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithHIDEventKeyboardDescriptor:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface BKGestureRecognizerEngine : NSObject
{
    NSMutableSet *_recognizers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void)_handleEvent:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)init;

@end


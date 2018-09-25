//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;
@protocol BKGestureRecognizerDelegate;

@interface BKGestureRecognizer : NSObject
{
    NSMutableSet *_recognizers;
    long long _state;
    id <BKGestureRecognizerDelegate> _delegate;
}

@property(nonatomic) id <BKGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)_handleEvent:(id)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_addGestureRecognizer:(id)arg1;
@property(readonly, nonatomic, getter=_gestureRecognizers) NSSet *gestureRecognizers;
- (id)description;
- (void)dealloc;
- (id)init;

@end

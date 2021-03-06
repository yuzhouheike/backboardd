//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BKDisplayRenderOverlay.h"

@class CAContext, CALayer;

@interface BKDisplayRenderOverlayPinkForTesting : BKDisplayRenderOverlay
{
    CAContext *_context;
    CALayer *_layer;
}

+ (void)doItHide;
+ (void)doItShow;
+ (void)doItShowKernel;
+ (id)overlayWithLevel:(float)arg1 display:(id)arg2;
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_dismissWithAnimationSettings:(id)arg1;
- (void)_freeze;
- (_Bool)_presentWithAnimationSettings:(id)arg1;
- (_Bool)disablesDisplayUpdates;
- (void)dealloc;
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;

@end


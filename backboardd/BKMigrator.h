//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface BKMigrator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (_Bool)_queue_moveRestoredFileAtPath:(id)arg1;
- (void)_queue_removeUnusedFiles;
- (void)_queue_migrateBackBoard;
- (void)migrateIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTCORPrioritizer.h"

@class GDTCORClock, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface GDTFLLPrioritizer : NSObject <GDTCORPrioritizer>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_events;
    GDTCORClock *_timeOfLastDailyUpload;
}

+ (id)sharedInstance;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) GDTCORClock *timeOfLastDailyUpload; // @synthesize timeOfLastDailyUpload=_timeOfLastDailyUpload;
@property(retain, nonatomic) NSMutableSet *events; // @synthesize events=_events;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)packageExpired:(id)arg1;
- (void)packageDelivered:(id)arg1 successful:(_Bool)arg2;
- (id)logEventsOkToSendDaily;
- (id)logEventsOkToSendOnWifi;
- (id)logEventsOkToSendOnMobileData;
- (id)uploadPackageWithConditions:(long long)arg1;
- (void)prioritizeEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


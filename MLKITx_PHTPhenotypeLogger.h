//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCTClearcutAutoCountersDelegate.h"

@class MLKITx_CCTClearcutAutoCounters, MLKITx_GIPPseudonymousIDStore, NSString, NSURL;

@interface MLKITx_PHTPhenotypeLogger : NSObject <CCTClearcutAutoCountersDelegate>
{
    id <CCTClockProtocol> _clock;
    MLKITx_GIPPseudonymousIDStore *_pseudonymousIDStore;
    NSURL *_clearcutLogDirectory;
    MLKITx_CCTClearcutAutoCounters *_autoCounters;
}

@property(retain, nonatomic) MLKITx_CCTClearcutAutoCounters *autoCounters; // @synthesize autoCounters=_autoCounters;
@property(retain, nonatomic) NSURL *clearcutLogDirectory; // @synthesize clearcutLogDirectory=_clearcutLogDirectory;
@property(retain, nonatomic) MLKITx_GIPPseudonymousIDStore *pseudonymousIDStore; // @synthesize pseudonymousIDStore=_pseudonymousIDStore;
@property(retain, nonatomic) id <CCTClockProtocol> clock; // @synthesize clock=_clock;
- (void).cxx_destruct;
- (void)logWithLogSource:(long long)arg1 extension:(id)arg2 eventCode:(id)arg3;
- (_Bool)logEvents;
- (void)flushCountersToLogger;
- (void)logOperationEventWithExtension:(id)arg1 eventCode:(id)arg2;
- (void)increaseCounterWithName:(id)arg1 bucket:(long long)arg2 amount:(long long)arg3;
- (void)increaseCounterWithName:(id)arg1;
- (void)logCounters:(id)arg1;
- (long long)maxCounterCount;
- (_Bool)shouldLogCounters;
- (id)initWithClock:(id)arg1 clearcutLogDirectory:(id)arg2 pseudonymousIDStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


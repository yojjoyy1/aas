//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MLKITx_CCTClearcutCounters, NSString;

@interface MLKITx_CCTClearcutTimerHistogram : NSObject <NSCopying>
{
    double _startTime;
    NSString *_name;
    MLKITx_CCTClearcutCounters *_counters;
}

- (void).cxx_destruct;
- (_Bool)isTimerRunning;
- (void)stopAndLogTimeWithDimension:(id)arg1;
- (void)stopAndLogTime;
- (void)cancel;
- (void)start;
- (id)counters;
- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 counters:(id)arg2;

@end


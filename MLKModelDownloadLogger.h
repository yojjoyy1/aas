//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLKAnalyticsLogger, MLKRemoteModel;

@interface MLKModelDownloadLogger : NSObject
{
    MLKRemoteModel *_remoteModel;
    MLKAnalyticsLogger *_analyticsLogger;
}

@property(retain, nonatomic) MLKAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) MLKRemoteModel *remoteModel; // @synthesize remoteModel=_remoteModel;
- (void).cxx_destruct;
- (id)initWithRemoteModel:(id)arg1 analyticsLogger:(id)arg2;
- (void)logDownloadEventWithStatus:(int)arg1 errorCode:(int)arg2 httpCode:(id)arg3;
- (void)logDownloadEventWithStatus:(int)arg1 errorCode:(int)arg2;
- (id)initWithRemoteModel:(id)arg1 context:(id)arg2;

@end

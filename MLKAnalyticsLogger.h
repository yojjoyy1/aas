//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GULUserDefaults, MLKFirelogTransport, MLKITx_CCTClearcutLogger, NSMutableDictionary, NSString;

@interface MLKAnalyticsLogger : NSObject
{
    MLKITx_CCTClearcutLogger *_clearcutLogger;
    MLKFirelogTransport *_firelogTransport;
    long long _loggerType;
    GULUserDefaults *_userDefaults;
    NSString *_statsEnabledKey;
    NSString *_appBundleID;
    NSString *_appBundleVersion;
    NSString *_sdkVersion;
    NSString *_tfLiteSchemaVersion;
    NSMutableDictionary *_logTimestamps;
    id <MLKProcessInfo> _processInfo;
    NSMutableDictionary *_eventNameToLastAggregationTimeMap;
    NSMutableDictionary *_eventNameToDurationsMap;
}

+ (id)moduleNameFromLoggerType:(long long)arg1;
+ (void)setUpThirdPartyLogging;
+ (id)keyForContext:(id)arg1 loggerType:(long long)arg2;
+ (void)setThrottlingDisabled:(_Bool)arg1;
+ (_Bool)isThrottlingDisabled;
+ (void)clearLoggerInstances;
+ (id)statsLoggerForContext:(id)arg1 clearcutLogger:(id)arg2 firelogTransport:(id)arg3 loggerType:(long long)arg4 userDefaults:(id)arg5 tfLiteVersion:(id)arg6 processInfo:(id)arg7;
+ (id)statsLoggerForContext:(id)arg1 clearcutLogger:(id)arg2 firelogTransport:(id)arg3 loggerType:(long long)arg4 userDefaults:(id)arg5 tfLiteVersion:(id)arg6;
+ (id)statsLoggerForContext:(id)arg1 clearcutLogger:(id)arg2 firelogTransport:(id)arg3 loggerType:(long long)arg4 userDefaults:(id)arg5;
+ (id)statsLoggerForContext:(id)arg1 loggerType:(long long)arg2 tfLiteVersion:(id)arg3;
+ (id)statsLoggerForContext:(id)arg1 loggerType:(long long)arg2;
+ (void)load;
+ (void)initialize;
@property(readonly, nonatomic) NSMutableDictionary *eventNameToDurationsMap; // @synthesize eventNameToDurationsMap=_eventNameToDurationsMap;
@property(readonly, nonatomic) NSMutableDictionary *eventNameToLastAggregationTimeMap; // @synthesize eventNameToLastAggregationTimeMap=_eventNameToLastAggregationTimeMap;
@property(retain, nonatomic) id <MLKProcessInfo> processInfo; // @synthesize processInfo=_processInfo;
@property(copy, nonatomic) NSMutableDictionary *logTimestamps; // @synthesize logTimestamps=_logTimestamps;
@property(copy, nonatomic) NSString *tfLiteSchemaVersion; // @synthesize tfLiteSchemaVersion=_tfLiteSchemaVersion;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *appBundleVersion; // @synthesize appBundleVersion=_appBundleVersion;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(readonly, nonatomic) NSString *statsEnabledKey; // @synthesize statsEnabledKey=_statsEnabledKey;
@property(readonly, nonatomic) GULUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) long long loggerType; // @synthesize loggerType=_loggerType;
@property(readonly, nonatomic) MLKFirelogTransport *firelogTransport; // @synthesize firelogTransport=_firelogTransport;
@property(retain, nonatomic) MLKITx_CCTClearcutLogger *clearcutLogger; // @synthesize clearcutLogger=_clearcutLogger;
- (void).cxx_destruct;
- (void)synchronizeUserDefaults;
- (id)valueDescriptionOfMessage:(id)arg1;
- (id)SDKInstanceID;
- (id)initWithContext:(id)arg1 clearcutLogger:(id)arg2 firelogTransport:(id)arg3 loggerType:(long long)arg4 userDefaults:(id)arg5 tfLiteVersion:(id)arg6 processInfo:(id)arg7;
- (_Bool)shouldSendAggregateLogForEventName:(int)arg1;
- (id)statisticsFromDurations:(id)arg1;
- (void)aggregateOnLogEvent:(id)arg1 name:(int)arg2 aggregationProvider:(id)arg3;
@property(nonatomic, getter=isStatsCollectionEnabled) _Bool statsCollectionEnabled;
- (void)logThrottledEvent:(id)arg1 name:(int)arg2 aggregationProvider:(id)arg3;
- (void)logThrottledEvent:(id)arg1 withName:(int)arg2;
- (void)logEvent:(id)arg1 withName:(int)arg2;

@end

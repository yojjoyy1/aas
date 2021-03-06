//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLKITx_PHTPhenotypeExperimentTokens, NSDictionary, NSString;

@interface MLKITx_PHTPhenotypeFlagsSnapshot : NSObject
{
    NSString *_packageName;
    NSString *_serverToken;
    NSString *_userID;
    NSDictionary *_flags;
    MLKITx_PHTPhenotypeExperimentTokens *_tokens;
    long long _configurationVersion;
}

@property(readonly, nonatomic) long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(readonly, nonatomic) MLKITx_PHTPhenotypeExperimentTokens *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSDictionary *flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) NSString *serverToken; // @synthesize serverToken=_serverToken;
@property(readonly, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)numberArrayForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)stringArrayForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)dataForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)numberForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)stringForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)valueForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)initWithPackageName:(id)arg1 serverToken:(id)arg2 userID:(id)arg3 experimentTokens:(id)arg4 configurationVersion:(long long)arg5 flags:(id)arg6;

@end


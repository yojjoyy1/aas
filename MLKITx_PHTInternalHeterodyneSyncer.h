//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHTHeterodyneSyncerProtocol.h"

@class MLKITx_GIPPseudonymousIDStore, MLKITx_PHTBreakableLock, MLKITx_PHTPhenotypeSyncAfterConfiguration, NSObject<OS_dispatch_queue>, NSURL;

@interface MLKITx_PHTInternalHeterodyneSyncer : NSObject <PHTHeterodyneSyncerProtocol>
{
    NSURL *_serverURL;
    _Bool _allowHTTP;
    id <CCTClockProtocol> _clock;
    MLKITx_GIPPseudonymousIDStore *_pseudonymousIDStore;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MLKITx_PHTBreakableLock *_lock;
    _Bool _debugForceSyncs;
    MLKITx_PHTPhenotypeSyncAfterConfiguration *_syncAfterConfiguration;
}

+ (id)syncMetadataWithError:(id *)arg1;
@property(readonly, nonatomic) MLKITx_PHTPhenotypeSyncAfterConfiguration *syncAfterConfiguration; // @synthesize syncAfterConfiguration=_syncAfterConfiguration;
- (void).cxx_destruct;
- (_Bool)isInternalHeterodyneSyncer;
- (id)phenotypeRegistrationDataWithURLs:(id)arg1 error:(id *)arg2;
- (_Bool)isNoInternetError:(id)arg1;
- (id)updateMetadataWithSyncedScopes:(id)arg1;
- (id)mergePartition:(id)arg1 withPartition:(id)arg2;
- (id)mergeResponse:(id)arg1 withResponse:(id)arg2;
- (id)createClientProperties:(id)arg1;
- (void)processResponse:(id)arg1 account:(id)arg2 syncedScopes:(id)arg3 requestedPackages:(id)arg4 requestError:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)syncHoldingLockWithSyncedScopes:(id)arg1 fetchReason:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)syncWithCallback:(CDUnknownBlockType)arg1;
- (int)fetchReason:(id *)arg1;
- (id)initWithOverrideServerURL:(id)arg1 allowHTTP:(_Bool)arg2 clock:(id)arg3 pseudonymousIDStore:(id)arg4 debugForceSyncs:(_Bool)arg5 callbackQueue:(id)arg6;

@end


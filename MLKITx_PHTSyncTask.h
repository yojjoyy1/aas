//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MLKITx_PHTSyncTask : NSObject
{
    id <PHTHeterodyneSyncerProtocol> _syncer;
    CDUnknownBlockType _callback;
}

@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) id <PHTHeterodyneSyncerProtocol> syncer; // @synthesize syncer=_syncer;
- (void).cxx_destruct;
- (id)initWithSyncer:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end


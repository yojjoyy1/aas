//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLKITx_EXHParamPartitionTag, NSMutableArray;

@interface MLKITx_EXHParamPartition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasParamPartitionTag; // @dynamic hasParamPartitionTag;
@property(nonatomic) _Bool hasUpdateType; // @dynamic hasUpdateType;
@property(retain, nonatomic) NSMutableArray *paramArray; // @dynamic paramArray;
@property(readonly, nonatomic) unsigned long long paramArray_Count; // @dynamic paramArray_Count;
@property(retain, nonatomic) MLKITx_EXHParamPartitionTag *paramPartitionTag; // @dynamic paramPartitionTag;
@property(nonatomic) int updateType; // @dynamic updateType;

@end

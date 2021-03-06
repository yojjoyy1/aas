//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLKITx_GIPLogCallstack.h"

@interface MLKITx_GIPLogAddressCallstack : MLKITx_GIPLogCallstack
{
    void **_addresses;
    unsigned long long _addressCount;
    void **_filteredAddresses;
    unsigned long long _filteredAddressCount;
}

+ (id)addressCallstackIgnoringFrameCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)enumerateAddressesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long frameCount;
- (id)initWithAddressesIgnoringFrameCount:(unsigned long long)arg1;

@end


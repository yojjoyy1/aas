//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLKITx_PHTPhenotypeFlag.h"

@class GPBMessage, NSData;

@interface MLKITx_PHTPhenotypeMessageFlag : MLKITx_PHTPhenotypeFlag
{
    NSData *_data;
    GPBMessage *_message;
    Class _protoClass;
    GPBMessage *_defaultMessage;
    GPBMessage *_testOverrideMessage;
}

@property(retain, nonatomic) GPBMessage *testOverrideMessage; // @synthesize testOverrideMessage=_testOverrideMessage;
@property(readonly, nonatomic) GPBMessage *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
- (void).cxx_destruct;
@property(readonly, nonatomic) GPBMessage *message;
- (id)initWithName:(id)arg1 defaultMessage:(id)arg2 protoClass:(Class)arg3 flags:(id)arg4;

@end


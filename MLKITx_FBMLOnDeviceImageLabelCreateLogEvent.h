//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLKITx_FBMLOnDeviceImageLabelOptions;

@interface MLKITx_FBMLOnDeviceImageLabelCreateLogEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MLKITx_FBMLOnDeviceImageLabelOptions *detectorOptions; // @dynamic detectorOptions;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) _Bool hasDetectorOptions; // @dynamic hasDetectorOptions;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;

@end


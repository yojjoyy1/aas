//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZBarReaderController.h"

@interface CTBCZBarReaderController : ZBarReaderController
{
    double resizeScale;
    _Bool retried;
    _Bool _retried;
    double _resizeScale;
}

@property(nonatomic) double resizeScale; // @synthesize resizeScale=_resizeScale;
@property(nonatomic) _Bool retried; // @synthesize retried=_retried;
- (id)scanImage:(struct CGImage *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "WLDirectUpdatePluginCallbackDelegate.h"

@class NSString, WLProgressView;

@interface WLDirectUpdatePlugin : CDVPlugin <WLDirectUpdatePluginCallbackDelegate>
{
    WLProgressView *progressView;
}

@property(retain, nonatomic) WLProgressView *progressView; // @synthesize progressView;
- (void).cxx_destruct;
- (id)stringWithStatus:(int)arg1;
- (void)updateDidFinishWithCommand:(id)arg1 status:(int)arg2;
- (void)updateDidProgressWithCommand:(id)arg1 status:(int)arg2 totalSize:(long long)arg3 completedSize:(long long)arg4;
- (void)updateDidStartWithCommand:(id)arg1 totalSize:(long long)arg2;
- (void)hideProgressDialog:(id)arg1;
- (void)updateProgressDialog:(id)arg1;
- (void)showProgressView:(id)arg1;
- (void)showProgressDialog:(id)arg1;
- (void)stop:(id)arg1;
- (void)start:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


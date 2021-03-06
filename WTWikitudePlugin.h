//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "UIScrollViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"
#import "WTArchitectViewControllerDelegate.h"
#import "WTArchitectViewDelegate.h"

@class NSString, WKWebView, WTArchitectViewController, WTAuthorizationRequestManager;

@interface WTWikitudePlugin : CDVPlugin <WTArchitectViewDelegate, WTArchitectViewControllerDelegate, WKNavigationDelegate, WKUIDelegate, UIScrollViewDelegate, WKScriptMessageHandler>
{
    _Bool _isUsingInjectedLocation;
    _Bool _isDeviceSupported;
    WTAuthorizationRequestManager *_authorizationRequestManager;
    WTArchitectViewController *_arViewController;
    NSString *_loadArchitectWorldCallbackId;
    NSString *_urlInvokedCallbackId;
    NSString *_receivedJSONObjectCallbackId;
    NSString *_screenshotCallbackId;
    NSString *_errorHandlerCallbackId;
    NSString *_accessRequestCallbackId;
    NSString *_deviceSensorsNeedCalibrationCallbackId;
    NSString *_deviceSensorsFinishedCalibrationCallbackId;
    NSString *_oPath;
    NSString *_nextUrl;
    NSString *_contentHtml;
    WKWebView *_wkWebView;
}

+ (id)addPathPrefix:(id)arg1 toArchitectWorldURL:(id)arg2;
+ (id)readOptionalPathPrefixFromApplicationPlist;
+ (id)architectWorldURLFromString:(id)arg1;
+ (unsigned long long)requiredFeaturesFromArray:(id)arg1;
+ (void)readStartupConfigurationFrom:(id)arg1 andApplyTo:(id)arg2;
+ (id)composeFailingAPIAuthorizationMessageFromError:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(nonatomic) _Bool isDeviceSupported; // @synthesize isDeviceSupported=_isDeviceSupported;
@property(nonatomic) _Bool isUsingInjectedLocation; // @synthesize isUsingInjectedLocation=_isUsingInjectedLocation;
@property(retain, nonatomic) NSString *contentHtml; // @synthesize contentHtml=_contentHtml;
@property(retain, nonatomic) NSString *nextUrl; // @synthesize nextUrl=_nextUrl;
@property(retain, nonatomic) NSString *oPath; // @synthesize oPath=_oPath;
@property(retain, nonatomic) NSString *deviceSensorsFinishedCalibrationCallbackId; // @synthesize deviceSensorsFinishedCalibrationCallbackId=_deviceSensorsFinishedCalibrationCallbackId;
@property(retain, nonatomic) NSString *deviceSensorsNeedCalibrationCallbackId; // @synthesize deviceSensorsNeedCalibrationCallbackId=_deviceSensorsNeedCalibrationCallbackId;
@property(retain, nonatomic) NSString *accessRequestCallbackId; // @synthesize accessRequestCallbackId=_accessRequestCallbackId;
@property(retain, nonatomic) NSString *errorHandlerCallbackId; // @synthesize errorHandlerCallbackId=_errorHandlerCallbackId;
@property(retain, nonatomic) NSString *screenshotCallbackId; // @synthesize screenshotCallbackId=_screenshotCallbackId;
@property(retain, nonatomic) NSString *receivedJSONObjectCallbackId; // @synthesize receivedJSONObjectCallbackId=_receivedJSONObjectCallbackId;
@property(retain, nonatomic) NSString *urlInvokedCallbackId; // @synthesize urlInvokedCallbackId=_urlInvokedCallbackId;
@property(retain, nonatomic) NSString *loadArchitectWorldCallbackId; // @synthesize loadArchitectWorldCallbackId=_loadArchitectWorldCallbackId;
@property(retain, nonatomic) WTArchitectViewController *arViewController; // @synthesize arViewController=_arViewController;
@property(retain, nonatomic) WTAuthorizationRequestManager *authorizationRequestManager; // @synthesize authorizationRequestManager=_authorizationRequestManager;
- (void)removeNotificationObserver;
- (void)addNotificationObserver;
- (void)architectViewControllerWillDisappear:(id)arg1;
- (void)didReceiveArchitectDebugMessageNotification:(id)arg1;
- (void)didReceiveArchitectFinishedDeviceSensorCalibrationNotification:(id)arg1;
- (void)didReceiveArchitectNeedsDeviceSensorCalibrationNotification:(id)arg1;
- (void)didReceiveCaptureScreenDidFailNotification:(id)arg1;
- (void)didReceiveDidCapturedScreenNotification:(id)arg1;
- (void)didReceiveReceivedJSONObjectNotification:(id)arg1;
- (void)didReceiveInvokedURLNotification:(id)arg1;
- (void)didReceiveWorldDidFailToLoadNotification:(id)arg1;
- (void)didReceiveWorldDidLoadNotification:(id)arg1;
- (void)setErrorHandler:(id)arg1;
- (void)setDeviceSensorsFinishedCalibrationHandler:(id)arg1;
- (void)setDeviceSensorsNeedCalibrationHandler:(id)arg1;
- (void)onJSONObjectReceived:(id)arg1;
- (void)onUrlInvoke:(id)arg1;
- (void)callJavascript:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)playVideo;
- (void)hideVideo:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)loadVideo:(id)arg1;
- (void)captureScreen:(id)arg1;
- (void)onPause:(id)arg1;
- (void)onResume:(id)arg1;
- (void)hide:(id)arg1;
- (void)show:(id)arg1;
- (void)close:(id)arg1;
- (void)open:(id)arg1;
- (void)getSDKVersion:(id)arg1;
- (void)getSDKBuildInformation:(id)arg1;
- (void)openAppSettings:(id)arg1;
- (void)requestAccess:(id)arg1;
- (void)isDeviceSupported:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


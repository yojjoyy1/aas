//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSString, NSURL, SFSafariViewController, UIViewController, WTArchitectView, WTNavigation;

@protocol WTArchitectViewDelegate <NSObject>

@optional
- (void)architectView:(WTArchitectView *)arg1 didRequestAlertWithMessage:(NSString *)arg2;
- (_Bool)architectView:(WTArchitectView *)arg1 didRequestConfirmPanelWithMessage:(NSString *)arg2;
- (NSString *)architectView:(WTArchitectView *)arg1 didRequestPrompt:(NSString *)arg2;
- (void)architectView:(WTArchitectView *)arg1 didSwitchToActiveCaptureDevicePosition:(long long)arg2;
- (void)architectViewFinishedDeviceSensorsCalibration:(WTArchitectView *)arg1;
- (void)architectViewNeedsDeviceSensorCalibration:(WTArchitectView *)arg1;
- (NSArray *)activityItemsForURL:(NSURL *)arg1 title:(NSString *)arg2 usedBySafariViewController:(SFSafariViewController *)arg3;
- (_Bool)shouldArchitectViewPresentSafariViewControllerInReaderModeIfAvailable:(WTArchitectView *)arg1;
- (void)architectView:(WTArchitectView *)arg1 didPresentViewController:(UIViewController *)arg2 onViewController:(UIViewController *)arg3;
- (_Bool)shouldArchitectView:(WTArchitectView *)arg1 presentViewControllerAnimated:(UIViewController *)arg2;
- (void)architectView:(WTArchitectView *)arg1 willPresentViewController:(UIViewController *)arg2 onViewController:(UIViewController *)arg3;
- (UIViewController *)presentingViewControllerForViewControllerPresentationInArchitectView:(WTArchitectView *)arg1;
- (_Bool)presentViewController:(UIViewController *)arg1 forArchitectView:(WTArchitectView *)arg2;
- (void)architectView:(WTArchitectView *)arg1 didFailCaptureScreenWithError:(NSError *)arg2;
- (void)architectView:(WTArchitectView *)arg1 didCaptureScreenWithContext:(NSDictionary *)arg2;
- (void)architectView:(WTArchitectView *)arg1 invokedURL:(NSURL *)arg2;
- (void)architectView:(WTArchitectView *)arg1 receivedJSONObject:(NSDictionary *)arg2;
- (void)architectView:(WTArchitectView *)arg1 didFailToLoadArchitectWorldNavigation:(WTNavigation *)arg2 withError:(NSError *)arg3;
- (void)architectView:(WTArchitectView *)arg1 didFinishLoadArchitectWorldNavigation:(WTNavigation *)arg2;
- (void)architectView:(WTArchitectView *)arg1 didFailToAuthorizeRestrictedAppleiOSSDKAPIs:(NSError *)arg2;
@end


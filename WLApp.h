//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

@class NSString;

@interface WLApp : CDVPlugin
{
    NSString *settingsAppName;
    NSString *settingsAppVersion;
}

+ (id)getWorklightPlist:(id)arg1;
@property(copy, nonatomic) NSString *settingsAppVersion; // @synthesize settingsAppVersion;
@property(copy, nonatomic) NSString *settingsAppName; // @synthesize settingsAppName;
- (void).cxx_destruct;
- (void)openURL:(id)arg1;
- (id)NSDataToHex:(id)arg1;
- (void)secureRandom:(id)arg1;
- (void)clearSharedToken:(id)arg1;
- (void)setSharedToken:(id)arg1;
- (void)getSharedToken:(id)arg1;
- (void)deleteCookie:(id)arg1;
- (void)getCookies:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)getServerUrl:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setServerUrl:(id)arg1;
- (void)getInitParameters:(id)arg1;
- (void)getAppSetting:(id)arg1;
- (void)writeUserPref:(id)arg1;
- (void)readUserPref:(id)arg1;
- (void)copyToClipboard:(id)arg1;
- (void)reloadApp:(id)arg1;
- (void)handleOpenUrlForCordova:(id)arg1;
- (void)wlHandleOpenURL:(id)arg1;
- (void)hideSplashAfterPageIsLoaded;
- (void)handlePageLoad:(id)arg1;
- (void)handleMemoryWarning:(id)arg1;
- (void)handleOpenUrlOnPluginInitialize;
- (void)onPageDidLoad:(id)arg1;
- (void)pluginInitialize;

@end

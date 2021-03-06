//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

@class NSArray;

@interface UIApplication (APPLocalNotification)
- (void)clearLocalNotification:(id)arg1;
- (void)clearAllLocalNotifications;
- (id)localNotificationOptionsByType:(unsigned long long)arg1 andId:(id)arg2;
- (id)localNotificationOptionsById:(id)arg1;
- (id)localNotificationOptionsByType:(unsigned long long)arg1;
- (id)localNotificationOptions;
- (id)localNotificationWithId:(id)arg1 andType:(unsigned long long)arg2;
- (id)localNotificationWithId:(id)arg1;
- (_Bool)localNotificationExist:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)localNotificationExist:(id)arg1;
- (id)localNotificationIdsByType:(unsigned long long)arg1;
@property(readonly, getter=localNotificationIds) NSArray *localNotificationIds;
- (id)triggeredLocalNotifications;
@property(readonly, getter=localNotifications) NSArray *localNotifications;
- (void)registerPermissionToScheduleLocalNotifications;
- (_Bool)hasPermissionToScheduleLocalNotifications;
@end


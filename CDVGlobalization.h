//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

@interface CDVGlobalization : CDVPlugin
{
    struct __CFLocale *currentLocale;
}

- (void)dealloc;
- (void)getCurrencyPattern:(id)arg1;
- (void)getNumberPattern:(id)arg1;
- (void)stringToNumber:(id)arg1;
- (void)numberToString:(id)arg1;
- (void)getFirstDayOfWeek:(id)arg1;
- (void)isDayLightSavingsTime:(id)arg1;
- (void)getDateNames:(id)arg1;
- (void)getDatePattern:(id)arg1;
- (void)stringToDate:(id)arg1;
- (void)dateToString:(id)arg1;
- (void)getLocaleName:(id)arg1;
- (void)getPreferredLanguage:(id)arg1;
- (void)pluginInitialize;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CDVTimer : NSObject
{
    NSMutableDictionary *_items;
}

+ (id)sharedInstance;
+ (void)clearAll;
+ (void)stop:(id)arg1;
+ (void)start:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
- (void)removeAll;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (id)init;

@end


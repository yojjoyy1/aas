//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSObject<OS_dispatch_queue>, NSString;

@interface GULKeychainStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_keychainQueue;
    NSObject<OS_dispatch_queue> *_inMemoryCacheQueue;
    NSString *_service;
    NSCache *_inMemoryCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSCache *inMemoryCache; // @synthesize inMemoryCache=_inMemoryCache;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *inMemoryCacheQueue; // @synthesize inMemoryCacheQueue=_inMemoryCacheQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *keychainQueue; // @synthesize keychainQueue=_keychainQueue;
- (id)keychainQueryWithKey:(id)arg1 accessGroup:(id)arg2;
- (void)resetInMemoryCache;
- (id)getObjectFromKeychainForKey:(id)arg1 objectClass:(Class)arg2 accessGroup:(id)arg3;
- (id)removeObjectForKey:(id)arg1 accessGroup:(id)arg2;
- (id)setObject:(id)arg1 forKey:(id)arg2 accessGroup:(id)arg3;
- (id)getObjectForKey:(id)arg1 objectClass:(Class)arg2 accessGroup:(id)arg3;
- (id)initWithService:(id)arg1 cache:(id)arg2;
- (id)initWithService:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WLActionReceiverInternal : NSObject
{
    id <WLActionReceiver> _actionReceiver;
    NSString *_tag;
}

@property(readonly, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) id <WLActionReceiver> actionReceiver; // @synthesize actionReceiver=_actionReceiver;
- (void).cxx_destruct;
- (id)initWithWLActionReceiver:(id)arg1 andTag:(id)arg2;

@end


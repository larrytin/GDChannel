//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/channel/impl/DefaultMessage.java
//
//  Created by retechretech.
//

#ifndef _GDCDefaultMessage_H_
#define _GDCDefaultMessage_H_

@protocol ComGoodowRealtimeCoreHandler;
@protocol GDCBus;

#import "JreEmulation.h"
#include "com/goodow/realtime/channel/Message.h"

@interface GDCDefaultMessage : NSObject < GDCMessage > {
 @public
  id body__;
  id<GDCBus> bus_;
  NSString *address__;
  NSString *replyAddress__;
  BOOL send_;
}

- (id)initWithBoolean:(BOOL)send
           withGDCBus:(id<GDCBus>)bus
         withNSString:(NSString *)address
         withNSString:(NSString *)replyAddress
               withId:(id)body;

- (NSString *)address;

- (id)body;

- (void)fail:(int)failureCode message:(NSString *)msg;

- (void)reply:(id)msg;

- (void)reply:(id)msg replyHandler:(id)replyHandler;

- (NSString *)replyAddress;

- (NSString *)description;

- (void)sendReplyWithId:(id)msg
withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)replyHandler;

- (void)copyAllFieldsTo:(GDCDefaultMessage *)other;

@end

__attribute__((always_inline)) inline void GDCDefaultMessage_init() {}

J2OBJC_FIELD_SETTER(GDCDefaultMessage, body__, id)
J2OBJC_FIELD_SETTER(GDCDefaultMessage, bus_, id<GDCBus>)
J2OBJC_FIELD_SETTER(GDCDefaultMessage, address__, NSString *)
J2OBJC_FIELD_SETTER(GDCDefaultMessage, replyAddress__, NSString *)

typedef GDCDefaultMessage ComGoodowRealtimeChannelImplDefaultMessage;

#endif // _GDCDefaultMessage_H_

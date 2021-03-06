//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/channel/BusHook.java
//
//  Created by retechretech.
//

#ifndef _GDCBusHook_H_
#define _GDCBusHook_H_

@protocol ComGoodowRealtimeCoreHandler;
@protocol GDCMessage;

#import "JreEmulation.h"

@protocol GDCBusHook < NSObject, JavaObject >

- (void)handleOpened;

- (void)handlePostClose;

- (BOOL)handlePreClose;

- (BOOL)handlePreRegisterWithNSString:(NSString *)address
     withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)handler;

- (BOOL)handleReceiveMessageWithGDCMessage:(id<GDCMessage>)message;

- (BOOL)handleSendOrPubWithBoolean:(BOOL)send
                      withNSString:(NSString *)address
                            withId:(id)msg
  withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)replyHandler;

- (BOOL)handleUnregisterWithNSString:(NSString *)address;

@end

#define ComGoodowRealtimeChannelBusHook GDCBusHook

@interface GDCBusHook_BusHookProxy : NSObject < GDCBusHook > {
}

- (void)handleOpened;

- (void)handlePostClose;

- (BOOL)handlePreClose;

- (BOOL)handlePreRegisterWithNSString:(NSString *)address
     withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)handler;

- (BOOL)handleReceiveMessageWithGDCMessage:(id<GDCMessage>)message;

- (BOOL)handleSendOrPubWithBoolean:(BOOL)send
                      withNSString:(NSString *)address
                            withId:(id)msg
  withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)replyHandler;

- (BOOL)handleUnregisterWithNSString:(NSString *)address;

- (id<GDCBusHook>)delegate;

- (id)init;

@end

__attribute__((always_inline)) inline void GDCBusHook_BusHookProxy_init() {}

#endif // _GDCBusHook_H_

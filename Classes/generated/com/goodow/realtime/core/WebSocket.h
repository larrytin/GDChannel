//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/core/WebSocket.java
//
//  Created by retechretech.
//

#ifndef _ComGoodowRealtimeCoreWebSocket_H_
#define _ComGoodowRealtimeCoreWebSocket_H_

@protocol ComGoodowRealtimeCoreWebSocket_WebSocketHandler;
@protocol GDJsonObject;

#import "JreEmulation.h"

@protocol ComGoodowRealtimeCoreWebSocket < NSObject, JavaObject >

- (void)close;

- (void)sendWithNSString:(NSString *)data;

- (void)setListenWithComGoodowRealtimeCoreWebSocket_WebSocketHandler:(id<ComGoodowRealtimeCoreWebSocket_WebSocketHandler>)handler;

@end

@protocol ComGoodowRealtimeCoreWebSocket_WebSocketHandler < NSObject, JavaObject >

- (void)onCloseWithGDJsonObject:(id<GDJsonObject>)reason;

- (void)onErrorWithNSString:(NSString *)error;

- (void)onMessageWithNSString:(NSString *)message;

- (void)onOpen;

@end

#endif // _ComGoodowRealtimeCoreWebSocket_H_

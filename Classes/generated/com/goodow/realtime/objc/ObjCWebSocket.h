//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/objc/ObjCWebSocket.java
//
//  Created by retechretech.
//

#ifndef _ComGoodowRealtimeObjcObjCWebSocket_H_
#define _ComGoodowRealtimeObjcObjCWebSocket_H_

@protocol ComGoodowRealtimeCoreWebSocket_WebSocketHandler;
@protocol GDJsonObject;

#import "JreEmulation.h"
#include "com/goodow/realtime/core/WebSocket.h"

@interface ComGoodowRealtimeObjcObjCWebSocket : NSObject < ComGoodowRealtimeCoreWebSocket > {
}

- (id)initWithNSString:(NSString *)url
      withGDJsonObject:(id<GDJsonObject>)options;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeObjcObjCWebSocket_init() {}

@interface ComGoodowRealtimeObjcObjCWebSocket (NativeMethods)
- (void)close;
- (void)sendWithNSString:(NSString *)data;
- (void)setListenWithComGoodowRealtimeCoreWebSocket_WebSocketHandler:(id<ComGoodowRealtimeCoreWebSocket_WebSocketHandler>)handler;
@end

#endif // _ComGoodowRealtimeObjcObjCWebSocket_H_

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/core/WebSocket.java
//
//  Created by retechretech.
//

#include "com/goodow/realtime/core/WebSocket.h"
#include "com/goodow/realtime/json/JsonObject.h"

@interface ComGoodowRealtimeCoreWebSocket : NSObject
@end

@implementation ComGoodowRealtimeCoreWebSocket

+ (J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { "close", NULL, "V", 0x401, NULL },
    { "sendWithNSString:", "send", "V", 0x401, NULL },
    { "setListenWithComGoodowRealtimeCoreWebSocket_WebSocketHandler:", "setListen", "V", 0x401, NULL },
  };
  static J2ObjcClassInfo _ComGoodowRealtimeCoreWebSocket = { "WebSocket", "com.goodow.realtime.core", NULL, 0x201, 3, methods, 0, NULL, 0, NULL};
  return &_ComGoodowRealtimeCoreWebSocket;
}

@end

@interface ComGoodowRealtimeCoreWebSocket_WebSocketHandler : NSObject
@end

@implementation ComGoodowRealtimeCoreWebSocket_WebSocketHandler

+ (J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { "onCloseWithGDJsonObject:", "onClose", "V", 0x401, NULL },
    { "onErrorWithNSString:", "onError", "V", 0x401, NULL },
    { "onMessageWithNSString:", "onMessage", "V", 0x401, NULL },
    { "onOpen", NULL, "V", 0x401, NULL },
  };
  static J2ObjcClassInfo _ComGoodowRealtimeCoreWebSocket_WebSocketHandler = { "WebSocketHandler", "com.goodow.realtime.core", "WebSocket", 0x209, 4, methods, 0, NULL, 0, NULL};
  return &_ComGoodowRealtimeCoreWebSocket_WebSocketHandler;
}

@end

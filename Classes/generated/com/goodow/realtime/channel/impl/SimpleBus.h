//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/channel/impl/SimpleBus.java
//
//  Created by retechretech.
//

#ifndef _GDCSimpleBus_H_
#define _GDCSimpleBus_H_

@class ComGoodowRealtimeChannelUtilIdGenerator;
@class GDCStateEnum;
@class JavaLangVoid;
@class JavaUtilLoggingLogger;
@protocol GDCBusHook;
@protocol GDCMessage;
@protocol GDJsonObject;

#import "JreEmulation.h"
#include "com/goodow/realtime/channel/Bus.h"
#include "com/goodow/realtime/core/Handler.h"
#include "com/goodow/realtime/core/HandlerRegistration.h"
#include "com/goodow/realtime/json/JsonArray.h"

@interface GDCSimpleBus : NSObject < GDCBus > {
 @public
  id<GDJsonObject> handlerMap_;
  id<GDJsonObject> replyHandlers_;
  ComGoodowRealtimeChannelUtilIdGenerator *idGenerator_;
  id<GDJsonObject> options_;
  BOOL forkLocal_;
  GDCStateEnum *state_;
  id<GDCBusHook> hook_;
}

+ (NSString *)MODE_MIX;

+ (JavaUtilLoggingLogger *)log;

+ (void)checkNotNullWithNSString:(NSString *)paramName
                          withId:(id)param;

- (id)init;

- (id)initWithGDJsonObject:(id<GDJsonObject>)options;

- (void)close;

- (id<GDJsonObject>)getOptions;

- (GDCStateEnum *)getReadyState;

- (GDCSimpleBus *)publish:(NSString *)address message:(id)msg;

- (id<ComGoodowRealtimeCoreHandlerRegistration>)registerHandler:(NSString *)address handler:(id)handler;

- (GDCSimpleBus *)send:(NSString *)address message:(id)msg replyHandler:(id)replyHandler;

- (GDCSimpleBus *)setHookWithGDCBusHook:(id<GDCBusHook>)hook;

- (void)setOptionsWithGDJsonObject:(id<GDJsonObject>)options;

- (void)clearHandlers;

- (void)doClose;

- (void)doReceiveMessageWithGDCMessage:(id<GDCMessage>)message;

- (BOOL)doRegisterHandlerWithNSString:(NSString *)address
     withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)handler;

- (void)doSendOrPubWithBoolean:(BOOL)send
                  withNSString:(NSString *)address
                        withId:(id)msg
withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)replyHandler;

- (BOOL)doUnregisterHandlerWithNSString:(NSString *)address
       withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)handler;

- (BOOL)internalHandleReceiveMessageWithGDCMessage:(id<GDCMessage>)message;

- (BOOL)isLocalForkWithNSString:(NSString *)address;

- (NSString *)makeUUID;

- (void)scheduleHandleWithNSString:(NSString *)address
                            withId:(id)handler
                            withId:(id)event;

- (void)internalHandleSendOrPubWithBoolean:(BOOL)send
                              withNSString:(NSString *)address
                                    withId:(id)msg
          withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)replyHandler;

- (void)copyAllFieldsTo:(GDCSimpleBus *)other;

@end

FOUNDATION_EXPORT BOOL GDCSimpleBus_initialized;
J2OBJC_STATIC_INIT(GDCSimpleBus)

J2OBJC_FIELD_SETTER(GDCSimpleBus, handlerMap_, id<GDJsonObject>)
J2OBJC_FIELD_SETTER(GDCSimpleBus, replyHandlers_, id<GDJsonObject>)
J2OBJC_FIELD_SETTER(GDCSimpleBus, idGenerator_, ComGoodowRealtimeChannelUtilIdGenerator *)
J2OBJC_FIELD_SETTER(GDCSimpleBus, options_, id<GDJsonObject>)
J2OBJC_FIELD_SETTER(GDCSimpleBus, state_, GDCStateEnum *)
J2OBJC_FIELD_SETTER(GDCSimpleBus, hook_, id<GDCBusHook>)

FOUNDATION_EXPORT NSString *GDCSimpleBus_MODE_MIX_;
J2OBJC_STATIC_FIELD_GETTER(GDCSimpleBus, MODE_MIX_, NSString *)

FOUNDATION_EXPORT JavaUtilLoggingLogger *GDCSimpleBus_log_;
J2OBJC_STATIC_FIELD_GETTER(GDCSimpleBus, log_, JavaUtilLoggingLogger *)

typedef GDCSimpleBus ComGoodowRealtimeChannelImplSimpleBus;

@interface GDCSimpleBus_BusProxy : NSObject < GDCBus > {
 @public
  GDCSimpleBus *delegate_;
  id<GDCBusHook> hook_;
}

- (id)initWithGDCSimpleBus:(GDCSimpleBus *)delegate;

- (void)close;

- (GDCStateEnum *)getReadyState;

- (GDCSimpleBus *)publish:(NSString *)address message:(id)msg;

- (id<ComGoodowRealtimeCoreHandlerRegistration>)registerHandler:(NSString *)address handler:(id)handler;

- (GDCSimpleBus *)send:(NSString *)address message:(id)msg replyHandler:(id)replyHandler;

- (id<GDCBus>)setHookWithGDCBusHook:(id<GDCBusHook>)hook;

- (void)copyAllFieldsTo:(GDCSimpleBus_BusProxy *)other;

@end

__attribute__((always_inline)) inline void GDCSimpleBus_BusProxy_init() {}

J2OBJC_FIELD_SETTER(GDCSimpleBus_BusProxy, delegate_, GDCSimpleBus *)
J2OBJC_FIELD_SETTER(GDCSimpleBus_BusProxy, hook_, id<GDCBusHook>)

@interface GDCSimpleBus_$1 : NSObject < ComGoodowRealtimeCoreHandlerRegistration > {
 @public
  GDCSimpleBus *this$0_;
  NSString *val$address_;
  id<ComGoodowRealtimeCoreHandler> val$handler_;
}

- (void)unregisterHandler;

- (id)initWithGDCSimpleBus:(GDCSimpleBus *)outer$
              withNSString:(NSString *)capture$0
withComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)capture$1;

@end

__attribute__((always_inline)) inline void GDCSimpleBus_$1_init() {}

J2OBJC_FIELD_SETTER(GDCSimpleBus_$1, this$0_, GDCSimpleBus *)
J2OBJC_FIELD_SETTER(GDCSimpleBus_$1, val$address_, NSString *)
J2OBJC_FIELD_SETTER(GDCSimpleBus_$1, val$handler_, id<ComGoodowRealtimeCoreHandler>)

@interface GDCSimpleBus_$2 : NSObject < GDJsonArray_ListIterator > {
 @public
  GDCSimpleBus *this$0_;
  NSString *val$address_;
  id<GDCMessage> val$message_;
}

- (void)callWithInt:(int)index
             withId:(id)value;

- (id)initWithGDCSimpleBus:(GDCSimpleBus *)outer$
              withNSString:(NSString *)capture$0
            withGDCMessage:(id<GDCMessage>)capture$1;

@end

__attribute__((always_inline)) inline void GDCSimpleBus_$2_init() {}

J2OBJC_FIELD_SETTER(GDCSimpleBus_$2, this$0_, GDCSimpleBus *)
J2OBJC_FIELD_SETTER(GDCSimpleBus_$2, val$address_, NSString *)
J2OBJC_FIELD_SETTER(GDCSimpleBus_$2, val$message_, id<GDCMessage>)

@interface GDCSimpleBus_$3 : NSObject < ComGoodowRealtimeCoreHandler > {
 @public
  GDCSimpleBus *this$0_;
  id val$handler_;
  id val$event_;
  NSString *val$address_;
}

- (void)handleWithId:(id)ignore;

- (id)initWithGDCSimpleBus:(GDCSimpleBus *)outer$
                    withId:(id)capture$0
                    withId:(id)capture$1
              withNSString:(NSString *)capture$2;

@end

__attribute__((always_inline)) inline void GDCSimpleBus_$3_init() {}

J2OBJC_FIELD_SETTER(GDCSimpleBus_$3, this$0_, GDCSimpleBus *)
J2OBJC_FIELD_SETTER(GDCSimpleBus_$3, val$handler_, id)
J2OBJC_FIELD_SETTER(GDCSimpleBus_$3, val$event_, id)
J2OBJC_FIELD_SETTER(GDCSimpleBus_$3, val$address_, NSString *)

#endif // _GDCSimpleBus_H_

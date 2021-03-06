//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/core/Platform.java
//
//  Created by retechretech.
//

#include "IOSClass.h"
#include "com/goodow/realtime/core/Net.h"
#include "com/goodow/realtime/core/Platform.h"
#include "com/goodow/realtime/core/PlatformFactory.h"
#include "com/goodow/realtime/core/Scheduler.h"
#include "java/lang/IllegalArgumentException.h"

@implementation ComGoodowRealtimeCorePlatform

id<ComGoodowRealtimeCorePlatformFactory> ComGoodowRealtimeCorePlatform_FACTORY_;

+ (id<ComGoodowRealtimeCorePlatformFactory>)FACTORY {
  return ComGoodowRealtimeCorePlatform_FACTORY_;
}

+ (void)setFACTORY:(id<ComGoodowRealtimeCorePlatformFactory>)FACTORY {
  ComGoodowRealtimeCorePlatform_FACTORY_ = FACTORY;
}

+ (id<ComGoodowRealtimeCoreNet>)net {
  return [((id<ComGoodowRealtimeCorePlatformFactory>) nil_chk([ComGoodowRealtimeCorePlatform get])) net];
}

+ (id<ComGoodowRealtimeCoreScheduler>)scheduler {
  return [((id<ComGoodowRealtimeCorePlatformFactory>) nil_chk([ComGoodowRealtimeCorePlatform get])) scheduler];
}

+ (void)setFactoryWithComGoodowRealtimeCorePlatformFactory:(id<ComGoodowRealtimeCorePlatformFactory>)factory {
  ComGoodowRealtimeCorePlatform_FACTORY_ = factory;
}

+ (ComGoodowRealtimeCorePlatform_TypeEnum *)type {
  return [((id<ComGoodowRealtimeCorePlatformFactory>) nil_chk([ComGoodowRealtimeCorePlatform get])) type];
}

+ (id<ComGoodowRealtimeCorePlatformFactory>)get {
  NSAssert(ComGoodowRealtimeCorePlatform_FACTORY_ != nil, @"You must register a platform first by invoke {Java|Android}Platform.register()");
  return ComGoodowRealtimeCorePlatform_FACTORY_;
}

- (id)init {
  return [super init];
}

+ (J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { "net", NULL, "Lcom.goodow.realtime.core.Net;", 0x9, NULL },
    { "scheduler", NULL, "Lcom.goodow.realtime.core.Scheduler;", 0x9, NULL },
    { "setFactoryWithComGoodowRealtimeCorePlatformFactory:", "setFactory", "V", 0x9, NULL },
    { "type", NULL, "Lcom.goodow.realtime.core.Platform$Type;", 0x9, NULL },
    { "get", NULL, "Lcom.goodow.realtime.core.PlatformFactory;", 0xa, NULL },
    { "init", "Platform", NULL, 0x4, NULL },
  };
  static J2ObjcFieldInfo fields[] = {
    { "FACTORY_", NULL, 0xa, "Lcom.goodow.realtime.core.PlatformFactory;", &ComGoodowRealtimeCorePlatform_FACTORY_,  },
  };
  static J2ObjcClassInfo _ComGoodowRealtimeCorePlatform = { "Platform", "com.goodow.realtime.core", NULL, 0x1, 6, methods, 1, fields, 0, NULL};
  return &_ComGoodowRealtimeCorePlatform;
}

@end

BOOL ComGoodowRealtimeCorePlatform_TypeEnum_initialized = NO;

ComGoodowRealtimeCorePlatform_TypeEnum *ComGoodowRealtimeCorePlatform_TypeEnum_values[7];

@implementation ComGoodowRealtimeCorePlatform_TypeEnum

+ (ComGoodowRealtimeCorePlatform_TypeEnum *)JAVA {
  return ComGoodowRealtimeCorePlatform_TypeEnum_JAVA;
}
+ (ComGoodowRealtimeCorePlatform_TypeEnum *)HTML {
  return ComGoodowRealtimeCorePlatform_TypeEnum_HTML;
}
+ (ComGoodowRealtimeCorePlatform_TypeEnum *)ANDROID {
  return ComGoodowRealtimeCorePlatform_TypeEnum_ANDROID;
}
+ (ComGoodowRealtimeCorePlatform_TypeEnum *)IOS {
  return ComGoodowRealtimeCorePlatform_TypeEnum_IOS;
}
+ (ComGoodowRealtimeCorePlatform_TypeEnum *)FLASH {
  return ComGoodowRealtimeCorePlatform_TypeEnum_FLASH;
}
+ (ComGoodowRealtimeCorePlatform_TypeEnum *)STUB {
  return ComGoodowRealtimeCorePlatform_TypeEnum_STUB;
}
+ (ComGoodowRealtimeCorePlatform_TypeEnum *)VERTX {
  return ComGoodowRealtimeCorePlatform_TypeEnum_VERTX;
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

- (id)initWithNSString:(NSString *)__name withInt:(int)__ordinal {
  return [super initWithNSString:__name withInt:__ordinal];
}

+ (void)initialize {
  if (self == [ComGoodowRealtimeCorePlatform_TypeEnum class]) {
    ComGoodowRealtimeCorePlatform_TypeEnum_JAVA = [[ComGoodowRealtimeCorePlatform_TypeEnum alloc] initWithNSString:@"JAVA" withInt:0];
    ComGoodowRealtimeCorePlatform_TypeEnum_HTML = [[ComGoodowRealtimeCorePlatform_TypeEnum alloc] initWithNSString:@"HTML" withInt:1];
    ComGoodowRealtimeCorePlatform_TypeEnum_ANDROID = [[ComGoodowRealtimeCorePlatform_TypeEnum alloc] initWithNSString:@"ANDROID" withInt:2];
    ComGoodowRealtimeCorePlatform_TypeEnum_IOS = [[ComGoodowRealtimeCorePlatform_TypeEnum alloc] initWithNSString:@"IOS" withInt:3];
    ComGoodowRealtimeCorePlatform_TypeEnum_FLASH = [[ComGoodowRealtimeCorePlatform_TypeEnum alloc] initWithNSString:@"FLASH" withInt:4];
    ComGoodowRealtimeCorePlatform_TypeEnum_STUB = [[ComGoodowRealtimeCorePlatform_TypeEnum alloc] initWithNSString:@"STUB" withInt:5];
    ComGoodowRealtimeCorePlatform_TypeEnum_VERTX = [[ComGoodowRealtimeCorePlatform_TypeEnum alloc] initWithNSString:@"VERTX" withInt:6];
    ComGoodowRealtimeCorePlatform_TypeEnum_initialized = YES;
  }
}

+ (IOSObjectArray *)values {
  return [IOSObjectArray arrayWithObjects:ComGoodowRealtimeCorePlatform_TypeEnum_values count:7 type:[IOSClass classWithClass:[ComGoodowRealtimeCorePlatform_TypeEnum class]]];
}

+ (ComGoodowRealtimeCorePlatform_TypeEnum *)valueOfWithNSString:(NSString *)name {
  for (int i = 0; i < 7; i++) {
    ComGoodowRealtimeCorePlatform_TypeEnum *e = ComGoodowRealtimeCorePlatform_TypeEnum_values[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[JavaLangIllegalArgumentException alloc] initWithNSString:name];
  return nil;
}

+ (J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { "init", NULL, NULL, 0x1, NULL },
  };
  static const char *superclass_type_args[] = {"Lcom.goodow.realtime.core.Platform$Type;"};
  static J2ObjcClassInfo _ComGoodowRealtimeCorePlatform_TypeEnum = { "Type", "com.goodow.realtime.core", "Platform", 0x4019, 1, methods, 0, NULL, 1, superclass_type_args};
  return &_ComGoodowRealtimeCorePlatform_TypeEnum;
}

@end

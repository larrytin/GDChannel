//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/channel/ReplyException.java
//
//  Created by retechretech.
//

#ifndef _GDCReplyException_H_
#define _GDCReplyException_H_

@class GDCReplyFailureEnum;

#import "JreEmulation.h"
#include "java/lang/RuntimeException.h"

#define GDCReplyException_serialVersionUID -4441153344646081242LL

@interface GDCReplyException : JavaLangRuntimeException {
 @public
  GDCReplyFailureEnum *failureType__;
  int failureCode__;
}

+ (long long int)serialVersionUID;

- (id)initWithGDCReplyFailureEnum:(GDCReplyFailureEnum *)failureType;

- (id)initWithGDCReplyFailureEnum:(GDCReplyFailureEnum *)failureType
                          withInt:(int)failureCode
                     withNSString:(NSString *)message;

- (id)initWithGDCReplyFailureEnum:(GDCReplyFailureEnum *)failureType
                     withNSString:(NSString *)message;

- (int)failureCode;

- (GDCReplyFailureEnum *)failureType;

- (void)copyAllFieldsTo:(GDCReplyException *)other;

@end

__attribute__((always_inline)) inline void GDCReplyException_init() {}

J2OBJC_FIELD_SETTER(GDCReplyException, failureType__, GDCReplyFailureEnum *)

J2OBJC_STATIC_FIELD_GETTER(GDCReplyException, serialVersionUID, long long int)

typedef GDCReplyException ComGoodowRealtimeChannelReplyException;

#endif // _GDCReplyException_H_

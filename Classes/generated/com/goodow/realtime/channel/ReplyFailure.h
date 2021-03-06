//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/channel/ReplyFailure.java
//
//  Created by retechretech.
//

#ifndef _GDCReplyFailure_H_
#define _GDCReplyFailure_H_

#import "JreEmulation.h"
#include "java/lang/Enum.h"

typedef enum {
  GDCReplyFailure_TIMEOUT = 0,
  GDCReplyFailure_NO_HANDLERS = 1,
  GDCReplyFailure_RECIPIENT_FAILURE = 2,
} GDCReplyFailure;

@interface GDCReplyFailureEnum : JavaLangEnum < NSCopying > {
}
+ (GDCReplyFailureEnum *)TIMEOUT;
+ (GDCReplyFailureEnum *)NO_HANDLERS;
+ (GDCReplyFailureEnum *)RECIPIENT_FAILURE;
+ (IOSObjectArray *)values;
+ (GDCReplyFailureEnum *)valueOfWithNSString:(NSString *)name;
- (id)copyWithZone:(NSZone *)zone;

+ (GDCReplyFailureEnum *)fromIntWithInt:(int)i;

- (int)toInt;

- (id)initWithNSString:(NSString *)__name withInt:(int)__ordinal;
@end

FOUNDATION_EXPORT BOOL GDCReplyFailureEnum_initialized;
J2OBJC_STATIC_INIT(GDCReplyFailureEnum)

FOUNDATION_EXPORT GDCReplyFailureEnum *GDCReplyFailureEnum_values[];

#define GDCReplyFailureEnum_TIMEOUT GDCReplyFailureEnum_values[GDCReplyFailure_TIMEOUT]
J2OBJC_STATIC_FIELD_GETTER(GDCReplyFailureEnum, TIMEOUT, GDCReplyFailureEnum *)

#define GDCReplyFailureEnum_NO_HANDLERS GDCReplyFailureEnum_values[GDCReplyFailure_NO_HANDLERS]
J2OBJC_STATIC_FIELD_GETTER(GDCReplyFailureEnum, NO_HANDLERS, GDCReplyFailureEnum *)

#define GDCReplyFailureEnum_RECIPIENT_FAILURE GDCReplyFailureEnum_values[GDCReplyFailure_RECIPIENT_FAILURE]
J2OBJC_STATIC_FIELD_GETTER(GDCReplyFailureEnum, RECIPIENT_FAILURE, GDCReplyFailureEnum *)

#endif // _GDCReplyFailure_H_

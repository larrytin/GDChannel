//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/channel/util/FuzzingBackOffGenerator.java
//
//  Created by retechretech.
//

#ifndef _ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator_H_
#define _ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator_H_

@class ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator_BackOffParameters;

#import "JreEmulation.h"

@interface ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator : NSObject {
 @public
  double randomizationFactor_;
  int initialBackOff_;
  int maxBackOff_;
  int nextBackOffTime_;
  int backOffTime_;
}

- (id)initWithInt:(int)initialBackOff
          withInt:(int)maxBackOff
       withDouble:(double)randomizationFactor;

- (ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator_BackOffParameters *)next;

- (void)reset;

- (void)copyAllFieldsTo:(ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator *)other;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator_init() {}

@interface ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator_BackOffParameters : NSObject {
 @public
  int targetDelay_;
  int minimumDelay_;
}

- (id)initWithInt:(int)targetDelay
          withInt:(int)minimumDelay;

- (void)copyAllFieldsTo:(ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator_BackOffParameters *)other;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator_BackOffParameters_init() {}

#endif // _ComGoodowRealtimeChannelUtilFuzzingBackOffGenerator_H_

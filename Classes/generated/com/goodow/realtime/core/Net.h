//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/core/Net.java
//
//  Created by retechretech.
//

#ifndef _ComGoodowRealtimeCoreNet_H_
#define _ComGoodowRealtimeCoreNet_H_

@protocol ComGoodowRealtimeCoreWebSocket;
@protocol GDJsonObject;

#import "JreEmulation.h"

@protocol ComGoodowRealtimeCoreNet < NSObject, JavaObject >

- (id<ComGoodowRealtimeCoreWebSocket>)createWebSocketWithNSString:(NSString *)url
                                                 withGDJsonObject:(id<GDJsonObject>)options;

@end

#endif // _ComGoodowRealtimeCoreNet_H_

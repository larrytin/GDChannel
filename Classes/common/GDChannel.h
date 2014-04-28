// Copyright 2013 Goodow.com. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//
//  GDChannel.h
//  GDChannel
//
//  Created by Larry Tin.
//

# define GDCHandlerRegistration ComGoodowRealtimeCoreHandlerRegistration

typedef void (^GDCBlock)(id event);
@protocol GDCMessage;
typedef void (^GDCMessageBlock)(id<GDCMessage> message);

#import "JreEmulation.h"
#import "GDJson.h"
#import "com/goodow/realtime/channel/Bus.h"
#import "com/goodow/realtime/channel/Message.h"
#import "com/goodow/realtime/channel/State.h"
#import "com/goodow/realtime/channel/impl/SimpleBus.h"
#import "com/goodow/realtime/channel/impl/WebSocketBus.h"
#import "com/goodow/realtime/channel/impl/ReconnectBus.h"
#import "com/goodow/realtime/core/HandlerRegistration.h"
#import "com/goodow/realtime/objc/ObjCPlatform.h"
#import "GDCWebSocketBus+OCNI.h"

// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#import "DCIceServerRelayType.h"
#import "DCIceServerType.h"
#import <Foundation/Foundation.h>

@interface DCIceServer : NSObject
- (nonnull instancetype)initWithHostname:(nonnull NSString *)hostname
                                    port:(int16_t)port
                                    type:(DCIceServerType)type
                                username:(nonnull NSString *)username
                                password:(nonnull NSString *)password
                               relayType:(DCIceServerRelayType)relayType;
+ (nonnull instancetype)IceServerWithHostname:(nonnull NSString *)hostname
                                         port:(int16_t)port
                                         type:(DCIceServerType)type
                                     username:(nonnull NSString *)username
                                     password:(nonnull NSString *)password
                                    relayType:(DCIceServerRelayType)relayType;

@property (nonatomic, readonly, nonnull) NSString * hostname;

@property (nonatomic, readonly) int16_t port;

@property (nonatomic, readonly) DCIceServerType type;

@property (nonatomic, readonly, nonnull) NSString * username;

@property (nonatomic, readonly, nonnull) NSString * password;

@property (nonatomic, readonly) DCIceServerRelayType relayType;

@end

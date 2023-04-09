// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#import "DCProxyServer.h"


@implementation DCProxyServer

- (nonnull instancetype)initWithType:(DCProxyServerType)type
                            hostname:(nonnull NSString *)hostname
                                port:(int16_t)port
                            username:(nullable NSString *)username
                            password:(nullable NSString *)password
{
    if (self = [super init]) {
        _type = type;
        _hostname = [hostname copy];
        _port = port;
        _username = [username copy];
        _password = [password copy];
    }
    return self;
}

+ (nonnull instancetype)ProxyServerWithType:(DCProxyServerType)type
                                   hostname:(nonnull NSString *)hostname
                                       port:(int16_t)port
                                   username:(nullable NSString *)username
                                   password:(nullable NSString *)password
{
    return [(DCProxyServer*)[self alloc] initWithType:type
                                             hostname:hostname
                                                 port:port
                                             username:username
                                             password:password];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p type:%@ hostname:%@ port:%@ username:%@ password:%@>", self.class, (void *)self, @(self.type), self.hostname, @(self.port), self.username, self.password];
}

@end

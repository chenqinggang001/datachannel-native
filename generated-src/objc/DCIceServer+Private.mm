// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#import "DCIceServer+Private.h"
#import "DCIceServerRelayType+Private.h"
#import "DCIceServerType+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto IceServer::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.hostname),
            ::djinni::I16::toCpp(obj.port),
            ::djinni::Enum<::libdc::IceServerType, DCIceServerType>::toCpp(obj.type),
            ::djinni::String::toCpp(obj.username),
            ::djinni::String::toCpp(obj.password),
            ::djinni::Enum<::libdc::IceServerRelayType, DCIceServerRelayType>::toCpp(obj.relayType)};
}

auto IceServer::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DCIceServer alloc] initWithHostname:(::djinni::String::fromCpp(cpp.hostname))
                                            port:(::djinni::I16::fromCpp(cpp.port))
                                            type:(::djinni::Enum<::libdc::IceServerType, DCIceServerType>::fromCpp(cpp.type))
                                        username:(::djinni::String::fromCpp(cpp.username))
                                        password:(::djinni::String::fromCpp(cpp.password))
                                       relayType:(::djinni::Enum<::libdc::IceServerRelayType, DCIceServerRelayType>::fromCpp(cpp.relayType))];
}

}  // namespace djinni_generated

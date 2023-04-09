// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#include "NativeIceServer.hpp"  // my header
#include "Marshal.hpp"
#include "NativeIceServerRelayType.hpp"
#include "NativeIceServerType.hpp"

namespace djinni_generated {

NativeIceServer::NativeIceServer() = default;

NativeIceServer::~NativeIceServer() = default;

auto NativeIceServer::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeIceServer>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.hostname)),
                                                           ::djinni::get(::djinni::I16::fromCpp(jniEnv, c.port)),
                                                           ::djinni::get(::djinni_generated::NativeIceServerType::fromCpp(jniEnv, c.type)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.username)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.password)),
                                                           ::djinni::get(::djinni_generated::NativeIceServerRelayType::fromCpp(jniEnv, c.relayType)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeIceServer::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 7);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeIceServer>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mHostname)),
            ::djinni::I16::toCpp(jniEnv, jniEnv->GetShortField(j, data.field_mPort)),
            ::djinni_generated::NativeIceServerType::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mType)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mUsername)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mPassword)),
            ::djinni_generated::NativeIceServerRelayType::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mRelayType))};
}

}  // namespace djinni_generated

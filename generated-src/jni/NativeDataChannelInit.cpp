// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#include "NativeDataChannelInit.hpp"  // my header
#include "Marshal.hpp"
#include "NativeReliability.hpp"

namespace djinni_generated {

NativeDataChannelInit::NativeDataChannelInit() = default;

NativeDataChannelInit::~NativeDataChannelInit() = default;

auto NativeDataChannelInit::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeDataChannelInit>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni_generated::NativeReliability::fromCpp(jniEnv, c.reliability)),
                                                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c.negotiated)),
                                                           ::djinni::get(::djinni::Optional<std::optional, ::djinni::I16>::fromCpp(jniEnv, c.id)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.protocol)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeDataChannelInit::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 5);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeDataChannelInit>::get();
    return {::djinni_generated::NativeReliability::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mReliability)),
            ::djinni::Bool::toCpp(jniEnv, jniEnv->GetBooleanField(j, data.field_mNegotiated)),
            ::djinni::Optional<std::optional, ::djinni::I16>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mId)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mProtocol))};
}

}  // namespace djinni_generated

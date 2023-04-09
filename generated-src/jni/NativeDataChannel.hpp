// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#pragma once

#include "DataChannel.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeDataChannel final : ::djinni::JniInterface<::libdc::DataChannel, NativeDataChannel> {
public:
    using CppType = std::shared_ptr<::libdc::DataChannel>;
    using CppOptType = std::shared_ptr<::libdc::DataChannel>;
    using JniType = jobject;

    using Boxed = NativeDataChannel;

    ~NativeDataChannel();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeDataChannel>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeDataChannel>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeDataChannel();
    friend ::djinni::JniClass<NativeDataChannel>;
    friend ::djinni::JniInterface<::libdc::DataChannel, NativeDataChannel>;

};

}  // namespace djinni_generated

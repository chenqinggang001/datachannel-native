// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#pragma once

#include "GatheringStateCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeGatheringStateCallback final : ::djinni::JniInterface<::libdc::GatheringStateCallback, NativeGatheringStateCallback> {
public:
    using CppType = std::shared_ptr<::libdc::GatheringStateCallback>;
    using CppOptType = std::shared_ptr<::libdc::GatheringStateCallback>;
    using JniType = jobject;

    using Boxed = NativeGatheringStateCallback;

    ~NativeGatheringStateCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeGatheringStateCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeGatheringStateCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeGatheringStateCallback();
    friend ::djinni::JniClass<NativeGatheringStateCallback>;
    friend ::djinni::JniInterface<::libdc::GatheringStateCallback, NativeGatheringStateCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::libdc::GatheringStateCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onStateChanged(::libdc::GatheringState state) override;

    private:
        friend ::djinni::JniInterface<::libdc::GatheringStateCallback, ::djinni_generated::NativeGatheringStateCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/cdnbye/libdc/GatheringStateCallback") };
    const jmethodID method_onStateChanged { ::djinni::jniGetMethodID(clazz.get(), "onStateChanged", "(Lcom/cdnbye/libdc/GatheringState;)V") };
};

}  // namespace djinni_generated

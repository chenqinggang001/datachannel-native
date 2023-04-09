// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#include "NativeSdpCallback.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeSdpCallback::NativeSdpCallback() : ::djinni::JniInterface<::libdc::SdpCallback, NativeSdpCallback>() {}

NativeSdpCallback::~NativeSdpCallback() = default;

NativeSdpCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeSdpCallback::JavaProxy::~JavaProxy() = default;

void NativeSdpCallback::JavaProxy::onSdp(const std::string & c_sdp) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeSdpCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onSdp,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_sdp)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated

// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#import "DCIceStateCallback+Private.h"
#import "DCIceStateCallback.h"
#import "DCIceState+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class IceStateCallback::ObjcProxy final
: public ::libdc::IceStateCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::IceStateCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void onStateChanged(::libdc::IceState c_state) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onStateChanged:(::djinni::Enum<::libdc::IceState, DCIceState>::fromCpp(c_state))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto IceStateCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto IceStateCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

}  // namespace djinni_generated

// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#import "DCDcEventCallback+Private.h"
#import "DCDcEventCallback.h"
#import "DJIObjcWrapperCache+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class DcEventCallback::ObjcProxy final
: public ::libdc::DcEventCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::DcEventCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void onEvent() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onEvent];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto DcEventCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto DcEventCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

}  // namespace djinni_generated

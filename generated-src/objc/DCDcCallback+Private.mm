// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#import "DCDcCallback+Private.h"
#import "DCDcCallback.h"
#import "DCDataChannel+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class DcCallback::ObjcProxy final
: public ::libdc::DcCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::DcCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void onDataChannel(const std::shared_ptr<::libdc::DataChannel> & c_dc) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onDataChannel:(::djinni_generated::DataChannel::fromCpp(c_dc))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto DcCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto DcCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

}  // namespace djinni_generated

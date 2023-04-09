// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#include "DcErrorCallback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol DCDcErrorCallback;

namespace djinni_generated {

class DcErrorCallback
{
public:
    using CppType = std::shared_ptr<::libdc::DcErrorCallback>;
    using CppOptType = std::shared_ptr<::libdc::DcErrorCallback>;
    using ObjcType = id<DCDcErrorCallback>;

    using Boxed = DcErrorCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated


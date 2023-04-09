// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#pragma once

#include <functional>

namespace libdc {

enum class ProxyServerType : int {
    HTTP,
    SOCKS5,
};

}  // namespace libdc

namespace std {

template <>
struct hash<::libdc::ProxyServerType> {
    size_t operator()(::libdc::ProxyServerType type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std

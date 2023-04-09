// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#pragma once

#include <functional>

namespace libdc {

enum class IceState : int {
    NEW,
    CONNECTING,
    CONNECTED,
    DISCONNECTED,
    FAILED,
    CLOSED,
};

}  // namespace libdc

namespace std {

template <>
struct hash<::libdc::IceState> {
    size_t operator()(::libdc::IceState type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std

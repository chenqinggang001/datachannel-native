// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libdc.djinni

#pragma once

#include "CertificateType.hpp"
#include "IceServer.hpp"
#include "ProxyServer.hpp"
#include "TransportPolicy.hpp"
#include <cstdint>
#include <optional>
#include <string>
#include <utility>
#include <vector>

namespace libdc {

struct Configuration final {
    std::vector<IceServer> iceServers;
    std::optional<ProxyServer> proxyServer;
    std::optional<std::string> bindAddress;
    CertificateType certificateType;
    TransportPolicy iceTransportPolicy;
    bool enableIceTcp;
    bool enableIceUdpMux;
    bool disableAutoNegotiation;
    bool forceMediaTransport;
    int32_t portRangeBegin;
    int32_t portRangeEnd;
    std::optional<int32_t> mtu;
    std::optional<int32_t> maxMessageSize;

    Configuration(std::vector<IceServer> iceServers_,
                  std::optional<ProxyServer> proxyServer_,
                  std::optional<std::string> bindAddress_,
                  CertificateType certificateType_,
                  TransportPolicy iceTransportPolicy_,
                  bool enableIceTcp_,
                  bool enableIceUdpMux_,
                  bool disableAutoNegotiation_,
                  bool forceMediaTransport_,
                  int32_t portRangeBegin_,
                  int32_t portRangeEnd_,
                  std::optional<int32_t> mtu_,
                  std::optional<int32_t> maxMessageSize_)
    : iceServers(std::move(iceServers_))
    , proxyServer(std::move(proxyServer_))
    , bindAddress(std::move(bindAddress_))
    , certificateType(std::move(certificateType_))
    , iceTransportPolicy(std::move(iceTransportPolicy_))
    , enableIceTcp(std::move(enableIceTcp_))
    , enableIceUdpMux(std::move(enableIceUdpMux_))
    , disableAutoNegotiation(std::move(disableAutoNegotiation_))
    , forceMediaTransport(std::move(forceMediaTransport_))
    , portRangeBegin(std::move(portRangeBegin_))
    , portRangeEnd(std::move(portRangeEnd_))
    , mtu(std::move(mtu_))
    , maxMessageSize(std::move(maxMessageSize_))
    {}
};

}  // namespace libdc

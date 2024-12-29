#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct NetworkRouteChange; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct PacketResult; }
namespace webrtc { struct TransportPacketsFeedback; }
// clang-format on

namespace webrtc {

class NetworkStateEstimator {
public:
    // prevent constructor by default
    NetworkStateEstimator& operator=(NetworkStateEstimator const&);
    NetworkStateEstimator(NetworkStateEstimator const&);
    NetworkStateEstimator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::optional<::webrtc::NetworkStateEstimate> GetCurrentEstimate() = 0;

    // vIndex: 1
    virtual void OnTransportPacketsFeedback(::webrtc::TransportPacketsFeedback const&) = 0;

    // vIndex: 2
    virtual void OnReceivedPacket(::webrtc::PacketResult const&);

    // vIndex: 3
    virtual void OnRouteChange(::webrtc::NetworkRouteChange const&) = 0;

    // vIndex: 4
    virtual ~NetworkStateEstimator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnReceivedPacket(::webrtc::PacketResult const&);
    // NOLINTEND
};

} // namespace webrtc
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class SctpTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace webrtc { class Environment; }
// clang-format on

namespace webrtc {

class SctpTransportFactoryInterface {
public:
    // prevent constructor by default
    SctpTransportFactoryInterface& operator=(SctpTransportFactoryInterface const&);
    SctpTransportFactoryInterface(SctpTransportFactoryInterface const&);
    SctpTransportFactoryInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SctpTransportFactoryInterface();

    // vIndex: 1
    virtual ::std::unique_ptr<::cricket::SctpTransportInternal>
    CreateSctpTransport(::webrtc::Environment const&, ::rtc::PacketTransportInternal*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
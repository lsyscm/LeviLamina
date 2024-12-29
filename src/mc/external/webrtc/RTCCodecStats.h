#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCCodecStats {
public:
    // prevent constructor by default
    RTCCodecStats& operator=(RTCCodecStats const&);
    RTCCodecStats(RTCCodecStats const&);
    RTCCodecStats();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RTCCodecStats(::std::string, ::webrtc::Timestamp);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string, ::webrtc::Timestamp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
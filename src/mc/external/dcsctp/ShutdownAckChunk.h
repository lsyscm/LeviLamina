#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ShutdownAckChunk {
public:
    // prevent constructor by default
    ShutdownAckChunk& operator=(ShutdownAckChunk const&);
    ShutdownAckChunk(ShutdownAckChunk const&);
    ShutdownAckChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::ShutdownAckChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
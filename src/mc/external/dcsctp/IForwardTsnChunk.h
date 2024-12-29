#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class IForwardTsnChunk {
public:
    // prevent constructor by default
    IForwardTsnChunk& operator=(IForwardTsnChunk const&);
    IForwardTsnChunk(IForwardTsnChunk const&);
    IForwardTsnChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::IForwardTsnChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
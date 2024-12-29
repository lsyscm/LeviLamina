#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ForwardTsnSupportedParameter {
public:
    // prevent constructor by default
    ForwardTsnSupportedParameter& operator=(ForwardTsnSupportedParameter const&);
    ForwardTsnSupportedParameter(ForwardTsnSupportedParameter const&);
    ForwardTsnSupportedParameter();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::ForwardTsnSupportedParameter> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
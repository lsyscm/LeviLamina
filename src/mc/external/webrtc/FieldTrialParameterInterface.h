#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialParameterInterface {
public:
    // prevent constructor by default
    FieldTrialParameterInterface& operator=(FieldTrialParameterInterface const&);
    FieldTrialParameterInterface(FieldTrialParameterInterface const&);
    FieldTrialParameterInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FieldTrialParameterInterface(::std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
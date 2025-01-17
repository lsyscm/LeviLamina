#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Control {
public:
    // prevent constructor by default
    Control& operator=(Control const&);
    Control(Control const&);
    Control();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Control() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/AppConfigs.h"

class VanillaAppConfigs : public ::AppConfigs {
public:
    // prevent constructor by default
    VanillaAppConfigs& operator=(VanillaAppConfigs const&);
    VanillaAppConfigs(VanillaAppConfigs const&);
    VanillaAppConfigs();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaAppConfigs() /*override*/ = default;
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

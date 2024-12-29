#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/ILegacyActorDependencies.h"

namespace Interactions {

class LegacyActorDependencies : public ::Interactions::ILegacyActorDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk80e268;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyActorDependencies& operator=(LegacyActorDependencies const&);
    LegacyActorDependencies(LegacyActorDependencies const&);
    LegacyActorDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isRemoved() /*override*/;

    // vIndex: 0
    virtual ~LegacyActorDependencies() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isRemoved();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Interactions
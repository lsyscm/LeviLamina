#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct ManagedWanderingTraderDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    ManagedWanderingTraderDescription& operator=(ManagedWanderingTraderDescription const&);
    ManagedWanderingTraderDescription(ManagedWanderingTraderDescription const&);
    ManagedWanderingTraderDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 1
    virtual ~ManagedWanderingTraderDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

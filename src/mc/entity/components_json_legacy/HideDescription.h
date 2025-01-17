#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct HideDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    HideDescription& operator=(HideDescription const&);
    HideDescription(HideDescription const&);
    HideDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 1
    virtual ~HideDescription() /*override*/;
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

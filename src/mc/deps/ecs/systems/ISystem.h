#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ISystem {
public:
    // prevent constructor by default
    ISystem& operator=(ISystem const&);
    ISystem(ISystem const&);
    ISystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISystem() = default;

    // vIndex: 1
    virtual void registerEvents(::entt::dispatcher& dispatcher);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerEvents(::entt::dispatcher& dispatcher);
    // NOLINTEND
};

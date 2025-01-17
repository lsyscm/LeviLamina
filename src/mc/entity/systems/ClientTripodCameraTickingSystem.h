#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class ClientTripodCameraTickingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ClientTripodCameraTickingSystem& operator=(ClientTripodCameraTickingSystem const&);
    ClientTripodCameraTickingSystem(ClientTripodCameraTickingSystem const&);
    ClientTripodCameraTickingSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~ClientTripodCameraTickingSystem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

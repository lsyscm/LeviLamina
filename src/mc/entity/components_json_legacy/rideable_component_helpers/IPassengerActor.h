#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

namespace RideableComponentHelpers {

class IPassengerActor {
public:
    // prevent constructor by default
    IPassengerActor& operator=(IPassengerActor const&);
    IPassengerActor(IPassengerActor const&);
    IPassengerActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPassengerActor();

    // vIndex: 1
    virtual bool canBePulledIntoVehicle() const = 0;

    // vIndex: 2
    virtual bool isRiding() const = 0;

    // vIndex: 3
    virtual bool isLeashed() const = 0;

    // vIndex: 4
    virtual ::AABB const& getAABB() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
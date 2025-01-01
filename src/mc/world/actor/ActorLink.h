#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorLinkType.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

struct ActorLink {
public:
    // ActorLink inner types define
    using List = ::std::vector<::ActorLink>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ActorLinkType> type;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> A;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> B;
    ::ll::TypedStorage<1, 1, bool>            mImmediate;
    ::ll::TypedStorage<1, 1, bool>            mPassengerInitiated;
    ::ll::TypedStorage<4, 4, float>           mVehicleAngularVelocity;
    // NOLINTEND
};

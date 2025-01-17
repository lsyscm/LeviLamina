#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BaseGameVersion;
class Player;
// clang-format on

class BucketableComponent {
public:
    // prevent constructor by default
    BucketableComponent& operator=(BucketableComponent const&);
    BucketableComponent(BucketableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BucketableComponent();

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void implInteraction(::Actor& owner, ::Player& player);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& WATER_BUCKET_USEABLE_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

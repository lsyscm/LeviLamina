#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class Block;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Strider : public ::Animal {
public:
    // Strider inner types declare
    // clang-format off
    class PlayerRideInLavaInOverworldAchievementTracker;
    // clang-format on

    // Strider inner types define
    class PlayerRideInLavaInOverworldAchievementTracker {
    public:
        // PlayerRideInLavaInOverworldAchievementTracker inner types define
        enum class VehicleState : uchar {
            Riding = 0,
            Done   = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk2b541a;
        ::ll::UntypedStorage<1, 1>  mUnke10c81;
        ::ll::UntypedStorage<1, 1>  mUnkda17f1;
        ::ll::UntypedStorage<4, 12> mUnk4982aa;
        ::ll::UntypedStorage<8, 8>  mUnk75e236;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerRideInLavaInOverworldAchievementTracker& operator=(PlayerRideInLavaInOverworldAchievementTracker const&);
        PlayerRideInLavaInOverworldAchievementTracker(PlayerRideInLavaInOverworldAchievementTracker const&);
        PlayerRideInLavaInOverworldAchievementTracker();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void tick(::Strider& strider);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcfee51;
    // NOLINTEND

public:
    // prevent constructor by default
    Strider& operator=(Strider const&);
    Strider(Strider const&);
    Strider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 176
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 128
    virtual float getNextStep(float const moveDist) /*override*/;

    // vIndex: 138
    virtual bool shouldTryMakeStepSound() /*override*/;

    // vIndex: 142
    virtual void _playStepSound(::BlockPos const& pos, ::Block const& onBlock) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 8
    virtual ~Strider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Strider(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI float $getNextStep(float const moveDist);

    MCAPI bool $shouldTryMakeStepSound();

    MCAPI void $_playStepSound(::BlockPos const& pos, ::Block const& onBlock);

    MCAPI void $normalTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

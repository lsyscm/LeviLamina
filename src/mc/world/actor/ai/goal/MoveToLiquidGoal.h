#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
// clang-format on

class MoveToLiquidGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbf5c17;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToLiquidGoal& operator=(MoveToLiquidGoal const&);
    MoveToLiquidGoal(MoveToLiquidGoal const&);
    MoveToLiquidGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 17
    virtual bool findTargetBlock() /*override*/;

    // vIndex: 0
    virtual ~MoveToLiquidGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveToLiquidGoal(
        ::Mob&         mob,
        float          speedModifier,
        int            searchRange,
        int            searchHeight,
        int            searchCount,
        ::MaterialType materialType,
        float          goalRadius
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&         mob,
        float          speedModifier,
        int            searchRange,
        int            searchHeight,
        int            searchCount,
        ::MaterialType materialType,
        float          goalRadius
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $findTargetBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

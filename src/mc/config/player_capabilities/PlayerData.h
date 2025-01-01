#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/player_capabilities/IPlayerData.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace PlayerCapabilities {

class PlayerData : public ::PlayerCapabilities::IPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player const&> mPlayer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isAbilityEnabled(::AbilitiesIndex ability) const /*override*/;

    // vIndex: 2
    virtual bool isTeacher() const /*override*/;

    // vIndex: 3
    virtual bool isOperator() const /*override*/;

    // vIndex: 0
    virtual ~PlayerData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerData(::Player const& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player const& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isAbilityEnabled(::AbilitiesIndex ability) const;

    MCAPI bool $isTeacher() const;

    MCAPI bool $isOperator() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerCapabilities

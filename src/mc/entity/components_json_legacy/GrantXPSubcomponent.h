#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class GrantXPSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4b87ef;
    ::ll::UntypedStorage<4, 4> mUnk9dbe79;
    // NOLINTEND

public:
    // prevent constructor by default
    GrantXPSubcomponent& operator=(GrantXPSubcomponent const&);
    GrantXPSubcomponent(GrantXPSubcomponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GrantXPSubcomponent() /*override*/ = default;

    // vIndex: 1
    virtual void readfromJSON(::Json::Value& component) /*override*/;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    // vIndex: 4
    virtual char const* getName() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GrantXPSubcomponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $writetoJSON(::Json::Value& component) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCAPI char const* $getName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

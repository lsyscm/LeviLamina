#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace BlockLightDampeningVersioning {

class BlockLightDampening11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockLightDampening11910Upgrade& operator=(BlockLightDampening11910Upgrade const&);
    BlockLightDampening11910Upgrade(BlockLightDampening11910Upgrade const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool previousSchema(::rapidjson::GenericValue<
                                ::rapidjson::UTF8<char>,
                                ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& component) const
        /*override*/;

    // vIndex: 2
    virtual void
    upgradeToNext(::rapidjson::GenericDocument<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>, ::rapidjson::CrtAllocator>& document, ::SemVersion const&)
        const /*override*/;

    // vIndex: 0
    virtual ~BlockLightDampening11910Upgrade() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockLightDampening11910Upgrade();
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
    MCAPI bool $previousSchema(::rapidjson::GenericValue<
                               ::rapidjson::UTF8<char>,
                               ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& component) const;

    MCAPI void
    $upgradeToNext(::rapidjson::GenericDocument<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>, ::rapidjson::CrtAllocator>& document, ::SemVersion const&)
        const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockLightDampeningVersioning

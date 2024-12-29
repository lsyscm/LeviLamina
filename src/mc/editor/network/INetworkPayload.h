#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

namespace Editor::Network {

class INetworkPayload {
public:
    // prevent constructor by default
    INetworkPayload& operator=(INetworkPayload const&);
    INetworkPayload(INetworkPayload const&);
    INetworkPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~INetworkPayload();

    // vIndex: 1
    virtual char const* getPayloadName() const = 0;

    // vIndex: 2
    virtual bool load(::CompoundTag const*) = 0;

    // vIndex: 3
    virtual ::CompoundTag save() const = 0;
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

} // namespace Editor::Network
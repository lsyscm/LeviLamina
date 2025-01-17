#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class ResourcePackClientResponsePacket;
// clang-format on

class GameSpecificNetEventCallback {
public:
    // prevent constructor by default
    GameSpecificNetEventCallback& operator=(GameSpecificNetEventCallback const&);
    GameSpecificNetEventCallback(GameSpecificNetEventCallback const&);
    GameSpecificNetEventCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameSpecificNetEventCallback() = default;

    // vIndex: 1
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ClientMessageEvent;
// clang-format on

class ClientNetworkEventListener {
public:
    // prevent constructor by default
    ClientNetworkEventListener& operator=(ClientNetworkEventListener const&);
    ClientNetworkEventListener(ClientNetworkEventListener const&);
    ClientNetworkEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientNetworkEventListener();

    // vIndex: 1
    virtual ::EventResult onMessage(::ClientMessageEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onMessage(::ClientMessageEvent const&);
    // NOLINTEND
};
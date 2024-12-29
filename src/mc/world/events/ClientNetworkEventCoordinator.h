#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkEventListener;
// clang-format on

class ClientNetworkEventCoordinator : public ::EventCoordinator<::ClientNetworkEventListener> {
public:
    // prevent constructor by default
    ClientNetworkEventCoordinator& operator=(ClientNetworkEventCoordinator const&);
    ClientNetworkEventCoordinator(ClientNetworkEventCoordinator const&);
    ClientNetworkEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientNetworkEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
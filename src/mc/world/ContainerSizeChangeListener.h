#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerSizeChangeListener {
public:
    // prevent constructor by default
    ContainerSizeChangeListener& operator=(ContainerSizeChangeListener const&);
    ContainerSizeChangeListener(ContainerSizeChangeListener const&);
    ContainerSizeChangeListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void containerSizeChanged(int) = 0;

    // vIndex: 1
    virtual ~ContainerSizeChangeListener();
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

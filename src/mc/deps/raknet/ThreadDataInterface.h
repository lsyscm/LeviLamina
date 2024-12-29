#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThreadDataInterface {
public:
    // prevent constructor by default
    ThreadDataInterface& operator=(ThreadDataInterface const&);
    ThreadDataInterface(ThreadDataInterface const&);
    ThreadDataInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThreadDataInterface();

    // vIndex: 1
    virtual void* PerThreadFactory(void*) = 0;

    // vIndex: 2
    virtual void PerThreadDestructor(void*, void*) = 0;
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
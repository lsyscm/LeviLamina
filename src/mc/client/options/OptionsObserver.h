#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
// clang-format on

class OptionsObserver : public ::Core::Observer<::OptionsObserver, ::Core::SingleThreadedLock> {
public:
    // prevent constructor by default
    OptionsObserver& operator=(OptionsObserver const&);
    OptionsObserver(OptionsObserver const&);
    OptionsObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void onForceCloudSave() = 0;

    // vIndex: 3
    virtual void onOptionsLoadBegin() = 0;

    // vIndex: 4
    virtual void onOptionsLoadComplete() = 0;

    // vIndex: 0
    virtual ~OptionsObserver() /*override*/;
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
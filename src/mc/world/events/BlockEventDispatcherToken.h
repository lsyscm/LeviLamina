#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BlockEventDispatcher;
// clang-format on

class BlockEventDispatcherToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                 mHandle;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::BlockEventDispatcher>> mDispatcher;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockEventDispatcherToken();

    MCAPI BlockEventDispatcherToken(::BlockEventDispatcherToken&& rhs);

    MCAPI ::BlockEventDispatcher* getDispatcher() const;

    MCAPI int getHandle() const;

    MCAPI bool isValid() const;

    MCAPI ::BlockEventDispatcherToken& operator=(::BlockEventDispatcherToken&& rhs);

    MCAPI void unregister();

    MCAPI ~BlockEventDispatcherToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockEventDispatcherToken&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

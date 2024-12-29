#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RegistryKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf04e63;
    ::ll::UntypedStorage<4, 4> mUnkab2c17;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistryKey& operator=(RegistryKey const&);
    RegistryKey(RegistryKey const&);
    RegistryKey();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool readValue(char const* key, ::std::string& result) const;

    MCAPI ~RegistryKey();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
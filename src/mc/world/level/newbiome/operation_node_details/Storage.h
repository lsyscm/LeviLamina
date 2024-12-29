#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class Storage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk176941;
    ::ll::UntypedStorage<8, 8> mUnkebe4ee;
    ::ll::UntypedStorage<8, 8> mUnk542eab;
    ::ll::UntypedStorage<8, 8> mUnk9c23b5;
    // NOLINTEND

public:
    // prevent constructor by default
    Storage& operator=(Storage const&);
    Storage(Storage const&);
    Storage();
};

} // namespace OperationNodeDetails
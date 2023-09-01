#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockID {
public:
    // prevent constructor by default
    BlockID& operator=(BlockID const&) = delete;
    BlockID(BlockID const&)            = delete;
    BlockID()                          = delete;
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class CpuRingBufferAllocation_Buffer {
public:
    // CpuRingBufferAllocation_Buffer inner types declare
    // clang-format off
    class Buffer;
    // clang-format on

    // CpuRingBufferAllocation_Buffer inner types define
    class Buffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkf7f083;
        // NOLINTEND

    public:
        // prevent constructor by default
        Buffer& operator=(Buffer const&);
        Buffer(Buffer const&);
        Buffer();
    };

public:
    // prevent constructor by default
    CpuRingBufferAllocation_Buffer& operator=(CpuRingBufferAllocation_Buffer const&);
    CpuRingBufferAllocation_Buffer(CpuRingBufferAllocation_Buffer const&);
    CpuRingBufferAllocation_Buffer();
};

} // namespace Core

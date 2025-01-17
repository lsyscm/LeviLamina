#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0, int T1, typename T2, int T3>
class MPSCQueue {
public:
    // prevent constructor by default
    MPSCQueue& operator=(MPSCQueue const&);
    MPSCQueue(MPSCQueue const&);
    MPSCQueue();
};

} // namespace Bedrock

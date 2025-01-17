#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"

namespace Bedrock::PubSub {

class DeferredSubscription : public ::Bedrock::PubSub::SubscriptionBase {
public:
    // prevent constructor by default
    DeferredSubscription& operator=(DeferredSubscription const&);
    DeferredSubscription(DeferredSubscription const&);
    DeferredSubscription();
};

} // namespace Bedrock::PubSub

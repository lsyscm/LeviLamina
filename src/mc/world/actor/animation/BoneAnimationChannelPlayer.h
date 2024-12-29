#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoneAnimationChannelPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk385f7e;
    ::ll::UntypedStorage<4, 4> mUnk49a5a0;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneAnimationChannelPlayer& operator=(BoneAnimationChannelPlayer const&);
    BoneAnimationChannelPlayer(BoneAnimationChannelPlayer const&);
    BoneAnimationChannelPlayer();
};
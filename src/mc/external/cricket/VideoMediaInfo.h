#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct VideoMediaReceiveInfo; }
namespace cricket { struct VideoMediaSendInfo; }
// clang-format on

namespace cricket {

struct VideoMediaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1b9300;
    ::ll::UntypedStorage<8, 24> mUnk3b139e;
    ::ll::UntypedStorage<8, 24> mUnkd62f73;
    ::ll::UntypedStorage<8, 16> mUnkd993e3;
    ::ll::UntypedStorage<8, 16> mUnkba6390;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoMediaInfo& operator=(VideoMediaInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VideoMediaInfo();

    MCAPI VideoMediaInfo(::cricket::VideoMediaInfo const&);

    MCAPI VideoMediaInfo(::cricket::VideoMediaSendInfo&&, ::cricket::VideoMediaReceiveInfo&&);

    MCAPI ~VideoMediaInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::VideoMediaInfo const&);

    MCAPI void* $ctor(::cricket::VideoMediaSendInfo&&, ::cricket::VideoMediaReceiveInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
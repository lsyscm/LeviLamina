#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class SetSessionDescriptionObserver : public ::webrtc::RefCountInterface {
public:
    // prevent constructor by default
    SetSessionDescriptionObserver& operator=(SetSessionDescriptionObserver const&);
    SetSessionDescriptionObserver(SetSessionDescriptionObserver const&);
    SetSessionDescriptionObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void OnSuccess() = 0;

    // vIndex: 4
    virtual void OnFailure(::webrtc::RTCError) = 0;

    // vIndex: 2
    virtual ~SetSessionDescriptionObserver() /*override*/;
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

} // namespace webrtc
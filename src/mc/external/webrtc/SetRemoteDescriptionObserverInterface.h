#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class SetRemoteDescriptionObserverInterface : public ::webrtc::RefCountInterface {
public:
    // prevent constructor by default
    SetRemoteDescriptionObserverInterface& operator=(SetRemoteDescriptionObserverInterface const&);
    SetRemoteDescriptionObserverInterface(SetRemoteDescriptionObserverInterface const&);
    SetRemoteDescriptionObserverInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void OnSetRemoteDescriptionComplete(::webrtc::RTCError) = 0;

    // vIndex: 2
    virtual ~SetRemoteDescriptionObserverInterface() /*override*/;
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
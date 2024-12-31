#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DataChannelObserver.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class NetworkSession; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace NetherNet {

class MyDataChannelObserver : public ::webrtc::DataChannelObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb27baf;
    ::ll::UntypedStorage<8, 8> mUnk88a891;
    // NOLINTEND

public:
    // prevent constructor by default
    MyDataChannelObserver& operator=(MyDataChannelObserver const&);
    MyDataChannelObserver(MyDataChannelObserver const&);
    MyDataChannelObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnStateChange() /*override*/;

    // vIndex: 1
    virtual void OnMessage(::webrtc::DataBuffer const& message) /*override*/;

    // vIndex: 4
    virtual ~MyDataChannelObserver() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MyDataChannelObserver(
        ::NetherNet::NetworkSession*                            pSession,
        ::webrtc::scoped_refptr<::webrtc::DataChannelInterface> pDataChannel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::NetherNet::NetworkSession* pSession, ::webrtc::scoped_refptr<::webrtc::DataChannelInterface> pDataChannel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnStateChange();

    MCAPI void $OnMessage(::webrtc::DataBuffer const& message);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class SocketFactory {
public:
    // prevent constructor by default
    SocketFactory& operator=(SocketFactory const&);
    SocketFactory(SocketFactory const&);
    SocketFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SocketFactory() = default;

    // vIndex: 1
    virtual ::rtc::Socket* CreateSocket(int, int) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc

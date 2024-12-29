#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/Socket.h"
#include "mc/external/sigslot/has_slots.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace sigslot { class single_threaded; }
// clang-format on

namespace rtc {

class AsyncSocketAdapter : public ::rtc::Socket, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk244603;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncSocketAdapter& operator=(AsyncSocketAdapter const&);
    AsyncSocketAdapter(AsyncSocketAdapter const&);
    AsyncSocketAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    // vIndex: 2
    virtual ::rtc::SocketAddress GetRemoteAddress() const /*override*/;

    // vIndex: 3
    virtual int Bind(::rtc::SocketAddress const&) /*override*/;

    // vIndex: 4
    virtual int Connect(::rtc::SocketAddress const&) /*override*/;

    // vIndex: 5
    virtual int Send(void const*, uint64) /*override*/;

    // vIndex: 6
    virtual int SendTo(void const*, uint64, ::rtc::SocketAddress const&) /*override*/;

    // vIndex: 7
    virtual int Recv(void*, uint64, int64*) /*override*/;

    // vIndex: 9
    virtual int RecvFrom(void* pv, uint64 cb, ::rtc::SocketAddress* paddr, int64* timestamp) /*override*/;

    // vIndex: 10
    virtual int Listen(int) /*override*/;

    // vIndex: 11
    virtual ::rtc::Socket* Accept(::rtc::SocketAddress*) /*override*/;

    // vIndex: 12
    virtual int Close() /*override*/;

    // vIndex: 13
    virtual int GetError() const /*override*/;

    // vIndex: 14
    virtual void SetError(int) /*override*/;

    // vIndex: 15
    virtual ::rtc::Socket::ConnState GetState() const /*override*/;

    // vIndex: 16
    virtual int GetOption(::rtc::Socket::Option, int*) /*override*/;

    // vIndex: 17
    virtual int SetOption(::rtc::Socket::Option, int) /*override*/;

    // vIndex: 18
    virtual void OnConnectEvent(::rtc::Socket*);

    // vIndex: 19
    virtual void OnReadEvent(::rtc::Socket*);

    // vIndex: 20
    virtual void OnWriteEvent(::rtc::Socket*);

    // vIndex: 21
    virtual void OnCloseEvent(::rtc::Socket*, int);

    // vIndex: 0
    virtual ~AsyncSocketAdapter() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncSocketAdapter(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::Socket*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::rtc::SocketAddress $GetLocalAddress() const;

    MCAPI ::rtc::SocketAddress $GetRemoteAddress() const;

    MCAPI int $Bind(::rtc::SocketAddress const&);

    MCAPI int $Connect(::rtc::SocketAddress const&);

    MCAPI int $Send(void const*, uint64);

    MCAPI int $SendTo(void const*, uint64, ::rtc::SocketAddress const&);

    MCAPI int $Recv(void*, uint64, int64*);

    MCAPI int $RecvFrom(void* pv, uint64 cb, ::rtc::SocketAddress* paddr, int64* timestamp);

    MCAPI int $Listen(int);

    MCAPI ::rtc::Socket* $Accept(::rtc::SocketAddress*);

    MCAPI int $Close();

    MCAPI int $GetError() const;

    MCAPI void $SetError(int);

    MCAPI ::rtc::Socket::ConnState $GetState() const;

    MCAPI int $GetOption(::rtc::Socket::Option, int*);

    MCAPI int $SetOption(::rtc::Socket::Option, int);

    MCAPI void $OnConnectEvent(::rtc::Socket*);

    MCAPI void $OnReadEvent(::rtc::Socket*);

    MCAPI void $OnWriteEvent(::rtc::Socket*);

    MCAPI void $OnCloseEvent(::rtc::Socket*, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForSocket();

    MCAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace rtc
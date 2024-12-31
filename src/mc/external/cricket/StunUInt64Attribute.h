#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttribute.h"
#include "mc/external/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace cricket {

class StunUInt64Attribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2fa924;
    // NOLINTEND

public:
    // prevent constructor by default
    StunUInt64Attribute& operator=(StunUInt64Attribute const&);
    StunUInt64Attribute(StunUInt64Attribute const&);
    StunUInt64Attribute();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    // vIndex: 3
    virtual bool Read(::rtc::ByteBufferReader*) /*override*/;

    // vIndex: 4
    virtual bool Write(::rtc::ByteBufferWriter*) const /*override*/;

    // vIndex: 0
    virtual ~StunUInt64Attribute() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StunUInt64Attribute(ushort);

    MCAPI StunUInt64Attribute(ushort, uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort);

    MCAPI void* $ctor(ushort, uint64);
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

} // namespace cricket

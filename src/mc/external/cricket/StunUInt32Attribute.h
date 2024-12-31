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

class StunUInt32Attribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6b7fe4;
    // NOLINTEND

public:
    // prevent constructor by default
    StunUInt32Attribute& operator=(StunUInt32Attribute const&);
    StunUInt32Attribute(StunUInt32Attribute const&);
    StunUInt32Attribute();

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
    virtual ~StunUInt32Attribute() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StunUInt32Attribute(ushort);

    MCAPI StunUInt32Attribute(ushort, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort);

    MCAPI void* $ctor(ushort, uint);
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

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

class StunUInt16ListAttribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk525de0;
    // NOLINTEND

public:
    // prevent constructor by default
    StunUInt16ListAttribute& operator=(StunUInt16ListAttribute const&);
    StunUInt16ListAttribute(StunUInt16ListAttribute const&);
    StunUInt16ListAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StunUInt16ListAttribute() /*override*/ = default;

    // vIndex: 1
    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    // vIndex: 3
    virtual bool Read(::rtc::ByteBufferReader*) /*override*/;

    // vIndex: 4
    virtual bool Write(::rtc::ByteBufferWriter*) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddType(ushort);

    MCAPI void AddTypeAtIndex(ushort, ushort);

    MCAPI ushort GetType(int) const;

    MCAPI uint64 Size() const;

    MCAPI StunUInt16ListAttribute(ushort, ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort, ushort);
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

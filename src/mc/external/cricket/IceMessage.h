#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttributeValueType.h"
#include "mc/external/cricket/StunMessage.h"

namespace cricket {

class IceMessage : public ::cricket::StunMessage {
public:
    // prevent constructor by default
    IceMessage& operator=(IceMessage const&);
    IceMessage(IceMessage const&);
    IceMessage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::cricket::StunAttributeValueType GetAttributeValueType(int) const /*override*/;

    // vIndex: 1
    virtual ::cricket::StunMessage* CreateNew() const /*override*/;

    // vIndex: 0
    virtual ~IceMessage() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cricket::StunAttributeValueType $GetAttributeValueType(int) const;

    MCAPI ::cricket::StunMessage* $CreateNew() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
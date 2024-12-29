#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct WriteClientCharacterEventRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf33190;
    ::ll::UntypedStorage<8, 32> mUnkb28f73;
    ::ll::UntypedStorage<8, 32> mUnke4b813;
    ::ll::UntypedStorage<8, 16> mUnk32ad3f;
    // NOLINTEND

public:
    // prevent constructor by default
    WriteClientCharacterEventRequest& operator=(WriteClientCharacterEventRequest const&);
    WriteClientCharacterEventRequest(WriteClientCharacterEventRequest const&);
    WriteClientCharacterEventRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WriteClientCharacterEventRequest() /*override*/;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $FromJson(::Json::Value&);

    MCAPI ::Json::Value $ToJson() const;
    // NOLINTEND
};

} // namespace PlayFab::ClientModels
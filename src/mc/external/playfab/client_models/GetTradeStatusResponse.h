#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetTradeStatusResponse : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264> mUnk627767;
    // NOLINTEND

public:
    // prevent constructor by default
    GetTradeStatusResponse& operator=(GetTradeStatusResponse const&);
    GetTradeStatusResponse(GetTradeStatusResponse const&);
    GetTradeStatusResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetTradeStatusResponse() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab::ClientModels

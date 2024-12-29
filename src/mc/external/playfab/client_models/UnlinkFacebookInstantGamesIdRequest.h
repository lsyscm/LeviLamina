#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UnlinkFacebookInstantGamesIdRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka990cf;
    // NOLINTEND

public:
    // prevent constructor by default
    UnlinkFacebookInstantGamesIdRequest& operator=(UnlinkFacebookInstantGamesIdRequest const&);
    UnlinkFacebookInstantGamesIdRequest(UnlinkFacebookInstantGamesIdRequest const&);
    UnlinkFacebookInstantGamesIdRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnlinkFacebookInstantGamesIdRequest() /*override*/;

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
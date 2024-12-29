#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/events/identity/EduSignInStage.h"

class IActiveDirectoryIdentityTelemetry {
public:
    // prevent constructor by default
    IActiveDirectoryIdentityTelemetry& operator=(IActiveDirectoryIdentityTelemetry const&);
    IActiveDirectoryIdentityTelemetry(IActiveDirectoryIdentityTelemetry const&);
    IActiveDirectoryIdentityTelemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IActiveDirectoryIdentityTelemetry();

    // vIndex: 1
    virtual void
    fireEventSignInEdu(::std::string const&, ::edu::Role, ::Identity::EduSignInStage, ::std::string const&, ::std::string const&, ::std::vector<::std::pair<::std::string, ::std::string>> const&) = 0;

    // vIndex: 2
    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource) = 0;

    // vIndex: 3
    virtual ::std::string getAppSessionId() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
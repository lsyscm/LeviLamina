#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/flighting/FlightingToggles.h"

class ProgressionFlightingToggles : public ::FlightingToggles {
public:
    // prevent constructor by default
    ProgressionFlightingToggles& operator=(ProgressionFlightingToggles const&);
    ProgressionFlightingToggles(ProgressionFlightingToggles const&);
    ProgressionFlightingToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProgressionFlightingToggles() /*override*/ = default;

    // vIndex: 5
    virtual void _updateToggle(::std::vector<::std::string> const&, ::FlightingToggles::FlightingToggle&) /*override*/;
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

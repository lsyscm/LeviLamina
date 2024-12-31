#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class UIPackError : public ::PackError {
public:
    // prevent constructor by default
    UIPackError& operator=(UIPackError const&);
    UIPackError(UIPackError const&);
    UIPackError();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const /*override*/;

    // vIndex: 3
    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const /*override*/;

    // vIndex: 0
    virtual ~UIPackError() /*override*/ = default;
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

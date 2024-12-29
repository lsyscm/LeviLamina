#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/SimpleFloatFilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterContext;
// clang-format on

class OwnerDistanceTest : public ::SimpleFloatFilterTest {
public:
    // prevent constructor by default
    OwnerDistanceTest& operator=(OwnerDistanceTest const&);
    OwnerDistanceTest(OwnerDistanceTest const&);
    OwnerDistanceTest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool evaluate(::FilterContext const& context) const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getName() const /*override*/;

    // vIndex: 0
    virtual ~OwnerDistanceTest() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $evaluate(::FilterContext const& context) const;

    MCAPI ::std::string_view $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
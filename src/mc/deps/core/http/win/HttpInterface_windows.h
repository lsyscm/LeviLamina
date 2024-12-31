#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HttpInterfaceInternal.h"

namespace Bedrock::Http {

class HttpInterface_windows : public ::Bedrock::Http::HttpInterfaceInternal {
public:
    // prevent constructor by default
    HttpInterface_windows& operator=(HttpInterface_windows const&);
    HttpInterface_windows(HttpInterface_windows const&);
    HttpInterface_windows();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HttpInterface_windows() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct LibraryScreenCapabilities {
public:
    // prevent constructor by default
    LibraryScreenCapabilities& operator=(LibraryScreenCapabilities const&) = delete;
    LibraryScreenCapabilities(LibraryScreenCapabilities const&)            = delete;
    LibraryScreenCapabilities()                                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@ULibraryScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;

    // symbol: ??1LibraryScreenCapabilities@@UEAA@XZ
    MCVAPI ~LibraryScreenCapabilities();

    // NOLINTEND
};

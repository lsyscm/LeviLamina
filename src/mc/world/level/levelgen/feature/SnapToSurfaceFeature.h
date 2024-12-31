#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
// clang-format on

class SnapToSurfaceFeature : public ::IFeature {
public:
    // SnapToSurfaceFeature inner types define
    enum class Surface : int {
        Ceiling          = 0,
        Floor            = 1,
        RandomHorizontal = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcc3148;
    ::ll::UntypedStorage<4, 4>  mUnkd9cc9e;
    ::ll::UntypedStorage<4, 4>  mUnk32934f;
    ::ll::UntypedStorage<8, 24> mUnkee9932;
    ::ll::UntypedStorage<1, 1>  mUnk9d4a1e;
    ::ll::UntypedStorage<1, 1>  mUnk936b03;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapToSurfaceFeature& operator=(SnapToSurfaceFeature const&);
    SnapToSurfaceFeature(SnapToSurfaceFeature const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SnapToSurfaceFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SnapToSurfaceFeature();

    MCAPI ::std::optional<::BlockPos>
    _findSnapPos(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::SnapToSurfaceFeature::Surface targetSurface)
        const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeRoot.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeRoots : public ::ITreeRoot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk42c689;
    ::ll::UntypedStorage<4, 4>   mUnk4506dd;
    ::ll::UntypedStorage<4, 8>   mUnk2f87a5;
    ::ll::UntypedStorage<4, 12>  mUnk41e266;
    ::ll::UntypedStorage<8, 184> mUnk6e7026;
    ::ll::UntypedStorage<8, 184> mUnkab092a;
    ::ll::UntypedStorage<8, 184> mUnk655a60;
    ::ll::UntypedStorage<8, 184> mUnkd936ed;
    ::ll::UntypedStorage<8, 24>  mUnk510b1f;
    ::ll::UntypedStorage<8, 208> mUnkc555ee;
    // NOLINTEND

public:
    // prevent constructor by default
    MangroveTreeRoots& operator=(MangroveTreeRoots const&);
    MangroveTreeRoots(MangroveTreeRoots const&);
    MangroveTreeRoots();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveTreeRoots() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> placeRoots(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Random&            random,
        int                  trunkHeight,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeRoot(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::std::vector<::BlockPos>
    _potentialRootPositions(::BlockPos const& pos, uchar prevDir, ::Random& random, ::BlockPos const& origin) const;

    MCAPI bool _simulateRoots(
        ::IBlockWorldGenAPI&            target,
        ::Random&                       random,
        ::BlockPos const&               rootPos,
        ::BlockPos const&               newOrigin,
        uchar                           dir,
        ::std::vector<::BlockPos>*      rootPositions,
        int                             layer,
        ::TreeHelper::TreeParams const& treeParams
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& RANDOM_SKEW_CHANCE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $placeRoots(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Random&            random,
        int                  trunkHeight,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

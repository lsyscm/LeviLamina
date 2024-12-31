#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class AcaciaTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk4d62b1;
    ::ll::UntypedStorage<4, 4>   mUnka05513;
    ::ll::UntypedStorage<4, 4>   mUnk6f1803;
    ::ll::UntypedStorage<4, 8>   mUnk9420a3;
    ::ll::UntypedStorage<4, 8>   mUnk3cfdf0;
    ::ll::UntypedStorage<4, 8>   mUnkb664e7;
    ::ll::UntypedStorage<1, 1>   mUnk49554a;
    ::ll::UntypedStorage<4, 8>   mUnk86d32d;
    ::ll::UntypedStorage<4, 8>   mUnk41073d;
    ::ll::UntypedStorage<4, 12>  mUnk56e93f;
    ::ll::UntypedStorage<8, 184> mUnk5e1bc2;
    ::ll::UntypedStorage<8, 8>   mUnkf85fc0;
    ::ll::UntypedStorage<8, 208> mUnka16826;
    ::ll::UntypedStorage<8, 24>  mUnka54eb5;
    // NOLINTEND

public:
    // prevent constructor by default
    AcaciaTreeTrunk& operator=(AcaciaTreeTrunk const&);
    AcaciaTreeTrunk(AcaciaTreeTrunk const&);
    AcaciaTreeTrunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AcaciaTreeTrunk() /*override*/ = default;

    // vIndex: 2
    virtual int getTreeHeight(::Random& random) const /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeLeaningBranches(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::BlockPos const&               branchPos,
        ::Random&                       random,
        ::RenderParams&                 renderParams,
        int                             treeHeight,
        int                             leanDirection,
        int                             leanHeight,
        ::TreeHelper::TreeParams const& treeParams
    ) const;

    MCAPI void _placeVerticalBranches(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::BlockPos const&               branchPos,
        ::Random&                       random,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getTreeHeight(::Random& random) const;

    MCAPI ::std::optional<::BlockPos> $placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

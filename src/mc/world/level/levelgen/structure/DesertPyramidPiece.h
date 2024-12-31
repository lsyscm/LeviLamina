#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
// clang-format on

class DesertPyramidPiece : public ::ScatteredFeaturePiece {
public:
    // prevent constructor by default
    DesertPyramidPiece& operator=(DesertPyramidPiece const&);
    DesertPyramidPiece(DesertPyramidPiece const&);
    DesertPyramidPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 2
    virtual ::StructurePieceType getType() const /*override*/;

    // vIndex: 0
    virtual ~DesertPyramidPiece() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DesertPyramidPiece(short seaLevel, int west, int north);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(short seaLevel, int west, int north);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI ::StructurePieceType $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

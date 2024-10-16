#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/LeavesBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CherryLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    CherryLeavesBlock& operator=(CherryLeavesBlock const&);
    CherryLeavesBlock(CherryLeavesBlock const&);
    CherryLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CherryLeavesBlock() = default;

    // vIndex: 122
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 125
    virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 126
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 135
    virtual void animateTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 156
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI CherryLeavesBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void animateTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI int getColor$(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI class mce::Color
    getMapColor$(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI ::BlockRenderLayer
    getRenderLayer$(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    MCAPI int getVariant$(class Block const&) const;

    MCAPI bool isSeasonTinted$(class Block const&, class BlockSource&, class BlockPos const&) const;

    MCAPI void onGraphicsModeChanged$(struct BlockGraphicsModeChangeContext const& context);

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Container;
class Experiments;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class Random;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class ComposterBlock : public ::BlockLegacy {
public:
    // ComposterBlock inner types define
    enum class FillLevel : int {
        Min   = 0,
        Max   = 7,
        Ready = 8,
        Count = 9,
    };

public:
    // prevent constructor by default
    ComposterBlock& operator=(ComposterBlock const&);
    ComposterBlock(ComposterBlock const&);
    ComposterBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar) const /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 62
    virtual void onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const /*override*/;

    // vIndex: 105
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 106
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 4
    virtual ::HitResult
    clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 7
    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    // vIndex: 8
    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const /*override*/;

    // vIndex: 23
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~ComposterBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComposterBlock(::std::string const& nameId, int id);

    MCAPI void _emitBoneMeal(::Level&, ::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void _notifyClientComposterUsed(
        ::Player const&                              player,
        short                                        itemId,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    ) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<uint64, schar> const& _getCompostableItems();

    MCAPI static bool addItem(
        ::Container&      fromContainer,
        int               slot,
        ::ItemStack&      item,
        ::BlockSource&    region,
        ::Block const&    block,
        ::BlockPos const& pos
    );

    MCAPI static bool addItems(
        ::Container&      fromContainer,
        int               slot,
        ::ItemStack&      item,
        int               amount,
        ::BlockSource&    region,
        ::Block const&    block,
        ::BlockPos const& pos
    );

    MCAPI static int
    addItems(::ItemStack const& item, int amount, ::BlockSource& region, ::Block const& block, ::BlockPos const& pos);

    MCAPI static void empty(::BlockSource& region, ::Block const& composter, ::BlockPos const& pos);

    MCAPI static ::ItemStack extractItem(::BlockSource& region, ::Block const& composter, ::BlockPos const& pos);

    MCAPI static ::Block const* getComposterAt(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static schar getFillChance(::ItemStackBase const& item);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    MCAPI static ::Vec3 const& PARTICLE_OFFSET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;

    MCAPI bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

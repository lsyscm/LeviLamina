#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Randomize;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateStateMatch : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk610de9;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateStateMatch& operator=(StructurePoolBlockPredicateStateMatch const&);
    StructurePoolBlockPredicateStateMatch(StructurePoolBlockPredicateStateMatch const&);
    StructurePoolBlockPredicateStateMatch();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool test(::Block const&, ::Randomize&) const /*override*/;

    // vIndex: 1
    virtual bool test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const /*override*/;

    // vIndex: 5
    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    // vIndex: 6
    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;

    // vIndex: 0
    virtual ~StructurePoolBlockPredicateStateMatch() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::Block const&, ::Randomize&) const;

    MCAPI bool $test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const;

    MCAPI ::StructurePoolBlockPredicateType $getType() const;

    MCAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND
};
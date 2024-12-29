#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

class IStructureTemplate {
public:
    // prevent constructor by default
    IStructureTemplate& operator=(IStructureTemplate const&);
    IStructureTemplate(IStructureTemplate const&);
    IStructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IStructureTemplate();

    // vIndex: 1
    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos) const = 0;

    // vIndex: 2
    virtual ::BlockPos rawSize() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
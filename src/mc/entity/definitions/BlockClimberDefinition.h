#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BlockClimberDefinition {
public:
    // prevent constructor by default
    BlockClimberDefinition& operator=(BlockClimberDefinition const&);
    BlockClimberDefinition(BlockClimberDefinition const&);
    BlockClimberDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockClimberDefinition>>& root
    );
    // NOLINTEND
};

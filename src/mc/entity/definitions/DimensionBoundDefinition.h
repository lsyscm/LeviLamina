#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct DimensionBoundDefinition {
public:
    // prevent constructor by default
    DimensionBoundDefinition& operator=(DimensionBoundDefinition const&);
    DimensionBoundDefinition(DimensionBoundDefinition const&);
    DimensionBoundDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DimensionBoundDefinition>>& root
    );
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VibrationListenerDefinition {
public:
    // prevent constructor by default
    VibrationListenerDefinition& operator=(VibrationListenerDefinition const&);
    VibrationListenerDefinition(VibrationListenerDefinition const&);
    VibrationListenerDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::VibrationListenerDefinition>>& root
    );
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsHiddenWhenInvisibleDefinition {
public:
    // prevent constructor by default
    IsHiddenWhenInvisibleDefinition& operator=(IsHiddenWhenInvisibleDefinition const&);
    IsHiddenWhenInvisibleDefinition(IsHiddenWhenInvisibleDefinition const&);
    IsHiddenWhenInvisibleDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity) const;

    MCAPI void uninitialize(::EntityContext& entity) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::IsHiddenWhenInvisibleDefinition>>&
            root
    );
    // NOLINTEND
};

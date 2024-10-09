#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EquipmentTableDefinition {
public:
    // prevent constructor by default
    EquipmentTableDefinition& operator=(EquipmentTableDefinition const&);
    EquipmentTableDefinition(EquipmentTableDefinition const&);
    EquipmentTableDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EquipmentTableDefinition>> const&
            root
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setLootTable(std::string const& lootTable);

    // NOLINTEND
};

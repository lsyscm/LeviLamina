#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptModuleShutdownBeforeEvent {
public:
    // prevent constructor by default
    ScriptModuleShutdownBeforeEvent& operator=(ScriptModuleShutdownBeforeEvent const&);
    ScriptModuleShutdownBeforeEvent(ScriptModuleShutdownBeforeEvent const&);
    ScriptModuleShutdownBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptModuleShutdownBeforeEvent>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

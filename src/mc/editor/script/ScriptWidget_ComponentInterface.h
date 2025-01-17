#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidget_ComponentInterface {
public:
    // prevent constructor by default
    ScriptWidget_ComponentInterface& operator=(ScriptWidget_ComponentInterface const&);
    ScriptWidget_ComponentInterface(ScriptWidget_ComponentInterface const&);
    ScriptWidget_ComponentInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Scripting::WeakLifetimeScope& _getScope() = 0;

    // vIndex: 1
    virtual void _deleteComponent(::mce::UUID const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule

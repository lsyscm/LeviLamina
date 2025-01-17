#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct SeatDescription;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSeat {
public:
    // prevent constructor by default
    ScriptSeat& operator=(ScriptSeat const&);
    ScriptSeat(ScriptSeat const&);
    ScriptSeat();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::SeatDescription> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

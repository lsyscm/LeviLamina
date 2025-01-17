#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptInvalidIteratorError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptInvalidIteratorError& operator=(ScriptInvalidIteratorError const&);
    ScriptInvalidIteratorError(ScriptInvalidIteratorError const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptInvalidIteratorError();

    MCAPI ~ScriptInvalidIteratorError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptInvalidIteratorError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

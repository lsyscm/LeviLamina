#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptTransferCollectionNameData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka5ad29;
    ::ll::UntypedStorage<8, 32> mUnk2037f3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferCollectionNameData(ScriptTransferCollectionNameData const&);
    ScriptTransferCollectionNameData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::ScriptModule::ScriptTransferCollectionNameData&
    operator=(::Editor::ScriptModule::ScriptTransferCollectionNameData&&);

    MCAPI ::Editor::ScriptModule::ScriptTransferCollectionNameData&
    operator=(::Editor::ScriptModule::ScriptTransferCollectionNameData const&);

    MCAPI ~ScriptTransferCollectionNameData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptTransferCollectionNameData>
    bindInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
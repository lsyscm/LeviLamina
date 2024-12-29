#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/editor/services/widgets/WidgetComponentType.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentClipboardOptions; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentClipboard : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7b4fbf;
    ::ll::UntypedStorage<1, 1>  mUnk81f975;
    ::ll::UntypedStorage<1, 1>  mUnkd4706b;
    ::ll::UntypedStorage<4, 12> mUnk62bf0a;
    ::ll::UntypedStorage<4, 12> mUnk865513;
    ::ll::UntypedStorage<1, 1>  mUnk7203d5;
    ::ll::UntypedStorage<4, 24> mUnka9f0b6;
    ::ll::UntypedStorage<4, 24> mUnke8c048;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentClipboard& operator=(ScriptWidgetComponentClipboard const&);
    ScriptWidgetComponentClipboard();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ScriptWidgetComponentClipboard() /*override*/;

    // vIndex: 2
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentClipboard(::Editor::ScriptModule::ScriptWidgetComponentClipboard const&);

    MCAPI ScriptWidgetComponentClipboard(
        ::Editor::ServiceProviderCollection&                                     serviceProviders,
        ::mce::UUID const&                                                       componentId,
        ::std::string const&                                                     componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner,
        ::Editor::ScriptModule::ScriptWidgetService&                             parentService,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>> const&
                                                                                       optionalClipboardItem,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions> options
    );

    MCAPI void _setClipboardMirror(::Mirror m);

    MCAPI void _setClipboardOffset(::Vec3 const& offset);

    MCAPI void _setClipboardOrigin(::Vec3 const& pivot);

    MCAPI void _setClipboardRotation(::Rotation r);

    MCAPI void _setOuterBoundsFillColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCAPI void _setOuterBoundsVisible(bool visible);

    MCAPI void _setOuterBoundsWireframeColor(::ScriptModuleMinecraft::ScriptRGBA const& color);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentClipboard> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentClipboard const&);

    MCAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                     serviceProviders,
        ::mce::UUID const&                                                       componentId,
        ::std::string const&                                                     componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner,
        ::Editor::ScriptModule::ScriptWidgetService&                             parentService,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>> const&
                                                                                       optionalClipboardItem,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions> options
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Editor::Widgets::WidgetComponentType const $getComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
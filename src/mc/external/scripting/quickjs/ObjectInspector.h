#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/script_engine/IObjectInspector.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting::QuickJS {

class ObjectInspector : public ::Scripting::IObjectInspector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfcc24f;
    ::ll::UntypedStorage<8, 8>  mUnk78ab83;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectInspector& operator=(ObjectInspector const&);
    ObjectInspector(ObjectInspector const&);
    ObjectInspector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ObjectInspector() /*override*/ = default;

    // vIndex: 1
    virtual bool isSameObject(::Scripting::ObjectHandle handleA, ::Scripting::ObjectHandle handleB) const /*override*/;

    // vIndex: 2
    virtual bool hasBooleanPropertyValue(::Scripting::ObjectHandle handle, char const* name, bool expectedValue) const
        /*override*/;

    // vIndex: 3
    virtual ::std::optional<::Scripting::ResultAny>
    getPropertyValue(::Scripting::ObjectHandle handle, char const* name, ::entt::meta_type expectedType) const
        /*override*/;

    // vIndex: 4
    virtual uint getDataBufferLength(::Scripting::ObjectHandle handle) const /*override*/;

    // vIndex: 5
    virtual uint getDataBufferByteLength(::Scripting::ObjectHandle handle) const /*override*/;

    // vIndex: 6
    virtual uchar* getDataBufferBytes(::Scripting::ObjectHandle handle) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint _getPropertyAsSize(::Scripting::ObjectHandle handle, char const* propertyName) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isSameObject(::Scripting::ObjectHandle handleA, ::Scripting::ObjectHandle handleB) const;

    MCAPI bool $hasBooleanPropertyValue(::Scripting::ObjectHandle handle, char const* name, bool expectedValue) const;

    MCAPI ::std::optional<::Scripting::ResultAny>
    $getPropertyValue(::Scripting::ObjectHandle handle, char const* name, ::entt::meta_type expectedType) const;

    MCAPI uint $getDataBufferLength(::Scripting::ObjectHandle handle) const;

    MCAPI uint $getDataBufferByteLength(::Scripting::ObjectHandle handle) const;

    MCAPI uchar* $getDataBufferBytes(::Scripting::ObjectHandle handle) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS

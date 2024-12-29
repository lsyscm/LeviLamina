#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct ExpressionNode {
public:
    // ExpressionNode inner types declare
    // clang-format off
    struct StringRepresentation;
    // clang-format on

    // ExpressionNode inner types define
    struct StringRepresentation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkbe3c14;
        ::ll::UntypedStorage<2, 2>  mUnk31d04e;
        // NOLINTEND

    public:
        // prevent constructor by default
        StringRepresentation(StringRepresentation const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI StringRepresentation();

        MCAPI ::SharedTypes::Legacy::ExpressionNode::StringRepresentation&
        operator=(::SharedTypes::Legacy::ExpressionNode::StringRepresentation&&);

        MCAPI ::SharedTypes::Legacy::ExpressionNode::StringRepresentation&
        operator=(::SharedTypes::Legacy::ExpressionNode::StringRepresentation const&);

        MCAPI ~StringRepresentation();
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk59a1d0;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionNode& operator=(ExpressionNode const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpressionNode();

    MCAPI ExpressionNode(::SharedTypes::Legacy::ExpressionNode const&);

    MCAPI ExpressionNode(::SharedTypes::Legacy::ExpressionNode&&);

    MCAPI explicit ExpressionNode(float f);

    MCAPI ExpressionNode(::std::string string, short molangVersion);

    MCAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::Legacy::ExpressionNode const&);

    MCAPI void* $ctor(::SharedTypes::Legacy::ExpressionNode&&);

    MCAPI void* $ctor(float f);

    MCAPI void* $ctor(::std::string string, short molangVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
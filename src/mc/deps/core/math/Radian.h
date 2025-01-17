#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Degree; }
// clang-format on

namespace mce {

struct Radian : public ::type_safe::strong_typedef<::mce::Radian, float>,
                public ::type_safe::strong_typedef_op::equality_comparison<::mce::Radian>,
                public ::type_safe::strong_typedef_op::relational_comparison<::mce::Radian>,
                public ::type_safe::strong_typedef_op::floating_point_arithmetic<::mce::Radian>,
                public ::type_safe::strong_typedef_op::input_operator<::mce::Radian>,
                public ::type_safe::strong_typedef_op::output_operator<::mce::Radian> {
public:
    // prevent constructor by default
    Radian& operator=(Radian const&);
    Radian(Radian const&);
    Radian();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Radian(::mce::Degree deg);

    MCAPI float const& asFloat() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::Degree deg);
    // NOLINTEND
};

} // namespace mce

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct CameraInstruction {
public:
    // CameraInstruction inner types declare
    // clang-format off
    struct FadeInstruction;
    struct SetInstruction;
    struct TargetInstruction;
    // clang-format on

    // CameraInstruction inner types define
    struct SetInstruction {
    public:
        // SetInstruction inner types declare
        // clang-format off
        struct EaseOption;
        struct EntityOffsetOption;
        struct FacingOption;
        struct PosOption;
        struct RotOption;
        struct ViewOffsetOption;
        // clang-format on

        // SetInstruction inner types define
        struct EaseOption {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, ::EasingType> mEasingType;
            ::ll::TypedStorage<4, 4, float>        mEasingTime;
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

            MCAPI static ::Bedrock::Result<::CameraInstruction::SetInstruction::EaseOption>
            read(::ReadOnlyBinaryStream& stream);
            // NOLINTEND
        };

        struct PosOption {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 12, ::Vec3> mPos;
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

            MCAPI static ::Bedrock::Result<::CameraInstruction::SetInstruction::PosOption>
            read(::ReadOnlyBinaryStream& stream);
            // NOLINTEND
        };

        struct RotOption {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, float> mRotX;
            ::ll::TypedStorage<4, 4, float> mRotY;
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

            MCAPI static ::Bedrock::Result<::CameraInstruction::SetInstruction::RotOption>
            read(::ReadOnlyBinaryStream& stream);
            // NOLINTEND
        };

        struct ViewOffsetOption {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4> mUnkdb9bc9;
            ::ll::UntypedStorage<4, 4> mUnk77063f;
            // NOLINTEND

        public:
            // prevent constructor by default
            ViewOffsetOption& operator=(ViewOffsetOption const&);
            ViewOffsetOption(ViewOffsetOption const&);
            ViewOffsetOption();

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

            MCAPI static ::Bedrock::Result<::CameraInstruction::SetInstruction::ViewOffsetOption>
            read(::ReadOnlyBinaryStream& stream);
            // NOLINTEND
        };

        struct EntityOffsetOption {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4> mUnk1c17b8;
            ::ll::UntypedStorage<4, 4> mUnkdce2a5;
            ::ll::UntypedStorage<4, 4> mUnk8dd762;
            // NOLINTEND

        public:
            // prevent constructor by default
            EntityOffsetOption& operator=(EntityOffsetOption const&);
            EntityOffsetOption(EntityOffsetOption const&);
            EntityOffsetOption();

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

            MCAPI static ::Bedrock::Result<::CameraInstruction::SetInstruction::EntityOffsetOption>
            read(::ReadOnlyBinaryStream& stream);
            // NOLINTEND
        };

        struct FacingOption {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 12, ::Vec3> mFacingPos;
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

            MCAPI static ::Bedrock::Result<::CameraInstruction::SetInstruction::FacingOption>
            read(::ReadOnlyBinaryStream& stream);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                                                    mPresetIndex;
        ::ll::TypedStorage<4, 12, ::std::optional<::CameraInstruction::SetInstruction::EaseOption>>       mEase;
        ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstruction::SetInstruction::PosOption>>        mPos;
        ::ll::TypedStorage<4, 12, ::std::optional<::CameraInstruction::SetInstruction::RotOption>>        mRot;
        ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstruction::SetInstruction::FacingOption>>     mFacing;
        ::ll::TypedStorage<4, 12, ::std::optional<::CameraInstruction::SetInstruction::ViewOffsetOption>> mViewOffset;
        ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstruction::SetInstruction::EntityOffsetOption>>
                                                        mEntityOffset;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>> mDefault;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::CameraInstruction::SetInstruction const& other) const;

        MCAPI void write(::BinaryStream& stream) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

        MCAPI static ::Bedrock::Result<::CameraInstruction::SetInstruction> read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct FadeInstruction {
    public:
        // FadeInstruction inner types declare
        // clang-format off
        struct ColorOption;
        struct TimeOption;
        // clang-format on

        // FadeInstruction inner types define
        struct TimeOption {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, float> mFadeInTime;
            ::ll::TypedStorage<4, 4, float> mHoldTime;
            ::ll::TypedStorage<4, 4, float> mFadeOutTime;
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

            MCAPI static ::Bedrock::Result<::CameraInstruction::FadeInstruction::TimeOption>
            read(::ReadOnlyBinaryStream& stream);
            // NOLINTEND
        };

        struct ColorOption {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, float> mRed;
            ::ll::TypedStorage<4, 4, float> mGreen;
            ::ll::TypedStorage<4, 4, float> mBlue;
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

            MCAPI static ::Bedrock::Result<::CameraInstruction::FadeInstruction::ColorOption>
            read(::ReadOnlyBinaryStream& stream);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstruction::FadeInstruction::TimeOption>>  mTime;
        ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstruction::FadeInstruction::ColorOption>> mColor;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::CameraInstruction::FadeInstruction const& other) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

        MCAPI static ::Bedrock::Result<::CameraInstruction::FadeInstruction> read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct TargetInstruction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnkeab5b0;
        ::ll::UntypedStorage<8, 8>  mUnk9536e6;
        // NOLINTEND

    public:
        // prevent constructor by default
        TargetInstruction& operator=(TargetInstruction const&);
        TargetInstruction(TargetInstruction const&);
        TargetInstruction();

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

        MCAPI static ::Bedrock::Result<::CameraInstruction::TargetInstruction> read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 96, ::std::optional<::CameraInstruction::SetInstruction>>    mSet;
    ::ll::TypedStorage<8, 32, ::std::optional<::CameraInstruction::TargetInstruction>> mTarget;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                    mRemoveTarget;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                    mClear;
    ::ll::TypedStorage<4, 36, ::std::optional<::CameraInstruction::FadeInstruction>>   mFade;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::CameraInstruction const& other) const;

    MCAPI void write(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::CameraInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};

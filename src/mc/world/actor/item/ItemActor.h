#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorDamageSource;
class ActorDefinitionGroup;
class AddActorBasePacket;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ItemStack;
class ListTag;
class Player;
struct AABBShapeComponent;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class ItemActor : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    ::ll::TypedStorage<4, 4, int>           mAge;
    ::ll::TypedStorage<4, 4, int>           mPickupDelay;
    ::ll::TypedStorage<4, 4, int>           mThrowTime;
    ::ll::TypedStorage<4, 4, float>         mBobOffs;
    ::ll::TypedStorage<4, 4, int>           mHealth;
    ::ll::TypedStorage<4, 4, int>           mLifeTime;
    ::ll::TypedStorage<1, 1, bool>          mIsInItemFrame;
    ::ll::TypedStorage<1, 1, bool>          mIsFromFishing;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemActor& operator=(ItemActor const&);
    ItemActor(ItemActor const&);
    ItemActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    // vIndex: 8
    virtual ~ItemActor() /*override*/ = default;

    // vIndex: 40
    virtual void playerTouch(::Player& player) /*override*/;

    // vIndex: 23
    virtual ::std::unique_ptr<::AddActorBasePacket> tryCreateAddActorPacket() /*override*/;

    // vIndex: 86
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    // vIndex: 66
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 101
    virtual bool canSynchronizeNewEntity() const /*override*/;

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 18
    virtual bool isFireImmune() const /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const&, float damage, bool, bool) /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _addComponents();

    MCAPI void _dropItemList(::ListTag* itemList);

    MCAPI bool _merge(::ItemActor* target);

    MCAPI void _validateItem();

    MCAPI void postNormalTick();

    MCAPI void setSourceEntity(::Actor const* owner);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AABB getLiquidAABB(::AABBShapeComponent const& aabbShapeComponent);

    MCAPI static ::ItemActor* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& LIFETIME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $playerTouch(::Player& player);

    MCAPI ::std::unique_ptr<::AddActorBasePacket> $tryCreateAddActorPacket();

    MCAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI bool $canSynchronizeNewEntity() const;

    MCAPI bool $isFireImmune() const;

    MCAPI bool $_hurt(::ActorDamageSource const&, float damage, bool, bool);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

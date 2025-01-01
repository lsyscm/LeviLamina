#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStack;
class NetworkItemStackDescriptor;
class Player;
class ReadOnlyBinaryStream;
class Vec3;
// clang-format on

class ItemReleaseInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemReleaseInventoryTransaction inner types define
    enum class ActionType : int {
        Release = 0,
        Use     = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemReleaseInventoryTransaction::ActionType> mActionType;
    ::ll::TypedStorage<4, 4, int>                                           mSlot;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                 mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mFromPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemReleaseInventoryTransaction() /*override*/ = default;

    // vIndex: 1
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 2
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 3
    virtual void postLoadItems(::BlockPalette& blockPalette, bool isClientSide) /*override*/;

    // vIndex: 5
    virtual void onTransactionError(::Player& player, ::InventoryTransactionError error) const /*override*/;

    // vIndex: 4
    virtual ::InventoryTransactionError handle(::Player& player, bool isSenderAuthority) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ItemReleaseInventoryTransaction& setSelectedItem(::ItemStack const& item);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& stream);

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI void $postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCAPI void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;

    MCAPI ::InventoryTransactionError $handle(::Player& player, bool isSenderAuthority) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

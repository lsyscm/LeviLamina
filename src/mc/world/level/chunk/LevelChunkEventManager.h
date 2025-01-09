#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/chunk/ILevelChunkEventManagerConnector.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ILevelChunkEventManagerProxy;
class LevelChunk;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class LevelChunkEventManager : public ::ILevelChunkEventManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::ChunkSource&, ::LevelChunk&, int), ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mOnChunkLoadedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::ChunkSource&, ::LevelChunk&), ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mOnChunkReloadedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelChunk&), ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mOnChunkDiscardedPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelChunkEventManagerProxy>> const>
        mLevelChunkEventManagerProxy;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkEventManager() /*override*/ = default;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>&
    getOnChunkLoadedConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>&
    getOnChunkReloadedConnector() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& getOnChunkDiscardedConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LevelChunkEventManager(::std::unique_ptr<::ILevelChunkEventManagerProxy> levelChunkEventManagerProxy
    );

    MCAPI void onChunkDiscarded(::LevelChunk& levelChunk);

    MCAPI void onChunkLoaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);

    MCAPI void onChunkReloaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::ILevelChunkEventManagerProxy> levelChunkEventManagerProxy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>& $getOnChunkLoadedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>& $getOnChunkReloadedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& $getOnChunkDiscardedConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

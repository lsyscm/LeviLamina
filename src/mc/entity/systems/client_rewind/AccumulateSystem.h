#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ActorMovementTickNeededComponent;
struct ReplayStateTrackerComponent;
// clang-format on

namespace ClientRewind {

struct AccumulateSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                              ::Filter<::ActorMovementTickNeededComponent>,
                              ::Read<
                                  ::ActorDataFlagComponent,
                                  ::ActorDataHorseFlagComponent,
                                  ::ActorDataJumpDurationComponent,
                                  ::ActorDataBoundingBoxComponent,
                                  ::ActorDataSeatOffsetComponent>,
                              ::Write<::ReplayStateTrackerComponent>,
                              ::AddRemove<>,
                              ::GlobalRead<>,
                              ::GlobalWrite<>,
                              ::EntityFactoryT<>>> {
public:
    // prevent constructor by default
    AccumulateSystem& operator=(AccumulateSystem const&);
    AccumulateSystem(AccumulateSystem const&);
    AccumulateSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::ActorMovementTickNeededComponent>,
                      ::Read<
                          ::ActorDataFlagComponent,
                          ::ActorDataHorseFlagComponent,
                          ::ActorDataJumpDurationComponent,
                          ::ActorDataBoundingBoxComponent,
                          ::ActorDataSeatOffsetComponent>,
                      ::Write<::ReplayStateTrackerComponent>,
                      ::AddRemove<>,
                      ::GlobalRead<>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& executionContext) /*override*/;

    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::ActorMovementTickNeededComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent>,
            ::Write<::ReplayStateTrackerComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;

    // vIndex: 0
    virtual ~AccumulateSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickEntity(
        ::StrictEntityContext const&   entity,
        ::ReplayStateTrackerComponent& tracker,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorDataFlagComponent const,
            ::Optional<::ActorDataHorseFlagComponent const>,
            ::Optional<::ActorDataJumpDurationComponent const>,
            ::Optional<::ActorDataBoundingBoxComponent const>,
            ::Optional<::ActorDataSeatOffsetComponent const>> const& tracked
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::StrictExecutionContext<
                     ::Filter<::ActorMovementTickNeededComponent>,
                     ::Read<
                         ::ActorDataFlagComponent,
                         ::ActorDataHorseFlagComponent,
                         ::ActorDataJumpDurationComponent,
                         ::ActorDataBoundingBoxComponent,
                         ::ActorDataSeatOffsetComponent>,
                     ::Write<::ReplayStateTrackerComponent>,
                     ::AddRemove<>,
                     ::GlobalRead<>,
                     ::GlobalWrite<>,
                     ::EntityFactoryT<>>& executionContext);

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::ActorMovementTickNeededComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent>,
            ::Write<::ReplayStateTrackerComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientRewind

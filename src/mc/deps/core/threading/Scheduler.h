#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
// clang-format on

class Scheduler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // Scheduler inner types declare
    // clang-format off
    class ScopedChangeScheduler;
    // clang-format on

    // Scheduler inner types define
    class ScopedChangeScheduler {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk3a05ca;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopedChangeScheduler& operator=(ScopedChangeScheduler const&);
        ScopedChangeScheduler(ScopedChangeScheduler const&);
        ScopedChangeScheduler();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                    mTotalFrames;
    ::ll::TypedStorage<4, 4, uint>                                    mStarvedFrames;
    ::ll::TypedStorage<4, 4, uint>                                    mPromotionFrames;
    ::ll::TypedStorage<4, 4, uint>                                    mTargetFPS;
    ::ll::TypedStorage<4, 4, uint>                                    mEffectiveFPS;
    ::ll::TypedStorage<4, 4, uint>                                    mFramesOverBound;
    ::ll::TypedStorage<8, 8, double>                                  mAverageCallbackDuration;
    ::ll::TypedStorage<8, 8, double>                                  mTotalCoroutineDuration;
    ::ll::TypedStorage<8, 8, uint64>                                  mTotalRunCoroutines;
    ::ll::TypedStorage<8, 8, double>                                  mCoroutineTimeLimit;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorkerPool>>         mCoroutinePool;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextStarveCheckTime;
    ::ll::TypedStorage<4, 4, ::std::thread::id>                       mThreadID;
    // NOLINTEND

public:
    // prevent constructor by default
    Scheduler& operator=(Scheduler const&);
    Scheduler(Scheduler const&);
    Scheduler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Scheduler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Scheduler(::std::string name, uint FPS);

    MCAPI bool _runCoroutines(double timeCap);

    MCAPI void changeThread(::std::thread::id newOwner);

    MCAPI ::WorkerPool& getCoroutinePool();

    MCAPI void processCoroutines(::std::chrono::nanoseconds timeSinceSwap, ::std::chrono::nanoseconds minTimeCap);

    MCAPI void setTargetFPS(uint FPS);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& AVERAGE_TASK_TOLERANCE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name, uint FPS);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

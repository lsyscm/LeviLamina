/**
 * @file  WorkComposterGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "WorkGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkComposterGoal.
 *
 */
class WorkComposterGoal : public WorkGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKCOMPOSTERGOAL
public:
    class WorkComposterGoal& operator=(class WorkComposterGoal const &) = delete;
    WorkComposterGoal(class WorkComposterGoal const &) = delete;
    WorkComposterGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1841482366
     */
    virtual ~WorkComposterGoal();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@WorkComposterGoal@@UEAAXXZ
     * @hash   1237282313
     */
    virtual void start();
    /**
     * @vftbl  8
     * @hash   -1310126968
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1251451191
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  18
     * @symbol ?useWorkstation@WorkComposterGoal@@UEAAXXZ
     * @hash   -1631224109
     */
    virtual void useWorkstation();
    /**
     * @symbol ??0WorkComposterGoal@@QEAA@AEAVMob@@@Z
     * @hash   -245432387
     */
    MCAPI WorkComposterGoal(class Mob &);

//private:
    /**
     * @symbol ?_tryCompostItems@WorkComposterGoal@@AEAA_NXZ
     * @hash   651339585
     */
    MCAPI bool _tryCompostItems();
    /**
     * @symbol ?_tryEmptyComposter@WorkComposterGoal@@AEAA_NXZ
     * @hash   853273491
     */
    MCAPI bool _tryEmptyComposter();

private:

};
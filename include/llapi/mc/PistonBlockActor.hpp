/**
 * @file  PistonBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PistonBlockActor.
 *
 */
class PistonBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PISTONBLOCKACTOR
public:
    class PistonBlockActor& operator=(class PistonBlockActor const &) = delete;
    PistonBlockActor(class PistonBlockActor const &) = delete;
    PistonBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1026819723
     */
    virtual ~PistonBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@PistonBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -441510648
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@PistonBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -1818251593
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   2079867761
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol ?onRemoved@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1940580605
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  30
     * @symbol ?getOwningPiston@PistonBlockActor@@UEAAPEAV1@AEAVBlockSource@@@Z
     * @hash   -1784661442
     */
    virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /**
     * @vftbl  31
     * @hash   -234921246
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @hash   -233997725
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -233074204
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -232150683
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @hash   -190772906
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @hash   -189849385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol ?_getUpdatePacket@PistonBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -1528687126
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol ?_onUpdatePacket@PistonBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   766904888
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0PistonBlockActor@@QEAA@AEBVBlockPos@@_N@Z
     * @hash   2086447401
     */
    MCAPI PistonBlockActor(class BlockPos const &, bool);
    /**
     * @symbol ?getAttachedBlocks@PistonBlockActor@@QEBAAEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@XZ
     * @hash   -279290256
     */
    MCAPI std::vector<class BlockPos> const & getAttachedBlocks() const;
    /**
     * @symbol ?getCorrectArmBlock@PistonBlockActor@@QEBAPEBVBlock@@XZ
     * @hash   1841863381
     */
    MCAPI class Block const * getCorrectArmBlock() const;
    /**
     * @symbol ?getFacingDir@PistonBlockActor@@QEBAAEBVBlockPos@@AEBVIConstBlockSource@@@Z
     * @hash   2076435075
     */
    MCAPI class BlockPos const & getFacingDir(class IConstBlockSource const &) const;
    /**
     * @symbol ?getProgress@PistonBlockActor@@QEBAMM@Z
     * @hash   -1094565661
     */
    MCAPI float getProgress(float) const;
    /**
     * @symbol ?isExpanded@PistonBlockActor@@QEBA_NXZ
     * @hash   -427258414
     */
    MCAPI bool isExpanded() const;
    /**
     * @symbol ?isExpanding@PistonBlockActor@@QEBA_NXZ
     * @hash   -478651958
     */
    MCAPI bool isExpanding() const;
    /**
     * @symbol ?isMoving@PistonBlockActor@@QEBA_NXZ
     * @hash   -938516
     */
    MCAPI bool isMoving() const;
    /**
     * @symbol ?isRetracted@PistonBlockActor@@QEBA_NXZ
     * @hash   -1030376806
     */
    MCAPI bool isRetracted() const;
    /**
     * @symbol ?isRetracting@PistonBlockActor@@QEBA_NXZ
     * @hash   -1997298046
     */
    MCAPI bool isRetracting() const;
    /**
     * @symbol ?moveEntityLastProgress@PistonBlockActor@@QEAAXAEAVActor@@VVec3@@@Z
     * @hash   1405705345
     */
    MCAPI void moveEntityLastProgress(class Actor &, class Vec3);
    /**
     * @symbol ?setShouldVerifyArmType@PistonBlockActor@@QEAAX_N@Z
     * @hash   -1177868176
     */
    MCAPI void setShouldVerifyArmType(bool);

//private:
    /**
     * @symbol ?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
     * @hash   1307219459
     */
    MCAPI bool _attachedBlockWalker(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    /**
     * @symbol ?_checkAttachedBlocks@PistonBlockActor@@AEAA_NAEAVBlockSource@@@Z
     * @hash   -1416403044
     */
    MCAPI bool _checkAttachedBlocks(class BlockSource &);
    /**
     * @symbol ?_checkInceptionAchievement@PistonBlockActor@@AEAAXAEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   921880140
     */
    MCAPI void _checkInceptionAchievement(class BlockActor &, class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_handleSlimeConnections@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
     * @hash   1057224567
     */
    MCAPI bool _handleSlimeConnections(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    /**
     * @symbol ?_hasBlockAttached@PistonBlockActor@@AEAA_NAEBVBlockPos@@@Z
     * @hash   -719372393
     */
    MCAPI bool _hasBlockAttached(class BlockPos const &);
    /**
     * @symbol ?_moveCollidedEntities@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   1573445394
     */
    MCAPI void _moveCollidedEntities(class BlockSource &);
    /**
     * @symbol ?_moveCollidedEntitiesHelper@PistonBlockActor@@AEAAXAEAVBlockSource@@AEBVAABB@@AEBVBlockPos@@PEAVActor@@I@Z
     * @hash   -630498684
     */
    MCAPI void _moveCollidedEntitiesHelper(class BlockSource &, class AABB const &, class BlockPos const &, class Actor *, unsigned int);
    /**
     * @symbol ?_sortAttachedBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   770697394
     */
    MCAPI void _sortAttachedBlocks(class BlockSource &);
    /**
     * @symbol ?_spawnBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   1643621527
     */
    MCAPI void _spawnBlocks(class BlockSource &);
    /**
     * @symbol ?_spawnMovingBlock@PistonBlockActor@@AEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1624568404
     */
    MCAPI void _spawnMovingBlock(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_spawnMovingBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   879392777
     */
    MCAPI void _spawnMovingBlocks(class BlockSource &);
    /**
     * @symbol ?_spawnResourcesForBlockAndExtraBlock@PistonBlockActor@@CAXAEAVBlockSource@@AEBVBlockPos@@VRandomize@@AEBUResourceDropsContext@@@Z
     * @hash   -34353377
     */
    MCAPI static void _spawnResourcesForBlockAndExtraBlock(class BlockSource &, class BlockPos const &, class Randomize, struct ResourceDropsContext const &);

private:
    /**
     * @symbol ?ARM_ANIMATION_SPEED@PistonBlockActor@@0MB
     * @hash   1209684339
     */
    MCAPI static float const ARM_ANIMATION_SPEED;

};
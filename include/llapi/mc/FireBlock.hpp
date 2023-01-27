/**
 * @file  FireBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FireBlock.
 *
 */
class FireBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREBLOCK
public:
    class FireBlock& operator=(class FireBlock const &) = delete;
    FireBlock(class FireBlock const &) = delete;
    FireBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2135776837
     */
    virtual ~FireBlock();
    /**
     * @vftbl  10
     * @symbol ?getAABB@FireBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   621563223
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -170704343
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -145769276
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -99662418
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@FireBlock@@UEBA_NXZ
     * @hash   -475116063
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  69
     * @symbol ?checkIsPathable@FireBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   -461686981
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  89
     * @symbol ?mayPick@FireBlock@@UEBA_NXZ
     * @hash   -543560249
     */
    virtual bool mayPick() const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@FireBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   691360809
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   37495993
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  113
     * @symbol ?entityInside@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     * @hash   801072113
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  151
     * @symbol ?animateTick@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -989681156
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  156
     * @hash   1576709922
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol ?onPlace@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   2029459053
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1202389363
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  187
     * @symbol ?getResourceCount@FireBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -2124073315
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREBLOCK
    /**
     * @symbol ?canBeSilkTouched@FireBlock@@MEBA_NXZ
     * @hash   2019118384
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?waterSpreadCausesSpawn@FireBlock@@UEBA_NXZ
     * @hash   -1710325672
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0FireBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1534878267
     */
    MCAPI FireBlock(std::string const &, int);
    /**
     * @symbol ?checkBurn@FireBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@HAEAVRandomize@@H@Z
     * @hash   657122160
     */
    MCAPI void checkBurn(class BlockSource &, class BlockPos const &, int, class Randomize &, int) const;
    /**
     * @symbol ?isSolidToppedBlock@FireBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -635672738
     */
    MCAPI static bool isSolidToppedBlock(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol ?_tryAddToTickingQueue@FireBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1640575449
     */
    MCAPI void _tryAddToTickingQueue(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?_trySpawnBlueFire@FireBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1789320021
     */
    MCAPI bool _trySpawnBlueFire(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?getFireOdds@FireBlock@@AEBAMAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   161820266
     */
    MCAPI float getFireOdds(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?isValidFireLocation@FireBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -253767767
     */
    MCAPI bool isValidFireLocation(class BlockSource &, class BlockPos const &) const;

private:

};
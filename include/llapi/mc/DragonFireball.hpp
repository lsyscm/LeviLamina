/**
 * @file  DragonFireball.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Fireball.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonFireball.
 *
 */
class DragonFireball : public Fireball {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONFIREBALL
public:
    class DragonFireball& operator=(class DragonFireball const &) = delete;
    DragonFireball(class DragonFireball const &) = delete;
    DragonFireball() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   56503090
     */
    virtual ~DragonFireball();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  63
     * @hash   -96891855
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  97
     * @symbol ?isPickable@DragonFireball@@UEAA_NXZ
     * @hash   1092649430
     */
    virtual bool isPickable();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1428946562
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  266
     * @hash   -1802124542
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  267
     * @symbol ?_hurt@DragonFireball@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   -931007432
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  283
     * @hash   -1805389059
     */
    virtual void __unk_vfn_283();
    /**
     * @vftbl  284
     * @symbol ?getTrailParticle@DragonFireball@@MEAA?AW4ParticleType@@XZ
     * @hash   -1622893112
     */
    virtual enum class ParticleType getTrailParticle();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONFIREBALL
    /**
     * @symbol ?shouldBurn@DragonFireball@@MEAA_NXZ
     * @hash   -430645108
     */
    MCVAPI bool shouldBurn();
#endif
    /**
     * @symbol ??0DragonFireball@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   575710196
     */
    MCAPI DragonFireball(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?SPLASH_RANGE@DragonFireball@@2MA
     * @hash   -1813873091
     */
    MCAPI static float SPLASH_RANGE;

};
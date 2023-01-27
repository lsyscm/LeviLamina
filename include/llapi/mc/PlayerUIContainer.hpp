/**
 * @file  PlayerUIContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SimpleContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerUIContainer.
 *
 */
class PlayerUIContainer : public SimpleContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINER
public:
    class PlayerUIContainer& operator=(class PlayerUIContainer const &) = delete;
    PlayerUIContainer(class PlayerUIContainer const &) = delete;
    PlayerUIContainer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2005262490
     */
    virtual ~PlayerUIContainer();
    /**
     * @vftbl  22
     * @hash   -212331980
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @hash   -211408459
     */
    virtual void __unk_vfn_23();
    /**
     * @symbol ??0PlayerUIContainer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NH@Z
     * @hash   872393641
     */
    MCAPI PlayerUIContainer(std::string const &, bool, int);
    /**
     * @symbol ?load@PlayerUIContainer@@QEAAXAEBVListTag@@AEBVSemVersion@@@Z
     * @hash   1012143539
     */
    MCAPI void load(class ListTag const &, class SemVersion const &);
    /**
     * @symbol ?save@PlayerUIContainer@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     * @hash   -1031268776
     */
    MCAPI std::unique_ptr<class ListTag> save() const;

};
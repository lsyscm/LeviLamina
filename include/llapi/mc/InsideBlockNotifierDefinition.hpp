/**
 * @file  InsideBlockNotifierDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideBlockNotifierDefinition.
 *
 */
class InsideBlockNotifierDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERDEFINITION
public:
    class InsideBlockNotifierDefinition& operator=(class InsideBlockNotifierDefinition const &) = delete;
    InsideBlockNotifierDefinition(class InsideBlockNotifierDefinition const &) = delete;
    InsideBlockNotifierDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@InsideBlockNotifierDefinition@@QEBAXAEAVEntityContext@@AEAVInsideBlockNotifierComponent@@@Z
     * @hash   1403282805
     */
    MCAPI void initialize(class EntityContext &, class InsideBlockNotifierComponent &) const;
    /**
     * @symbol ?buildSchema@InsideBlockNotifierDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VInsideBlockNotifierDefinition@@@JsonUtil@@@std@@@Z
     * @hash   200847526
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InsideBlockNotifierDefinition>> &);

};
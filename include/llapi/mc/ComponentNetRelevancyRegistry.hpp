/**
 * @file  ComponentNetRelevancyRegistry.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComponentNetRelevancyRegistry.
 *
 */
class ComponentNetRelevancyRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct NetSerializationCallbacks {
    NetSerializationCallbacks() = delete;
    NetSerializationCallbacks(NetSerializationCallbacks const&) = delete;
    NetSerializationCallbacks(NetSerializationCallbacks const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTNETRELEVANCYREGISTRY
public:
    class ComponentNetRelevancyRegistry& operator=(class ComponentNetRelevancyRegistry const &) = delete;
    ComponentNetRelevancyRegistry(class ComponentNetRelevancyRegistry const &) = delete;
    ComponentNetRelevancyRegistry() = delete;
#endif

public:
    /**
     * @symbol ?getFilteredDefinitionsForServer@ComponentNetRelevancyRegistry@@QEBA?AVDefinitionInstanceGroup@@AEBV2@@Z
     * @hash   -1256121540
     */
    MCAPI class DefinitionInstanceGroup getFilteredDefinitionsForServer(class DefinitionInstanceGroup const &) const;
    /**
     * @symbol ?registerNetSerialization@ComponentNetRelevancyRegistry@@QEAAAEAUNetSerializationCallbacks@1@AEBVHashedString@@V?$function@$$A6A_NAEBVDefinitionInstanceGroup@@AEAVCompoundTag@@@Z@std@@@Z
     * @hash   -416733892
     */
    MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks & registerNetSerialization(class HashedString const &, class std::function<bool (class DefinitionInstanceGroup const &, class CompoundTag &)>);
    /**
     * @symbol ?serializeComponentDefinitionsForClient@ComponentNetRelevancyRegistry@@QEBA_NAEBVDefinitionInstanceGroup@@AEAVCompoundTag@@@Z
     * @hash   608212408
     */
    MCAPI bool serializeComponentDefinitionsForClient(class DefinitionInstanceGroup const &, class CompoundTag &) const;
    /**
     * @symbol ??1ComponentNetRelevancyRegistry@@QEAA@XZ
     * @hash   -510903258
     */
    MCAPI ~ComponentNetRelevancyRegistry();

};
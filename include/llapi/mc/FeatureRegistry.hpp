/**
 * @file  FeatureRegistry.hpp
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
 * @brief MC class FeatureRegistry.
 *
 */
class FeatureRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct FeatureBinaryJsonFormat;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRY
public:
    class FeatureRegistry& operator=(class FeatureRegistry const &) = delete;
    FeatureRegistry(class FeatureRegistry const &) = delete;
#endif

public:
    /**
     * @symbol ??0FeatureRegistry@@QEAA@XZ
     * @hash   865815615
     */
    MCAPI FeatureRegistry();
    /**
     * @symbol ?forEachFeature@FeatureRegistry@@QEBAXV?$function@$$A6AXAEBVHashedString@@V?$WeakRefT@UFeatureRefTraits@@@@@Z@std@@@Z
     * @hash   -954367022
     */
    MCAPI void forEachFeature(class std::function<void (class HashedString const &, class WeakRefT<struct FeatureRefTraits>)>) const;
    /**
     * @symbol ?getLargeFeaturePasses@FeatureRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   -1820491249
     */
    MCAPI std::vector<std::string> getLargeFeaturePasses() const;
    /**
     * @symbol ?getSmallFeaturePasses@FeatureRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   1969529279
     */
    MCAPI std::vector<std::string> getSmallFeaturePasses() const;
    /**
     * @symbol ?isFeaturePassDefined@FeatureRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -751428475
     */
    MCAPI bool isFeaturePassDefined(std::string const &) const;
    /**
     * @symbol ?loadFromDefinitions@FeatureRegistry@@QEAAXAEAVIWorldRegistriesProvider@@AEBVResourcePackManager@@AEBVExperiments@@_N@Z
     * @hash   608924429
     */
    MCAPI void loadFromDefinitions(class IWorldRegistriesProvider &, class ResourcePackManager const &, class Experiments const &, bool);
    /**
     * @symbol ?lookupByName@FeatureRegistry@@QEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2030046114
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupByName(std::string const &) const;
    /**
     * @symbol ?lookupOrReserveFeature@FeatureRegistry@@QEAA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   538279132
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupOrReserveFeature(std::string const &);
    /**
     * @symbol ?reserveFeature@FeatureRegistry@@QEAA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   48855014
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> reserveFeature(std::string const &);
    /**
     * @symbol ?reverseLookupString@FeatureRegistry@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVIFeature@@@Z
     * @hash   -423390371
     */
    MCAPI std::string const & reverseLookupString(class IFeature const &);
    /**
     * @symbol ?setLargeFeaturePasses@FeatureRegistry@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   880432989
     */
    MCAPI void setLargeFeaturePasses(std::vector<std::string>);
    /**
     * @symbol ?setSmallFeaturePasses@FeatureRegistry@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -1666115235
     */
    MCAPI void setSmallFeaturePasses(std::vector<std::string>);
    /**
     * @symbol ?AFTER_SKY_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -383559233
     */
    MCAPI static std::string const AFTER_SKY_PASS;
    /**
     * @symbol ?AFTER_SURFACE_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1251730015
     */
    MCAPI static std::string const AFTER_SURFACE_PASS;
    /**
     * @symbol ?AFTER_UNDERGROUND_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1648462913
     */
    MCAPI static std::string const AFTER_UNDERGROUND_PASS;
    /**
     * @symbol ?BEFORE_SKY_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1867321533
     */
    MCAPI static std::string const BEFORE_SKY_PASS;
    /**
     * @symbol ?BEFORE_SURFACE_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -528233891
     */
    MCAPI static std::string const BEFORE_SURFACE_PASS;
    /**
     * @symbol ?BEFORE_UNDERGROUND_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -421262147
     */
    MCAPI static std::string const BEFORE_UNDERGROUND_PASS;
    /**
     * @symbol ?FINAL_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   279872863
     */
    MCAPI static std::string const FINAL_PASS;
    /**
     * @symbol ?FIRST_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1717029025
     */
    MCAPI static std::string const FIRST_PASS;
    /**
     * @symbol ?PREGENERATION_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1238632863
     */
    MCAPI static std::string const PREGENERATION_PASS;
    /**
     * @symbol ?SKY_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1463406401
     */
    MCAPI static std::string const SKY_PASS;
    /**
     * @symbol ?SURFACE_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -608032417
     */
    MCAPI static std::string const SURFACE_PASS;
    /**
     * @symbol ?UNDERGROUND_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1322243393
     */
    MCAPI static std::string const UNDERGROUND_PASS;

//private:
    /**
     * @symbol ?_featureNamespaceFromInput@FeatureRegistry@@AEAA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
     * @hash   -50389522
     */
    MCAPI std::string const _featureNamespaceFromInput(std::string const &, std::string const &);
    /**
     * @symbol ?_registerFeature@FeatureRegistry@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIFeature@@U?$default_delete@VIFeature@@@std@@@3@@Z
     * @hash   2141698902
     */
    MCAPI void _registerFeature(std::string const &, std::unique_ptr<class IFeature>);
    /**
     * @symbol ?_setupFeature@FeatureRegistry@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVIWorldRegistriesProvider@@AEBVResourcePackManager@@AEBV23@2AEBVSemVersion@@@Z
     * @hash   -2037871453
     */
    MCAPI std::string _setupFeature(class IWorldRegistriesProvider &, class ResourcePackManager const &, std::string const &, std::string const &, class SemVersion const &);

private:

};
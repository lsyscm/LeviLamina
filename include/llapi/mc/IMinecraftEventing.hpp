/**
 * @file  IMinecraftEventing.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class IMinecraftEventing.
 *
 */
class IMinecraftEventing {

#define AFTER_EXTRA
public:
    enum class StructureBlockActionType;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMINECRAFTEVENTING
public:
    class IMinecraftEventing& operator=(class IMinecraftEventing const &) = delete;
    IMinecraftEventing(class IMinecraftEventing const &) = delete;
    IMinecraftEventing() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMINECRAFTEVENTING
    /**
     * @symbol ?updatePlayerUndergroundStatus@IMinecraftEventing@@UEAAXPEAVPlayer@@_N@Z
     * @hash   1108715199
     */
    MCVAPI void updatePlayerUndergroundStatus(class Player *, bool);
    /**
     * @symbol ??1IMinecraftEventing@@UEAA@XZ
     * @hash   902918532
     */
    MCVAPI ~IMinecraftEventing();
#endif

};
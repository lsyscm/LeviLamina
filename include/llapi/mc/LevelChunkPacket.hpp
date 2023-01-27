/**
 * @file  LevelChunkPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkPacket.
 *
 */
class LevelChunkPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKPACKET
public:
    class LevelChunkPacket& operator=(class LevelChunkPacket const &) = delete;
    LevelChunkPacket(class LevelChunkPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1611528709
     */
    virtual ~LevelChunkPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@LevelChunkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1438419987
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@LevelChunkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   25797274
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@LevelChunkPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   514669645
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@LevelChunkPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   605115837
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0LevelChunkPacket@@QEAA@XZ
     * @hash   146966349
     */
    MCAPI LevelChunkPacket();
    /**
     * @symbol ?pushSubChunkMetadata@LevelChunkPacket@@QEAAX_K@Z
     * @hash   -1451019377
     */
    MCAPI void pushSubChunkMetadata(unsigned __int64);

};
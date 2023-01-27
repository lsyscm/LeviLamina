/**
 * @file  InMemoryRandomAccessFile.hpp
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
 * @brief MC class InMemoryRandomAccessFile.
 *
 */
class InMemoryRandomAccessFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYRANDOMACCESSFILE
public:
    class InMemoryRandomAccessFile& operator=(class InMemoryRandomAccessFile const &) = delete;
    InMemoryRandomAccessFile(class InMemoryRandomAccessFile const &) = delete;
    InMemoryRandomAccessFile() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -333043309
     */
    virtual ~InMemoryRandomAccessFile();
    /**
     * @vftbl  1
     * @symbol ?Read@InMemoryRandomAccessFile@@UEBA?AVStatus@leveldb@@_K0PEAVSlice@3@PEAD@Z
     * @hash   -208843742
     */
    virtual class leveldb::Status Read(unsigned __int64, unsigned __int64, class leveldb::Slice *, char *) const;
    /**
     * @symbol ??0InMemoryRandomAccessFile@@QEAA@V?$shared_ptr@VInMemoryFile@@@std@@@Z
     * @hash   1162769001
     */
    MCAPI InMemoryRandomAccessFile(class std::shared_ptr<class InMemoryFile>);

};
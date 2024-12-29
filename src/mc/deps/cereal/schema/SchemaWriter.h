#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
// clang-format on

namespace cereal {

struct SchemaWriter {
public:
    // prevent constructor by default
    SchemaWriter& operator=(SchemaWriter const&);
    SchemaWriter(SchemaWriter const&);
    SchemaWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SchemaWriter();

    // vIndex: 12
    virtual bool write(bool, ::cereal::PropertyReader const&) = 0;

    // vIndex: 11
    virtual bool write(char, ::cereal::PropertyReader const&) = 0;

    // vIndex: 10
    virtual bool write(uchar, ::cereal::PropertyReader const&) = 0;

    // vIndex: 9
    virtual bool write(short, ::cereal::PropertyReader const&) = 0;

    // vIndex: 8
    virtual bool write(ushort, ::cereal::PropertyReader const&) = 0;

    // vIndex: 7
    virtual bool write(int, ::cereal::PropertyReader const&) = 0;

    // vIndex: 6
    virtual bool write(uint, ::cereal::PropertyReader const&) = 0;

    // vIndex: 5
    virtual bool write(int64, ::cereal::PropertyReader const&) = 0;

    // vIndex: 4
    virtual bool write(uint64, ::cereal::PropertyReader const&) = 0;

    // vIndex: 3
    virtual bool write(float, ::cereal::PropertyReader const&) = 0;

    // vIndex: 2
    virtual bool write(double, ::cereal::PropertyReader const&) = 0;

    // vIndex: 1
    virtual bool write(::std::string_view const, ::cereal::PropertyReader const&) = 0;

    // vIndex: 13
    virtual bool pushMember(::std::string_view const, ::cereal::PropertyReader const&) = 0;

    // vIndex: 14
    virtual void popMember() = 0;

    // vIndex: 15
    virtual bool openObject(::cereal::PropertyReader const&) = 0;

    // vIndex: 16
    virtual bool openArray(uint64, ::cereal::PropertyReader const&) = 0;

    // vIndex: 17
    virtual void close() = 0;

    // vIndex: 18
    virtual bool isSequenceWriter() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isSequenceWriter() const;
    // NOLINTEND
};

} // namespace cereal
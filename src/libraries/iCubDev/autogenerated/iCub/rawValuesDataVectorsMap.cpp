/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <iCub/rawValuesDataVectorsMap.h>

namespace iCub {

// Constructor with field values
rawValuesDataVectorsMap::rawValuesDataVectorsMap(const std::map<std::string, std::vector<std::int32_t>>& vectorsMap) :
        WirePortable(),
        vectorsMap(vectorsMap)
{
}

// Read structure on a Wire
bool rawValuesDataVectorsMap::read(yarp::os::idl::WireReader& reader)
{
    if (!read_vectorsMap(reader)) {
        return false;
    }
    if (reader.isError()) {
        return false;
    }
    return true;
}

// Read structure on a Connection
bool rawValuesDataVectorsMap::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(1)) {
        return false;
    }
    if (!read(reader)) {
        return false;
    }
    return true;
}

// Write structure on a Wire
bool rawValuesDataVectorsMap::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_vectorsMap(writer)) {
        return false;
    }
    if (writer.isError()) {
        return false;
    }
    return true;
}

// Write structure on a Connection
bool rawValuesDataVectorsMap::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!write(writer)) {
        return false;
    }
    return true;
}

// Convert to a printable string
std::string rawValuesDataVectorsMap::toString() const
{
    yarp::os::Bottle b;
    if (!yarp::os::Portable::copyPortable(*this, b)) {
        return {};
    }
    return b.toString();
}

// read vectorsMap field
bool rawValuesDataVectorsMap::read_vectorsMap(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    size_t _csize;
    yarp::os::idl::WireState _ktype;
    yarp::os::idl::WireState _vtype;
    reader.readMapBegin(_ktype, _vtype, _csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        size_t _msize;
        yarp::os::idl::WireState _lst;
        reader.readListBegin(_lst, _msize);
        std::string _key;
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readString(_key)) {
            reader.fail();
            return false;
        }
        std::vector<std::int32_t>& _val = vectorsMap[_key];
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        size_t _csize;
        yarp::os::idl::WireState _etype;
        reader.readListBegin(_etype, _csize);
        // WireReader removes BOTTLE_TAG_LIST from the tag
        constexpr int expected_tag = ((BOTTLE_TAG_INT32) & (~BOTTLE_TAG_LIST));
        if constexpr (expected_tag != 0) {
            if (_csize != 0 && _etype.code != expected_tag) {
                return false;
            }
        }
        _val.resize(_csize);
        if (_csize != 0 && !reader.readBlock(reinterpret_cast<char*>(_val.data()), _val.size() * sizeof(std::int32_t))) {
            return false;
        }
        reader.readListEnd();
        reader.readListEnd();
    }
    reader.readMapEnd();
    return true;
}

// write vectorsMap field
bool rawValuesDataVectorsMap::write_vectorsMap(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeMapBegin(BOTTLE_TAG_STRING, BOTTLE_TAG_LIST | BOTTLE_TAG_INT32, vectorsMap.size())) {
        return false;
    }
    for (const auto& _item : vectorsMap) {
        if (!writer.writeListBegin(0,2)) {
            return false;
        }
        if (!writer.writeString(_item.first)) {
            return false;
        }
        if (!writer.writeListBegin(BOTTLE_TAG_INT32, _item.second.size())) {
            return false;
        }
        if (!writer.writeBlock(reinterpret_cast<const char*>(_item.second.data()), _item.second.size() * sizeof(std::int32_t))) {
            return false;
        }
        if (!writer.writeListEnd()) {
            return false;
        }
        if (!writer.writeListEnd()) {
            return false;
        }
    }
    if (!writer.writeMapEnd()) {
        return false;
    }
    return true;
}

// read (nested) vectorsMap field
bool rawValuesDataVectorsMap::nested_read_vectorsMap(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    size_t _csize;
    yarp::os::idl::WireState _ktype;
    yarp::os::idl::WireState _vtype;
    reader.readMapBegin(_ktype, _vtype, _csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        size_t _msize;
        yarp::os::idl::WireState _lst;
        reader.readListBegin(_lst, _msize);
        std::string _key;
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readString(_key)) {
            reader.fail();
            return false;
        }
        std::vector<std::int32_t>& _val = vectorsMap[_key];
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        size_t _csize;
        yarp::os::idl::WireState _etype;
        reader.readListBegin(_etype, _csize);
        // WireReader removes BOTTLE_TAG_LIST from the tag
        constexpr int expected_tag = ((BOTTLE_TAG_INT32) & (~BOTTLE_TAG_LIST));
        if constexpr (expected_tag != 0) {
            if (_csize != 0 && _etype.code != expected_tag) {
                return false;
            }
        }
        _val.resize(_csize);
        if (_csize != 0 && !reader.readBlock(reinterpret_cast<char*>(_val.data()), _val.size() * sizeof(std::int32_t))) {
            return false;
        }
        reader.readListEnd();
        reader.readListEnd();
    }
    reader.readMapEnd();
    return true;
}

// write (nested) vectorsMap field
bool rawValuesDataVectorsMap::nested_write_vectorsMap(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeMapBegin(BOTTLE_TAG_STRING, BOTTLE_TAG_LIST | BOTTLE_TAG_INT32, vectorsMap.size())) {
        return false;
    }
    for (const auto& _item : vectorsMap) {
        if (!writer.writeListBegin(0,2)) {
            return false;
        }
        if (!writer.writeString(_item.first)) {
            return false;
        }
        if (!writer.writeListBegin(BOTTLE_TAG_INT32, _item.second.size())) {
            return false;
        }
        if (!writer.writeBlock(reinterpret_cast<const char*>(_item.second.data()), _item.second.size() * sizeof(std::int32_t))) {
            return false;
        }
        if (!writer.writeListEnd()) {
            return false;
        }
        if (!writer.writeListEnd()) {
            return false;
        }
    }
    if (!writer.writeMapEnd()) {
        return false;
    }
    return true;
}

} // namespace iCub

/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <iCub/rawValuesKeyMetadataMap.h>

namespace iCub {

// Constructor with field values
rawValuesKeyMetadataMap::rawValuesKeyMetadataMap(const std::map<std::string, rawValuesKeyMetadata>& metadataMap) :
        WirePortable(),
        metadataMap(metadataMap)
{
}

// Read structure on a Wire
bool rawValuesKeyMetadataMap::read(yarp::os::idl::WireReader& reader)
{
    if (!read_metadataMap(reader)) {
        return false;
    }
    if (reader.isError()) {
        return false;
    }
    return true;
}

// Read structure on a Connection
bool rawValuesKeyMetadataMap::read(yarp::os::ConnectionReader& connection)
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
bool rawValuesKeyMetadataMap::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_metadataMap(writer)) {
        return false;
    }
    if (writer.isError()) {
        return false;
    }
    return true;
}

// Write structure on a Connection
bool rawValuesKeyMetadataMap::write(yarp::os::ConnectionWriter& connection) const
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
std::string rawValuesKeyMetadataMap::toString() const
{
    yarp::os::Bottle b;
    if (!yarp::os::Portable::copyPortable(*this, b)) {
        return {};
    }
    return b.toString();
}

// read metadataMap field
bool rawValuesKeyMetadataMap::read_metadataMap(yarp::os::idl::WireReader& reader)
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
        rawValuesKeyMetadata& _val = metadataMap[_key];
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(_val)) {
            reader.fail();
            return false;
        }
        reader.readListEnd();
    }
    reader.readMapEnd();
    return true;
}

// write metadataMap field
bool rawValuesKeyMetadataMap::write_metadataMap(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeMapBegin(BOTTLE_TAG_STRING, BOTTLE_TAG_LIST, metadataMap.size())) {
        return false;
    }
    for (const auto& _item : metadataMap) {
        if (!writer.writeListBegin(0,2)) {
            return false;
        }
        if (!writer.writeString(_item.first)) {
            return false;
        }
        if (!writer.writeNested(_item.second)) {
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

// read (nested) metadataMap field
bool rawValuesKeyMetadataMap::nested_read_metadataMap(yarp::os::idl::WireReader& reader)
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
        rawValuesKeyMetadata& _val = metadataMap[_key];
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(_val)) {
            reader.fail();
            return false;
        }
        reader.readListEnd();
    }
    reader.readMapEnd();
    return true;
}

// write (nested) metadataMap field
bool rawValuesKeyMetadataMap::nested_write_metadataMap(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeMapBegin(BOTTLE_TAG_STRING, BOTTLE_TAG_LIST, metadataMap.size())) {
        return false;
    }
    for (const auto& _item : metadataMap) {
        if (!writer.writeListBegin(0,2)) {
            return false;
        }
        if (!writer.writeString(_item.first)) {
            return false;
        }
        if (!writer.writeNested(_item.second)) {
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

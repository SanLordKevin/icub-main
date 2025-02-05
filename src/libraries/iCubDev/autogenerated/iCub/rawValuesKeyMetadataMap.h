/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_RAWVALUESKEYMETADATAMAP_H
#define YARP_THRIFT_GENERATOR_STRUCT_RAWVALUESKEYMETADATAMAP_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <iCub/rawValuesKeyMetadata.h>

namespace iCub {

class rawValuesKeyMetadataMap :
        public yarp::os::idl::WirePortable
{
public:
    // Fields
    std::map<std::string, rawValuesKeyMetadata> metadataMap{};

    // Default constructor
    rawValuesKeyMetadataMap() = default;

    // Constructor with field values
    rawValuesKeyMetadataMap(const std::map<std::string, rawValuesKeyMetadata>& metadataMap);

    // Read structure on a Wire
    bool read(yarp::os::idl::WireReader& reader) override;

    // Read structure on a Connection
    bool read(yarp::os::ConnectionReader& connection) override;

    // Write structure on a Wire
    bool write(const yarp::os::idl::WireWriter& writer) const override;

    // Write structure on a Connection
    bool write(yarp::os::ConnectionWriter& connection) const override;

    // Convert to a printable string
    std::string toString() const;

    // If you want to serialize this class without nesting, use this helper
    typedef yarp::os::idl::Unwrapped<rawValuesKeyMetadataMap> unwrapped;

private:
    // read/write metadataMap field
    bool read_metadataMap(yarp::os::idl::WireReader& reader);
    bool write_metadataMap(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_metadataMap(yarp::os::idl::WireReader& reader);
    bool nested_write_metadataMap(const yarp::os::idl::WireWriter& writer) const;
};

} // namespace iCub

#endif // YARP_THRIFT_GENERATOR_STRUCT_RAWVALUESKEYMETADATAMAP_H

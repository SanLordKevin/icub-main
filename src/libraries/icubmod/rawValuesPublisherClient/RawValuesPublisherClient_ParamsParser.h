/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */


// Generated by yarpDeviceParamParserGenerator (1.0)
// This is an automatically generated file. Please do not edit it.
// It will be re-generated if the cmake flag ALLOW_DEVICE_PARAM_PARSER_GERNERATION is ON.

// Generated on: Wed Jan  8 10:37:54 2025


#ifndef RAWVALUESPUBLISHERCLIENT_PARAMSPARSER_H
#define RAWVALUESPUBLISHERCLIENT_PARAMSPARSER_H

#include <yarp/os/Searchable.h>
#include <yarp/dev/IDeviceDriverParams.h>
#include <string>
#include <cmath>

/**
* This class is the parameters parser for class RawValuesPublisherClient.
*
* These are the used parameters:
* | Group name | Parameter name     | Type   | Units | Default Value | Required | Description                                                                                                                                                | Notes |
* |:----------:|:------------------:|:------:|:-----:|:-------------:|:--------:|:----------------------------------------------------------------------------------------------------------------------------------------------------------:|:-----:|
* | -          | remote             | string | -     | -             | 1        | Prefix of the ports to which to connect, opened by RawValuesParameterSensorsServer device.                                                                 | -     |
* | -          | local              | string | -     | -             | 1        | Port prefix of the ports opened by this device.                                                                                                            | -     |
* | -          | externalConnection | bool   | -     | false         | 0        | If set to true, the connection to the rpc port of the RVP server is skipped and it is possible to connect to the data source externally after being opened | -     |
* | -          | carrier            | string | -     | tcp           | 0        | The carier used for the connection with the server.                                                                                                        | -     |
*
* The device can be launched by yarpdev using one of the following examples (with and without all optional parameters):
* \code{.unparsed}
* yarpdev --device rawValuesPublisherClient --remote <mandatory_value> --local <mandatory_value> --externalConnection false --carrier tcp
* \endcode
*
* \code{.unparsed}
* yarpdev --device rawValuesPublisherClient --remote <mandatory_value> --local <mandatory_value>
* \endcode
*
*/

class RawValuesPublisherClient_ParamsParser : public yarp::dev::IDeviceDriverParams
{
public:
    RawValuesPublisherClient_ParamsParser();
    ~RawValuesPublisherClient_ParamsParser() override = default;

public:
    const std::string m_device_classname = {"RawValuesPublisherClient"};
    const std::string m_device_name = {"rawValuesPublisherClient"};
    bool m_parser_is_strict = false;
    struct parser_version_type
    {
         int major = 1;
         int minor = 0;
    };
    const parser_version_type m_parser_version = {};

    const std::string m_remote_defaultValue = {""};
    const std::string m_local_defaultValue = {""};
    const std::string m_externalConnection_defaultValue = {"false"};
    const std::string m_carrier_defaultValue = {"tcp"};

    std::string m_remote = {}; //This default value is autogenerated. It is highly recommended to provide a suggested value also for mandatory parameters.
    std::string m_local = {}; //This default value is autogenerated. It is highly recommended to provide a suggested value also for mandatory parameters.
    bool m_externalConnection = {false};
    std::string m_carrier = {"tcp"};

    bool          parseParams(const yarp::os::Searchable & config) override;
    std::string   getDeviceClassName() const override { return m_device_classname; }
    std::string   getDeviceName() const override { return m_device_name; }
    std::string   getDocumentationOfDeviceParams() const override;
    std::vector<std::string> getListOfParams() const override;
};

#endif

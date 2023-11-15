
//====================================================================================================================================================
// Copyright 2022 Lake Orion Robotics FIRST Team 302 
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
// OR OTHER DEALINGS IN THE SOFTWARE.
//====================================================================================================================================================

// C++ Includes
#include <map>
#include <memory>
#include <string>

// FRC includes

// Team 302 includes
#include <hw/usages/DigitalInputUsage.h>
#include <utils/logger.h>

// Third Party Includes

using namespace std;

DigitalInputUsage* DigitalInputUsage::m_instance = nullptr;
DigitalInputUsage* DigitalInputUsage::GetInstance()
{
    if ( m_instance == nullptr )
    {
        m_instance = new DigitalInputUsage();
    }
    return m_instance;
}

DigitalInputUsage::DigitalInputUsage()
{
    m_usageMap["ARM_UP"] = DigitalInputUsage::DIGITAL_SENSOR_USAGE::ARM_UP;
    m_usageMap["ARM_DOWN"] = DigitalInputUsage::DIGITAL_SENSOR_USAGE::ARM_DOWN;
}

DigitalInputUsage::~DigitalInputUsage()
{
    m_usageMap.clear();
}

DigitalInputUsage::DIGITAL_SENSOR_USAGE DigitalInputUsage::GetUsage
(
    string              usageString
)
{
    auto it = m_usageMap.find(usageString);
    if (it != m_usageMap.end())
    {
        return it->second;
    }
    Logger::GetLogger()->LogData(LOGGER_LEVEL::ERROR, string("DigitalInputUsage::GetUsage"), string("unknown usage"), usageString);
    return DigitalInputUsage::DIGITAL_SENSOR_USAGE::UNKNOWN_DIGITAL_TYPE;
}


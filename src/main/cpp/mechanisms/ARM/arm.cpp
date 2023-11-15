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
#include <memory>
#include <string>

//team 302 includes
#include <mechanisms/ARM/arm.h>
#include <mechanisms/base/Mech1IndMotor.h>
#include <hw/interfaces/IDragonMotorController.h>

using namespace std;

arm::arm
(
std::string                                 controlFileName,
std::string                                 networkTableName,  
std::shared_ptr<IDragonMotorController>     motorController

):Mech1IndMotor(MechanismTypes::MECHANISM_TYPE::ARM, controlFileName, networkTableName, motorController)
{
}

bool arm::IsUp() const
{
    auto motor = GetMotor();
    if (motor.get() != nullptr)
    {
        return motor.get()->IsForwardLimitSwitchClosed();
    }
    return false;
}
bool arm::IsDown() const
{
    auto motor = GetMotor();
    if (motor.get() != nullptr)
    {
        return motor.get()->IsReverseLimitSwitchClosed();
    }
    return false;
}       

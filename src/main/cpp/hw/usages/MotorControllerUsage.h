
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

#pragma once

// C++ Includes
#include <map>
#include <memory>
#include <string>

// FRC includes

// Team 302 includes

// Third Party Includes



class MotorControllerUsage
{

    public:
        /// @enum MOTOR_CONTROLLER_USAGE
        /// @brief Defines motor usages.  This should be modified for each robot.
        enum MOTOR_CONTROLLER_USAGE
        {
            UNKNOWN_MOTOR_CONTROLLER_USAGE = -1,
            SWERVE_DRIVE,
            SWERVE_TURN,
            DIFFERENTIAL_LEFT_MAIN, 
            DIFFERENTIAL_LEFT_FOLLOWER, 
            DIFFERENTIAL_RIGHT_MAIN, 
            DIFFERENTIAL_RIGHT_FOLLOWER, 
            MECANUM_LEFT_FRONT,
            MECANUM_LEFT_BACK,
            MECANUM_RIGHT_FRONT,
            MECANUM_RIGHT_BACK,
            INTAKE_MOTOR,
            INTAKE,
            INTAKE2,
            ARM,
            EXAMPLE,
            CONVEYOR_MOTOR,
            DELIVERY,
            MAX_MOTOR_CONTROLLER_USAGES
        };
  
        MOTOR_CONTROLLER_USAGE GetUsage
        ( 
            std::string         usageString
        );

        static MotorControllerUsage* GetInstance();

    private:
        static MotorControllerUsage*    m_instance;
        MotorControllerUsage();
        ~MotorControllerUsage();

        std::map <std::string, MOTOR_CONTROLLER_USAGE> m_usageMap;
};




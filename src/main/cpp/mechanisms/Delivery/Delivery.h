#pragma once

#include <string>
#include <memory>

//Team 302 Includes
#include <mechanisms/base/Mech1Servo.h>

class Delivery : public Mech1Servo
{
    public:
        Delivery(
            DragonServo* servo,
            std::string controlFileName,
            std::string networkTableName
            );
        Delivery() = delete;
        ~Delivery() = default;


};
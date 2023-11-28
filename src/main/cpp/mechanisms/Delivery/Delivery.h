#pragma once

#include <string>
#include <memory>

//Team 302 Includes
#include <mechanisms/base/Mech1Servo.h>

class Delivery : public Mech1Servo, public 
{
    public:
        Delivery(
            std::shared_ptr<DragonServo> servo,
            std::string controlFileName,
            std::string networkTableName,
            );
        Delivery() = delete;
        ~Delivery() = default;

        void Update() override;   

};
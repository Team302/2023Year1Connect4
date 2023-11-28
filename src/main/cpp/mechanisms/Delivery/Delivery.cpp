#include <mechanisms/Delivery/Delivery.h>
Delivery::Delivery(
    DragonServo* servo,
    std::string controlFileName,
    std::string networkTableName
):Mech1Servo(MechanismTypes::MECHANISM_TYPE::DELIVERY, controlFileName, networkTableName, servo)
{}


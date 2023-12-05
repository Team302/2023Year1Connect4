#include <string>
#include <mechanisms/controllers/ControlData.h>
#include <mechanisms/Delivery/Deliverystate.h>
#include <mechanisms/MechanismFactory.h>

using namespace std;

DeliveryState::DeliveryState(
    string stateName,
    int stateId,
    ControlData *control0,
    double target0) : Mech1ServoState(MechanismFactory::GetMechanismFactory()->GetDelivery(), stateName, stateId, target0), m_delivery(MechanismFactory::GetMechanismFactory()->GetDelivery())
    {

    }

bool DeliveryState::AtTarget() const
    {
        return m_delivery;
    }

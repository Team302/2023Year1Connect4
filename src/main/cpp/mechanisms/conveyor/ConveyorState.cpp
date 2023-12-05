#include <string>

#include <mechanisms/conveyor/ConveyorState.h>
#include <mechanisms/MechanismFactory.h>
#include <mechanisms/controllers/ControlData.h>

using namespace std;

ConveyorState::Mech1IndMotorState(
    string stateName,
    int stateID,
    ControlData *control0,
    double target0) : Mech1IndMotorState(MechanismFactory::getMechanismFactory()->getConveyor(), stateName, stateID, *control0);
            m_conveyor(MechanismFactory::getMechanismFactory()->getConveyor()){}
bool AtTarget() const {
    return true;
}

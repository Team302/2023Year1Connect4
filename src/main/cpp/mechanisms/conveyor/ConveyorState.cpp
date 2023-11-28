#include <string>

#include <mechanisms/conveyor/ConveyorState.h>
#include <mechanisms/MechanismFactory.h>
#include <mechanisms/controllers/ControlData.h>

using namespace std;

ConveyorState::ConveyorState(
    string stateName,
    int stateID,
    ControlData *control0,
    double target0) : 

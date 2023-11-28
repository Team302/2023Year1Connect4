#pragma once

#include <string>

//Team 302 Includes
#include <mechanisms/base/Mech1IndMotorState.h>

class ControlData;
class Conveyor;
class ConveyorState : public Mech1IndMotorState{
    public:
    ConveyorState() = delete;
    ConveyorState(
        std::string stateName,
        int stateID,
        ControlData *control0,
        double target0
    );
    ~ConveyorState()=default;
    bool AtTarget() const override;
    Conveyor *GetConveyor() const {return m_conveyor;}
private:
    Conveyor *m_conveyor;
};

#pragma once 
#include <string>

#include <mechanisms/base/Mech1IndMotorState.h>



class Intake;

class IntakeState : public Mech1IndMotorState
{
public:
    IntakeState() = delete;
    IntakeState(
        std::string stateName,
        int stateId,
        ControlData *control0,
        double target0);
    ~IntakeState() = default;

    bool AtTarget() const override;
    Intake *GetIntake() const { return m_Intake; }

private:
  Intake *m_Intake;

}
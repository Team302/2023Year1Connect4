#pragma once;
#include <mechanisms/base/StateMgr.h>
#include <mechanisms/Intake/Intake.h>
#include <mechanisms/StateStruc.h>

class IntakeStateMgr : public StateMgr
{
    enum INTAKE_STATE
    {
    INTAKE_ON,
    INTAKE_REVERSE,
    INTAKE_OFF
    }; 



    const std::map<const std::string, INTAKE_STATE> m_intakeXmlStringToStateEnumMap{
        {"INTAKE_OFF", INTAKE_STATE::INTAKE_OFF},
        {"INTAKE_INTAKING", INTAKE_STATE::TNTAKE_ON}
        {"INTAKE_EXPELLING", INTAKE_STATE::INTAKE_REVERSE}

    };


};

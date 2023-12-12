#pragma once;
#include <mechanisms/base/StateMgr.h>
#include <mechanisms/Intake/Intake.h>
#include <mechanisms/StateStruc.h>



class IntakeStateMgr : public StateMgr
{
    //FIX SOMTHING HERE.


    static IntakeStateMgr* GetInstance();
    void CheckForStateTransition() ovveride;

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

    int GetCurrentStateParam
    (
        PrimitiveParams* currentParams
    ) override;

   private:
        IntakeStateMgr();
        ~IntakeStateMgr() = default;

        Intake* m_intake;

        static IntakeStateMgr* m_instance;
        const StateStrc m_offState   = {INTAKE_STATE::INTAKE_OFF, m_intakeOffXmlString, StateType::INTAKE_STATE, true};
        const StateStruct m_onState  = {INTAKE_STATE::INTAKE_ON, m_intakeIntakeXmlString, StateType::INTAKE_STATE, false};
        const StateexpelState        = {INTAKE_STATE::INTAKE_EXPEL, m_intakeExpelXmlString, StateType::INTAKE_STATE, false};







};


#include <mechanisms/MechanismFactory.h>
#include <mechanisms/conveyor/ConveyorStateMgr.h>
#include <TeleopControl.h>

using namespace std;

ConveyorStateMgr* ConveyorStateMgr::m_instance = nullptr;
ConveyorStateMgr* ConveyorStateMgr::GetInstance(){
    if(ConveyorStateMgr::m_instance=nullptr){
        auto mechFactory = MechanismFactory::GetMechanismFactory();
        auto conveyor = mechFactory->getConveyor();
        if (conveyor !=nullptr){
            ConveyorStateMgr::m_instance=new ConveyorStateMgr();
        }
    }
    return ConveyorStateMgr::m_instance;
}

ConveyorStateMgr::ConveyorStateMgr() : StateMgr(),
                    m_conveyor(MechanismFactory::GetMechanismFactory()->getConveyor()),
                    m_currentstate(CONVEYORSTATE::OFF),
                    m_targetstate(CONVEYORSTATE::OFF)
{
    map<string, StateStruc> stateMap;
    stateMap["OFF"] = m_offState;
    stateMap["LIFTING"] = m_liftingState;
    stateMap["DELIFTING"] = m_deliftingState;

    Init(m_conveyor, stateMap);
    if (m_conveyor != nullptr){
        m_conveyor->AddStateMgr(this);
    }
    
}



void ConveyorStateMgr::CheckForStateTransition(){
    if  (m_conveyor != nullptr){

    m_currentstate = static_cast<CONVEYORSTATE>(GetCurrentState());
        m_targetstate = m_currentstate;

        auto controller = TeleopControl::GetInstance();
        if (controller!=nullptr)
        {
            if(controller->IsButtonPressed(TeleopControl::FUNCTION_IDENTIFIER::INTAKE_BALLS)){
                m_targetstate= CONVEYORSTATE::LIFTING;
            }            
            else if(controller->IsButtonPressed(TeleopControl::FUNCTION_IDENTIFIER::DELIVER_BALLS)){
                m_targetstate= CONVEYORSTATE::LIFTING;
            } else{
                m_targetstate=CONVEYORSTATE::OFF;
            }
        }

        

        if (m_targetstate != m_currentstate){
            SetCurrentState(m_targetstate, true);
        }
    }
}

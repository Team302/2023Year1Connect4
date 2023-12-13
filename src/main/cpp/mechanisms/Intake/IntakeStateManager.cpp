
#include <mechanisms/Intake/IntakeStateManager.h>
#include <TeleopControl.h>
#include <utils/Logger.h>
#include <mechanisms/MechanismFactory.h>


using namespace std;

IntakeStateMgr* IntakeStateMgr::m_instance = nullptr;
IntakeStateMgr* IntakeStateMgr::GetInstance()
{
    if (IntakeStateMgr::m_instance == nullptr)
    {
        auto mechFactory = MechanismFactory::GetMechanismFactory();
        auto inake = mechFactory->
        if (intake != nullptr)
        {
            IntakeStateMgr::m_instance = new IntakeStateMgr();

    
        }
    
    
    
    
    }
    return IntakeStateMgr::m_instance;



}

IntakeMgr::IntakeStateMgr() : StateMgr(),
                            m_intake(MechanismFactory::GetMechanismFactory()->GetIntake())



#include <auton/PrimitiveParams.h>
#include <mechanisms/base/StateMgr.h>
#include <mechanisms/MechanismFactory.h>
#include <mechanisms/Delivery/Deliverystatemanager.h>
// #include <
using namespace std;

DeliveryStateMgr* DeliveryStateMgr::m_instance = nullptr;
DeliveryStateMgr* DeliveryStateMgr::GetInstance()
{
    if ( DeliveryStateMgr::m_instance == nullptr)
    {
        auto mechFactory = MechanismFactory::GetMechanismFactory();
        auto delivery = mechFactory->GetIntake();
        if (delivery != nullptr)
        {
            DeliveryStateMgr::m_instance = new Delivery 
        }

    }
}
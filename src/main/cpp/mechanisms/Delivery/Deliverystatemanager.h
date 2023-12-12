#pragma once

#include <mechanisms/base/StateMgr.h>
#include <mechanisms/Delivery/Delivery.h>
#include <mechanisms/StateStruc.h>


class DeliveryStateMgr : public StateMgr 
{
    public:
    enum DELIVERY_STATE
    {
        OFF,
        DELIVERING
    };

    const std::map<const std::string, DELIVERY_STATE> m_deliveryXmlStringToStateEnumMap{ 
        {"DELIVERY_OFF", DELIVERY_STATE::OFF},
        {"DELIVERY_DELIVERING", DELIVERY_STATE::DELIVERING}
    };
    static DeliveryStateMgr* GetInstance();
void CheckForStateTransition() override;

private:
DeliveryStateMgr();
~DeliveryStateMgr() = default;

Delivery* m_delivery;

static DeliveryStateMgr* m_instance;
const StateStruc m_offState = {DELIVERY_STATE::OFF, "DELIVERY_OFF", StateType::DELIVERY, true};
const StateStruc m_deliveringState = {DELIVERY_STATE::DELIVERING, "DELIVERY_DELIVERING", StateType::DELIVERY, false};


};

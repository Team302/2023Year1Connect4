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
        {"DEIVERY_OFF", DELIVERY_STATE::OFF},
        {"DEIVERY_DELIVERING", DELIVERY_STATE::DELIVERING}
    };
};

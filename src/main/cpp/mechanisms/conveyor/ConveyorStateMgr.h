#pragma once

#include <mechanisms/base/StateMgr.h>
#include <mechanisms/conveyor/Conveyor.h>
#include <mechanisms/StateStruc.h>

class ConveyorStateMgr : public StateMgr {
    public:
    enum CONVEYORSTATE {
        OFF,
        LIFTING,
        DELIFTING
    };
    const std::map<const std::string, CONVEYORSTATE> m_conveyorXmlStringToStateEnumMap{
{"OFF", CONVEYORSTATE::OFF},
{"LIFTING", CONVEYORSTATE::LIFTING},
{"DELIFTING", CONVEYORSTATE::DELIFTING}
    };

};


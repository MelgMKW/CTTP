#ifndef _DEBUGPANEL_
#define _DEBUGPANEL_
#include <kamek.hpp>
#include <game/Kart/KartManager.hpp>
#include <game/UI/SectionMgr/SectionMgr.hpp>
#include <Pulsar/UI/CtrlRaceBase/CustomCtrlRaceBase.hpp>
#include <CTTP.hpp>

//Debug Panel
namespace CTTP {
namespace UI {
class CtrlRaceDebug : public CtrlRaceBase {
public:
    void OnUpdate() override;
    void InitSelf() override;
    static u32 Count();
    static void Create(Page& page, u32 index, u32 count);
private:
    CtrlRaceDebug() : framesOffroad(0) {}
    void Load(DebugSettingPANEL type);
    DebugSettingPANEL type;
    u32 framesOffroad;
    float minOffSpeed;
};
}//namespace UI
}//namespace CTTP

#endif
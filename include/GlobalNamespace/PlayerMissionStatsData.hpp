// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerMissionStatsData
  class PlayerMissionStatsData : public ::Il2CppObject {
    public:
    // private System.String _missionId
    // Offset: 0x10
    ::Il2CppString* missionId;
    // private System.Boolean _cleared
    // Offset: 0x18
    bool cleared;
    // public System.String get_missionId()
    // Offset: 0xBC9AD0
    ::Il2CppString* get_missionId();
    // public System.Boolean get_cleared()
    // Offset: 0xBC9AD8
    bool get_cleared();
    // public System.Void set_cleared(System.Boolean value)
    // Offset: 0xBC9AE0
    void set_cleared(bool value);
    // public System.Void .ctor(System.String missionId, System.Boolean cleared)
    // Offset: 0xBC5AD4
    static PlayerMissionStatsData* New_ctor(::Il2CppString* missionId, bool cleared);
  }; // PlayerMissionStatsData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerMissionStatsData*, "", "PlayerMissionStatsData");
#pragma pack(pop)
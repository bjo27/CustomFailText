// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ShaderWarmupSceneSetupData
  class ShaderWarmupSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private ScenesTransitionSetupDataSO <nextScenesTransitionSetupData>k__BackingField
    // Offset: 0x10
    GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // public ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData()
    // Offset: 0xC19610
    GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();
    // private System.Void set_nextScenesTransitionSetupData(ScenesTransitionSetupDataSO value)
    // Offset: 0xC19618
    void set_nextScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO* value);
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0xC19620
    static ShaderWarmupSceneSetupData* New_ctor(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);
  }; // ShaderWarmupSceneSetupData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderWarmupSceneSetupData*, "", "ShaderWarmupSceneSetupData");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppStaticSettingsSO
  class AppStaticSettingsSO : public UnityEngine::ScriptableObject {
    public:
    // public System.Boolean requirePrivacyPolicy
    // Offset: 0x18
    bool requirePrivacyPolicy;
    // public System.Boolean enable360DegreeLevels
    // Offset: 0x19
    bool enable360DegreeLevels;
    // public System.Void .ctor()
    // Offset: 0x196DA50
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AppStaticSettingsSO* New_ctor();
  }; // AppStaticSettingsSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppStaticSettingsSO*, "", "AppStaticSettingsSO");
#pragma pack(pop)
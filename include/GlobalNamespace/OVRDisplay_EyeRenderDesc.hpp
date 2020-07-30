// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRDisplay
#include "GlobalNamespace/OVRDisplay.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: OVRDisplay/EyeFov
#include "GlobalNamespace/OVRDisplay_EyeFov.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRDisplay/EyeRenderDesc
  struct OVRDisplay::EyeRenderDesc : public System::ValueType {
    public:
    // public UnityEngine.Vector2 resolution
    // Offset: 0x0
    UnityEngine::Vector2 resolution;
    // public UnityEngine.Vector2 fov
    // Offset: 0x8
    UnityEngine::Vector2 fov;
    // public OVRDisplay/EyeFov fullFov
    // Offset: 0x10
    GlobalNamespace::OVRDisplay::EyeFov fullFov;
    // Creating value type constructor for type: EyeRenderDesc
    EyeRenderDesc(UnityEngine::Vector2 resolution_ = {}, UnityEngine::Vector2 fov_ = {}, GlobalNamespace::OVRDisplay::EyeFov fullFov_ = {}) : resolution{resolution_}, fov{fov_}, fullFov{fullFov_} {}
  }; // OVRDisplay/EyeRenderDesc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDisplay::EyeRenderDesc, "", "OVRDisplay/EyeRenderDesc");
#pragma pack(pop)
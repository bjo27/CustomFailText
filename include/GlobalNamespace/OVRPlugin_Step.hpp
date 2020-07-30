// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Step
  struct OVRPlugin::Step : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/Step Render
    static constexpr const int Render = -1;
    // Get static field: static public OVRPlugin/Step Render
    static GlobalNamespace::OVRPlugin::Step _get_Render();
    // Set static field: static public OVRPlugin/Step Render
    static void _set_Render(GlobalNamespace::OVRPlugin::Step value);
    // static field const value: static public OVRPlugin/Step Physics
    static constexpr const int Physics = 0;
    // Get static field: static public OVRPlugin/Step Physics
    static GlobalNamespace::OVRPlugin::Step _get_Physics();
    // Set static field: static public OVRPlugin/Step Physics
    static void _set_Physics(GlobalNamespace::OVRPlugin::Step value);
    // Creating value type constructor for type: Step
    Step(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/Step
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Step, "", "OVRPlugin/Step");
#pragma pack(pop)
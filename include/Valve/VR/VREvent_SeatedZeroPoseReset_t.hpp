// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VREvent_SeatedZeroPoseReset_t
  struct VREvent_SeatedZeroPoseReset_t : public System::ValueType {
    public:
    // public System.Boolean bResetBySystemMenu
    // Offset: 0x0
    bool bResetBySystemMenu;
    // Creating value type constructor for type: VREvent_SeatedZeroPoseReset_t
    VREvent_SeatedZeroPoseReset_t(bool bResetBySystemMenu_ = {}) : bResetBySystemMenu{bResetBySystemMenu_} {}
  }; // Valve.VR.VREvent_SeatedZeroPoseReset_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_SeatedZeroPoseReset_t, "Valve.VR", "VREvent_SeatedZeroPoseReset_t");
#pragma pack(pop)
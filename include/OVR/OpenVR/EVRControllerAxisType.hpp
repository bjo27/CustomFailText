// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:58 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EVRControllerAxisType
  struct EVRControllerAxisType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_None
    static constexpr const int k_eControllerAxis_None = 0;
    // Get static field: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_None
    static OVR::OpenVR::EVRControllerAxisType _get_k_eControllerAxis_None();
    // Set static field: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_None
    static void _set_k_eControllerAxis_None(OVR::OpenVR::EVRControllerAxisType value);
    // static field const value: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_TrackPad
    static constexpr const int k_eControllerAxis_TrackPad = 1;
    // Get static field: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_TrackPad
    static OVR::OpenVR::EVRControllerAxisType _get_k_eControllerAxis_TrackPad();
    // Set static field: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_TrackPad
    static void _set_k_eControllerAxis_TrackPad(OVR::OpenVR::EVRControllerAxisType value);
    // static field const value: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_Joystick
    static constexpr const int k_eControllerAxis_Joystick = 2;
    // Get static field: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_Joystick
    static OVR::OpenVR::EVRControllerAxisType _get_k_eControllerAxis_Joystick();
    // Set static field: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_Joystick
    static void _set_k_eControllerAxis_Joystick(OVR::OpenVR::EVRControllerAxisType value);
    // static field const value: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_Trigger
    static constexpr const int k_eControllerAxis_Trigger = 3;
    // Get static field: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_Trigger
    static OVR::OpenVR::EVRControllerAxisType _get_k_eControllerAxis_Trigger();
    // Set static field: static public OVR.OpenVR.EVRControllerAxisType k_eControllerAxis_Trigger
    static void _set_k_eControllerAxis_Trigger(OVR::OpenVR::EVRControllerAxisType value);
    // Creating value type constructor for type: EVRControllerAxisType
    EVRControllerAxisType(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRControllerAxisType
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRControllerAxisType, "OVR.OpenVR", "EVRControllerAxisType");
#pragma pack(pop)
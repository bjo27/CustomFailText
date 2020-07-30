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
  // Autogenerated type: OVR.OpenVR.EVRScreenshotType
  struct EVRScreenshotType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRScreenshotType None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType None
    static OVR::OpenVR::EVRScreenshotType _get_None();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType None
    static void _set_None(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType Mono
    static constexpr const int Mono = 1;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType Mono
    static OVR::OpenVR::EVRScreenshotType _get_Mono();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType Mono
    static void _set_Mono(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType Stereo
    static constexpr const int Stereo = 2;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType Stereo
    static OVR::OpenVR::EVRScreenshotType _get_Stereo();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType Stereo
    static void _set_Stereo(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType Cubemap
    static constexpr const int Cubemap = 3;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType Cubemap
    static OVR::OpenVR::EVRScreenshotType _get_Cubemap();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType Cubemap
    static void _set_Cubemap(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType MonoPanorama
    static constexpr const int MonoPanorama = 4;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType MonoPanorama
    static OVR::OpenVR::EVRScreenshotType _get_MonoPanorama();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType MonoPanorama
    static void _set_MonoPanorama(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType StereoPanorama
    static constexpr const int StereoPanorama = 5;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType StereoPanorama
    static OVR::OpenVR::EVRScreenshotType _get_StereoPanorama();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType StereoPanorama
    static void _set_StereoPanorama(OVR::OpenVR::EVRScreenshotType value);
    // Creating value type constructor for type: EVRScreenshotType
    EVRScreenshotType(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRScreenshotType
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRScreenshotType, "OVR.OpenVR", "EVRScreenshotType");
#pragma pack(pop)
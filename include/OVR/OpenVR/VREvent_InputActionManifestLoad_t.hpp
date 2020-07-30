// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VREvent_InputActionManifestLoad_t
  struct VREvent_InputActionManifestLoad_t : public System::ValueType {
    public:
    // public System.UInt64 pathAppKey
    // Offset: 0x0
    uint64_t pathAppKey;
    // public System.UInt64 pathMessage
    // Offset: 0x8
    uint64_t pathMessage;
    // public System.UInt64 pathMessageParam
    // Offset: 0x10
    uint64_t pathMessageParam;
    // public System.UInt64 pathManifestPath
    // Offset: 0x18
    uint64_t pathManifestPath;
    // Creating value type constructor for type: VREvent_InputActionManifestLoad_t
    VREvent_InputActionManifestLoad_t(uint64_t pathAppKey_ = {}, uint64_t pathMessage_ = {}, uint64_t pathMessageParam_ = {}, uint64_t pathManifestPath_ = {}) : pathAppKey{pathAppKey_}, pathMessage{pathMessage_}, pathMessageParam{pathMessageParam_}, pathManifestPath{pathManifestPath_} {}
  }; // OVR.OpenVR.VREvent_InputActionManifestLoad_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_InputActionManifestLoad_t, "OVR.OpenVR", "VREvent_InputActionManifestLoad_t");
#pragma pack(pop)
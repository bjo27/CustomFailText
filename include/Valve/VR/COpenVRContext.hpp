// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.COpenVRContext
  struct COpenVRContext : public System::ValueType {
    public:
    // public System.IntPtr m_pVRSystem
    // Offset: 0x0
    System::IntPtr m_pVRSystem;
    // public System.IntPtr m_pVRChaperone
    // Offset: 0x8
    System::IntPtr m_pVRChaperone;
    // public System.IntPtr m_pVRChaperoneSetup
    // Offset: 0x10
    System::IntPtr m_pVRChaperoneSetup;
    // public System.IntPtr m_pVRCompositor
    // Offset: 0x18
    System::IntPtr m_pVRCompositor;
    // public System.IntPtr m_pVROverlay
    // Offset: 0x20
    System::IntPtr m_pVROverlay;
    // public System.IntPtr m_pVRResources
    // Offset: 0x28
    System::IntPtr m_pVRResources;
    // public System.IntPtr m_pVRRenderModels
    // Offset: 0x30
    System::IntPtr m_pVRRenderModels;
    // public System.IntPtr m_pVRExtendedDisplay
    // Offset: 0x38
    System::IntPtr m_pVRExtendedDisplay;
    // public System.IntPtr m_pVRSettings
    // Offset: 0x40
    System::IntPtr m_pVRSettings;
    // public System.IntPtr m_pVRApplications
    // Offset: 0x48
    System::IntPtr m_pVRApplications;
    // public System.IntPtr m_pVRTrackedCamera
    // Offset: 0x50
    System::IntPtr m_pVRTrackedCamera;
    // public System.IntPtr m_pVRScreenshots
    // Offset: 0x58
    System::IntPtr m_pVRScreenshots;
    // public System.IntPtr m_pVRDriverManager
    // Offset: 0x60
    System::IntPtr m_pVRDriverManager;
    // Creating value type constructor for type: COpenVRContext
    COpenVRContext(System::IntPtr m_pVRSystem_ = {}, System::IntPtr m_pVRChaperone_ = {}, System::IntPtr m_pVRChaperoneSetup_ = {}, System::IntPtr m_pVRCompositor_ = {}, System::IntPtr m_pVROverlay_ = {}, System::IntPtr m_pVRResources_ = {}, System::IntPtr m_pVRRenderModels_ = {}, System::IntPtr m_pVRExtendedDisplay_ = {}, System::IntPtr m_pVRSettings_ = {}, System::IntPtr m_pVRApplications_ = {}, System::IntPtr m_pVRTrackedCamera_ = {}, System::IntPtr m_pVRScreenshots_ = {}, System::IntPtr m_pVRDriverManager_ = {}) : m_pVRSystem{m_pVRSystem_}, m_pVRChaperone{m_pVRChaperone_}, m_pVRChaperoneSetup{m_pVRChaperoneSetup_}, m_pVRCompositor{m_pVRCompositor_}, m_pVROverlay{m_pVROverlay_}, m_pVRResources{m_pVRResources_}, m_pVRRenderModels{m_pVRRenderModels_}, m_pVRExtendedDisplay{m_pVRExtendedDisplay_}, m_pVRSettings{m_pVRSettings_}, m_pVRApplications{m_pVRApplications_}, m_pVRTrackedCamera{m_pVRTrackedCamera_}, m_pVRScreenshots{m_pVRScreenshots_}, m_pVRDriverManager{m_pVRDriverManager_} {}
  }; // Valve.VR.COpenVRContext
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::COpenVRContext, "Valve.VR", "COpenVRContext");
#pragma pack(pop)
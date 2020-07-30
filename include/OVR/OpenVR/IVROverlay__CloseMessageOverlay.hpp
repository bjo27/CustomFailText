// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:56 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_CloseMessageOverlay
  class IVROverlay::_CloseMessageOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x150773C
    static IVROverlay::_CloseMessageOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke()
    // Offset: 0x1507750
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x150795C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1507988
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_CloseMessageOverlay
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_CloseMessageOverlay*, "OVR.OpenVR", "IVROverlay/_CloseMessageOverlay");
#pragma pack(pop)
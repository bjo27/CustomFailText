// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting
  class IVRSystem::_AcknowledgeQuit_Exiting : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B8F1C
    static IVRSystem::_AcknowledgeQuit_Exiting* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke()
    // Offset: 0x16B8F30
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B913C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16B9168
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting*, "Valve.VR", "IVRSystem/_AcknowledgeQuit_Exiting");
#pragma pack(pop)
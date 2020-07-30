// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVRSystem
  class CVRSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Utils/SystemFn
  class SteamVR_Utils::SystemFn : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFC3ED8
    static SteamVR_Utils::SystemFn* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Object Invoke(Valve.VR.CVRSystem system, System.Object[] args)
    // Offset: 0xFC11C8
    ::Il2CppObject* Invoke(Valve::VR::CVRSystem* system, ::Array<::Il2CppObject*>* args);
    // public System.IAsyncResult BeginInvoke(Valve.VR.CVRSystem system, System.Object[] args, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFC3EEC
    System::IAsyncResult* BeginInvoke(Valve::VR::CVRSystem* system, ::Array<::Il2CppObject*>* args, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0xFC3F1C
    ::Il2CppObject* EndInvoke(System::IAsyncResult* result);
  }; // SteamVR_Utils/SystemFn
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Utils::SystemFn*, "", "SteamVR_Utils/SystemFn");
#pragma pack(pop)
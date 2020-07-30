// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRResources
#include "Valve/VR/IVRResources.hpp"
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
  // Autogenerated type: Valve.VR.IVRResources/_LoadSharedResource
  class IVRResources::_LoadSharedResource : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B35AC
    static IVRResources::_LoadSharedResource* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen)
    // Offset: 0x16B35C0
    uint Invoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen);
    // public System.IAsyncResult BeginInvoke(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B39F0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x16B3A90
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRResources/_LoadSharedResource
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRResources::_LoadSharedResource*, "Valve.VR", "IVRResources/_LoadSharedResource");
#pragma pack(pop)
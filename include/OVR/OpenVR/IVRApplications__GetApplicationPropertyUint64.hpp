// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRApplications/_GetApplicationPropertyUint64
  class IVRApplications::_GetApplicationPropertyUint64 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBCDB0
    static IVRApplications::_GetApplicationPropertyUint64* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt64 Invoke(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, OVR.OpenVR.EVRApplicationError peError)
    // Offset: 0xEAF4EC
    uint64_t Invoke(::Il2CppString* pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, OVR::OpenVR::EVRApplicationError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, OVR.OpenVR.EVRApplicationError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBCDC4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, OVR::OpenVR::EVRApplicationError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(OVR.OpenVR.EVRApplicationError peError, System.IAsyncResult result)
    // Offset: 0xEBCE80
    uint64_t EndInvoke(OVR::OpenVR::EVRApplicationError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_GetApplicationPropertyUint64
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyUint64");
#pragma pack(pop)
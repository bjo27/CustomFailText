// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Autogenerated type: Assets.OVR.Scripts.FixMethodDelegate
  class FixMethodDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEAB2B4
    static FixMethodDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(UnityEngine.Object obj, System.Boolean isLastInSet, System.Int32 selectedIndex)
    // Offset: 0xEAB2C8
    void Invoke(UnityEngine::Object* obj, bool isLastInSet, int selectedIndex);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Object obj, System.Boolean isLastInSet, System.Int32 selectedIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEAB734
    System::IAsyncResult* BeginInvoke(UnityEngine::Object* obj, bool isLastInSet, int selectedIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xEAB7F4
    void EndInvoke(System::IAsyncResult* result);
  }; // Assets.OVR.Scripts.FixMethodDelegate
}
DEFINE_IL2CPP_ARG_TYPE(Assets::OVR::Scripts::FixMethodDelegate*, "Assets.OVR.Scripts", "FixMethodDelegate");
#pragma pack(pop)
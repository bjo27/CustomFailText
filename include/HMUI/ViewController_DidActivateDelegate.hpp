// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
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
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ViewController/DidActivateDelegate
  class ViewController::DidActivateDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x10D85A4
    static ViewController::DidActivateDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0x10D6E98
    void Invoke(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.IAsyncResult BeginInvoke(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x10D85B8
    System::IAsyncResult* BeginInvoke(bool firstActivation, HMUI::ViewController::ActivationType activationType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x10D8668
    void EndInvoke(System::IAsyncResult* result);
  }; // HMUI.ViewController/DidActivateDelegate
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController::DidActivateDelegate*, "HMUI", "ViewController/DidActivateDelegate");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayRenderModel
  class IVROverlay::_GetOverlayRenderModel : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F64A4
    static IVROverlay::_GetOverlayRenderModel* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, Valve.VR.HmdColor_t pColor, Valve.VR.EVROverlayError pError)
    // Offset: 0x15F64B8
    uint Invoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::HmdColor_t& pColor, Valve::VR::EVROverlayError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, Valve.VR.HmdColor_t pColor, Valve.VR.EVROverlayError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F6780
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::HmdColor_t& pColor, Valve::VR::EVROverlayError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(Valve.VR.HmdColor_t pColor, Valve.VR.EVROverlayError pError, System.IAsyncResult result)
    // Offset: 0x15F6880
    uint EndInvoke(Valve::VR::HmdColor_t& pColor, Valve::VR::EVROverlayError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayRenderModel
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayRenderModel*, "Valve.VR", "IVROverlay/_GetOverlayRenderModel");
#pragma pack(pop)
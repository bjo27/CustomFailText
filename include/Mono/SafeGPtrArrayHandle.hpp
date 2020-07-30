// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Mono.RuntimeGPtrArrayHandle
#include "Mono/RuntimeGPtrArrayHandle.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.SafeGPtrArrayHandle
  struct SafeGPtrArrayHandle : public System::ValueType, public System::IDisposable {
    public:
    // private Mono.RuntimeGPtrArrayHandle handle
    // Offset: 0x0
    Mono::RuntimeGPtrArrayHandle handle;
    // Creating value type constructor for type: SafeGPtrArrayHandle
    SafeGPtrArrayHandle(Mono::RuntimeGPtrArrayHandle handle_ = {}) : handle{handle_} {}
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xA3CD88
    static SafeGPtrArrayHandle* New_ctor(System::IntPtr ptr);
    // System.Int32 get_Length()
    // Offset: 0xA3CDDC
    int get_Length();
    // System.IntPtr get_Item(System.Int32 i)
    // Offset: 0xA3CDF8
    System::IntPtr get_Item(int i);
    // public System.Void Dispose()
    // Offset: 0xA3CDB4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Mono.SafeGPtrArrayHandle
}
DEFINE_IL2CPP_ARG_TYPE(Mono::SafeGPtrArrayHandle, "Mono", "SafeGPtrArrayHandle");
#pragma pack(pop)
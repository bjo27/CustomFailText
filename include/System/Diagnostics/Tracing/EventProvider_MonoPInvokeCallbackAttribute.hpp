// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Diagnostics.Tracing.EventProvider
#include "System/Diagnostics/Tracing/EventProvider.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventProvider/MonoPInvokeCallbackAttribute
  class EventProvider::MonoPInvokeCallbackAttribute : public System::Attribute {
    public:
    // public System.Void .ctor(System.Type t)
    // Offset: 0xC8AFE8
    static EventProvider::MonoPInvokeCallbackAttribute* New_ctor(System::Type* t);
  }; // System.Diagnostics.Tracing.EventProvider/MonoPInvokeCallbackAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventProvider::MonoPInvokeCallbackAttribute*, "System.Diagnostics.Tracing", "EventProvider/MonoPInvokeCallbackAttribute");
#pragma pack(pop)
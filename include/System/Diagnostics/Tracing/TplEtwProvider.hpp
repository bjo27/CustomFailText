// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Guid because it is already included!
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.TplEtwProvider
  class TplEtwProvider : public System::Diagnostics::Tracing::EventSource {
    public:
    // Nested type: System::Diagnostics::Tracing::TplEtwProvider::Keywords
    class Keywords;
    // Get static field: static public System.Diagnostics.Tracing.TplEtwProvider Log
    static System::Diagnostics::Tracing::TplEtwProvider* _get_Log();
    // Set static field: static public System.Diagnostics.Tracing.TplEtwProvider Log
    static void _set_Log(System::Diagnostics::Tracing::TplEtwProvider* value);
    // public System.Boolean get_Debug()
    // Offset: 0xD871E4
    bool get_Debug();
    // public System.Void DebugFacilityMessage(System.String Facility, System.String Message)
    // Offset: 0xD871F4
    void DebugFacilityMessage(::Il2CppString* Facility, ::Il2CppString* Message);
    // public System.Void DebugFacilityMessage1(System.String Facility, System.String Message, System.String Arg)
    // Offset: 0xD87208
    void DebugFacilityMessage1(::Il2CppString* Facility, ::Il2CppString* Message, ::Il2CppString* Arg);
    // public System.Void SetActivityId(System.Guid Id)
    // Offset: 0xD87220
    void SetActivityId(System::Guid Id);
    // public System.Void .ctor()
    // Offset: 0xD87310
    // Implemented from: System.Diagnostics.Tracing.EventSource
    // Base method: System.Void EventSource::.ctor()
    // Base method: System.Void Object::.ctor()
    static TplEtwProvider* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xD87378
    // Implemented from: System.Diagnostics.Tracing.EventSource
    // Base method: System.Void EventSource::.cctor()
    static void _cctor();
  }; // System.Diagnostics.Tracing.TplEtwProvider
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TplEtwProvider*, "System.Diagnostics.Tracing", "TplEtwProvider");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.CustomConstantAttribute
#include "System/Runtime/CompilerServices/CustomConstantAttribute.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.DateTimeConstantAttribute
  class DateTimeConstantAttribute : public System::Runtime::CompilerServices::CustomConstantAttribute {
    public:
    // private System.DateTime date
    // Offset: 0x10
    System::DateTime date;
    // public override System.Object get_Value()
    // Offset: 0x114FAD8
    // Implemented from: System.Runtime.CompilerServices.CustomConstantAttribute
    // Base method: System.Object CustomConstantAttribute::get_Value()
    ::Il2CppObject* get_Value();
  }; // System.Runtime.CompilerServices.DateTimeConstantAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::DateTimeConstantAttribute*, "System.Runtime.CompilerServices", "DateTimeConstantAttribute");
#pragma pack(pop)
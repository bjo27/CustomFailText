// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.Volatile
  class Volatile : public ::Il2CppObject {
    public:
    // static public System.Boolean Read(System.Boolean location)
    // Offset: 0xCD8124
    static bool Read(bool& location);
    // static public T Read(T location)
    // Offset: 0xD392D4
    template<class T>
    static T Read(T& location) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<T>("System.Threading", "Volatile", "Read", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, location));
    }
    // static public System.Void Write(T location, T value)
    // Offset: 0xC46894
    template<class T>
    static void Write(T& location, T value) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("System.Threading", "Volatile", "Write", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, location, value));
    }
  }; // System.Threading.Volatile
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Volatile*, "System.Threading", "Volatile");
#pragma pack(pop)
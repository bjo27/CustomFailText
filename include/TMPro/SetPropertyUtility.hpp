// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IEquatable`1<T>
  template<typename T>
  class IEquatable_1;
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.SetPropertyUtility
  class SetPropertyUtility : public ::Il2CppObject {
    public:
    // static public System.Boolean SetColor(UnityEngine.Color currentValue, UnityEngine.Color newValue)
    // Offset: 0xB66C88
    static bool SetColor(UnityEngine::Color& currentValue, UnityEngine::Color newValue);
    // static public System.Boolean SetEquatableStruct(T currentValue, T newValue)
    // Offset: 0xE4C4D8
    template<class T>
    static bool SetEquatableStruct(T& currentValue, T newValue) {
      static_assert(std::is_convertible_v<T, System::IEquatable_1<T>*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("TMPro", "SetPropertyUtility", "SetEquatableStruct", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue));
    }
    // static public System.Boolean SetStruct(T currentValue, T newValue)
    // Offset: 0xE4C5AC
    template<class T>
    static bool SetStruct(T& currentValue, T newValue) {
      static_assert(std::is_convertible_v<T, System::ValueType*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("TMPro", "SetPropertyUtility", "SetStruct", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue));
    }
    // static public System.Boolean SetClass(T currentValue, T newValue)
    // Offset: 0xE4C478
    template<class T>
    static bool SetClass(T& currentValue, T newValue) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("TMPro", "SetPropertyUtility", "SetClass", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue));
    }
  }; // TMPro.SetPropertyUtility
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::SetPropertyUtility*, "TMPro", "SetPropertyUtility");
#pragma pack(pop)
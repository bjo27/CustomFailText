// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:01 PM
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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ArrayHelpers
  class ArrayHelpers : public ::Il2CppObject {
    public:
    // static public T[] CreateOrEnlargeArray(T[] array, System.Int32 minimumCapacity)
    // Offset: 0xD437EC
    template<class T>
    static ::Array<T>* CreateOrEnlargeArray(::Array<T>* array, int minimumCapacity) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Array<T>*>("", "ArrayHelpers", "CreateOrEnlargeArray", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, array, minimumCapacity));
    }
  }; // ArrayHelpers
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArrayHelpers*, "", "ArrayHelpers");
#pragma pack(pop)
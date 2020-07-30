// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Linq.OrderedEnumerable`1
#include "System/Linq/OrderedEnumerable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
  // Skipping declaration: IEnumerable`1 because it is already included!
}
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Forward declaring type: EnumerableSorter`1<TElement>
  template<typename TElement>
  class EnumerableSorter_1;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.OrderedEnumerable`2
  template<typename TElement, typename TKey>
  class OrderedEnumerable_2 : public System::Linq::OrderedEnumerable_1<TElement> {
    public:
    // System.Linq.OrderedEnumerable`1<TElement> parent
    // Offset: 0x0
    System::Linq::OrderedEnumerable_1<TElement>* parent;
    // System.Func`2<TElement,TKey> keySelector
    // Offset: 0x0
    System::Func_2<TElement, TKey>* keySelector;
    // System.Collections.Generic.IComparer`1<TKey> comparer
    // Offset: 0x0
    System::Collections::Generic::IComparer_1<TKey>* comparer;
    // System.Boolean descending
    // Offset: 0x0
    bool descending;
    // System.Void .ctor(System.Collections.Generic.IEnumerable`1<TElement> source, System.Func`2<TElement,TKey> keySelector, System.Collections.Generic.IComparer`1<TKey> comparer, System.Boolean descending)
    // Offset: 0x12C5F30
    static OrderedEnumerable_2<TElement, TKey>* New_ctor(System::Collections::Generic::IEnumerable_1<TElement>* source, System::Func_2<TElement, TKey>* keySelector, System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
      return (OrderedEnumerable_2<TElement, TKey>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OrderedEnumerable_2<TElement, TKey>*>::get(), source, keySelector, comparer, descending));
    }
    // override System.Linq.EnumerableSorter`1<TElement> GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement> next)
    // Offset: 0x12C6058
    // Implemented from: System.Linq.OrderedEnumerable`1
    // Base method: System.Linq.EnumerableSorter`1<TElement> OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement> next)
    System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(System::Linq::EnumerableSorter_1<TElement>* next) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Linq::EnumerableSorter_1<TElement>*>(this, "GetEnumerableSorter", next));
    }
  }; // System.Linq.OrderedEnumerable`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::OrderedEnumerable_2, "System.Linq", "OrderedEnumerable`2");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
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
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Forward declaring type: IOrderedEnumerable`1<TElement>
  template<typename TElement>
  class IOrderedEnumerable_1;
  // Forward declaring type: IGrouping`2<TElement, TKey>
  template<typename TElement, typename TKey>
  class IGrouping_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Enumerable
  class Enumerable : public ::Il2CppObject {
    public:
    // Nested type: System::Linq::Enumerable::Iterator_1<TSource>
    template<typename TSource>
    class Iterator_1;
    // Nested type: System::Linq::Enumerable::WhereEnumerableIterator_1<TSource>
    template<typename TSource>
    class WhereEnumerableIterator_1;
    // Nested type: System::Linq::Enumerable::WhereArrayIterator_1<TSource>
    template<typename TSource>
    class WhereArrayIterator_1;
    // Nested type: System::Linq::Enumerable::WhereListIterator_1<TSource>
    template<typename TSource>
    class WhereListIterator_1;
    // Nested type: System::Linq::Enumerable::WhereSelectEnumerableIterator_2<TResult, TSource>
    template<typename TResult, typename TSource>
    class WhereSelectEnumerableIterator_2;
    // Nested type: System::Linq::Enumerable::WhereSelectArrayIterator_2<TResult, TSource>
    template<typename TResult, typename TSource>
    class WhereSelectArrayIterator_2;
    // Nested type: System::Linq::Enumerable::WhereSelectListIterator_2<TResult, TSource>
    template<typename TResult, typename TSource>
    class WhereSelectListIterator_2;
    // Nested type: System::Linq::Enumerable::$$c__DisplayClass6_0_1<TSource>
    template<typename TSource>
    class $$c__DisplayClass6_0_1;
    // Nested type: System::Linq::Enumerable::$$c__DisplayClass7_0_3<TMiddle, TResult, TSource>
    template<typename TMiddle, typename TResult, typename TSource>
    class $$c__DisplayClass7_0_3;
    // Nested type: System::Linq::Enumerable::$SelectManyIterator$d__17_2<TResult, TSource>
    template<typename TResult, typename TSource>
    class $SelectManyIterator$d__17_2;
    // Nested type: System::Linq::Enumerable::$TakeIterator$d__25_1<TSource>
    template<typename TSource>
    class $TakeIterator$d__25_1;
    // Nested type: System::Linq::Enumerable::$SkipIterator$d__31_1<TSource>
    template<typename TSource>
    class $SkipIterator$d__31_1;
    // Nested type: System::Linq::Enumerable::$ConcatIterator$d__59_1<TSource>
    template<typename TSource>
    class $ConcatIterator$d__59_1;
    // Nested type: System::Linq::Enumerable::$DistinctIterator$d__68_1<TSource>
    template<typename TSource>
    class $DistinctIterator$d__68_1;
    // Nested type: System::Linq::Enumerable::$ExceptIterator$d__77_1<TSource>
    template<typename TSource>
    class $ExceptIterator$d__77_1;
    // Nested type: System::Linq::Enumerable::$ReverseIterator$d__79_1<TSource>
    template<typename TSource>
    class $ReverseIterator$d__79_1;
    // Nested type: System::Linq::Enumerable::$DefaultIfEmptyIterator$d__95_1<TSource>
    template<typename TSource>
    class $DefaultIfEmptyIterator$d__95_1;
    // Nested type: System::Linq::Enumerable::$OfTypeIterator$d__97_1<TResult>
    template<typename TResult>
    class $OfTypeIterator$d__97_1;
    // Nested type: System::Linq::Enumerable::$CastIterator$d__99_1<TResult>
    template<typename TResult>
    class $CastIterator$d__99_1;
    // Nested type: System::Linq::Enumerable::$RepeatIterator$d__117_1<TResult>
    template<typename TResult>
    class $RepeatIterator$d__117_1;
    // static public System.Collections.Generic.IEnumerable`1<TSource> Where(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xD05668
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* Where(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, bool>* predicate) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "Where", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, predicate));
    }
    // static public System.Collections.Generic.IEnumerable`1<TResult> Select(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TResult> selector)
    // Offset: 0xD003D4
    template<class TResult, class TSource>
    static System::Collections::Generic::IEnumerable_1<TResult>* Select(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TResult>* selector) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "Select", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, selector));
    }
    // static private System.Func`2<TSource,System.Boolean> CombinePredicates(System.Func`2<TSource,System.Boolean> predicate1, System.Func`2<TSource,System.Boolean> predicate2)
    // Offset: 0x166F010
    template<class TSource>
    static System::Func_2<TSource, bool>* CombinePredicates(System::Func_2<TSource, bool>* predicate1, System::Func_2<TSource, bool>* predicate2) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<System::Func_2<TSource, bool>*>("System.Linq", "Enumerable", "CombinePredicates", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, predicate1, predicate2)));
    }
    // static private System.Func`2<TSource,TResult> CombineSelectors(System.Func`2<TSource,TMiddle> selector1, System.Func`2<TMiddle,TResult> selector2)
    // Offset: 0x166FD58
    template<class TSource, class TResult, class TMiddle>
    static System::Func_2<TSource, TResult>* CombineSelectors(System::Func_2<TSource, TMiddle>* selector1, System::Func_2<TMiddle, TResult>* selector2) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<System::Func_2<TSource, TResult>*>("System.Linq", "Enumerable", "CombineSelectors", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMiddle>::get()}, selector1, selector2)));
    }
    // static public System.Collections.Generic.IEnumerable`1<TResult> SelectMany(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> selector)
    // Offset: 0xD034AC
    template<class TResult, class TSource>
    static System::Collections::Generic::IEnumerable_1<TResult>* SelectMany(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, System::Collections::Generic::IEnumerable_1<TResult>*>* selector) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "SelectMany", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, selector));
    }
    // static private System.Collections.Generic.IEnumerable`1<TResult> SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> selector)
    // Offset: 0xD0371C
    template<class TResult, class TSource>
    static System::Collections::Generic::IEnumerable_1<TResult>* SelectManyIterator(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, System::Collections::Generic::IEnumerable_1<TResult>*>* selector) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "SelectManyIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, selector));
    }
    // static public System.Collections.Generic.IEnumerable`1<TSource> Take(System.Collections.Generic.IEnumerable`1<TSource> source, System.Int32 count)
    // Offset: 0xD04AA8
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* Take(System::Collections::Generic::IEnumerable_1<TSource>* source, int count) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "Take", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, count));
    }
    // static private System.Collections.Generic.IEnumerable`1<TSource> TakeIterator(System.Collections.Generic.IEnumerable`1<TSource> source, System.Int32 count)
    // Offset: 0xD04B34
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* TakeIterator(System::Collections::Generic::IEnumerable_1<TSource>* source, int count) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "TakeIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, count));
    }
    // static public System.Collections.Generic.IEnumerable`1<TSource> Skip(System.Collections.Generic.IEnumerable`1<TSource> source, System.Int32 count)
    // Offset: 0xD04998
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* Skip(System::Collections::Generic::IEnumerable_1<TSource>* source, int count) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "Skip", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, count));
    }
    // static private System.Collections.Generic.IEnumerable`1<TSource> SkipIterator(System.Collections.Generic.IEnumerable`1<TSource> source, System.Int32 count)
    // Offset: 0xD04A24
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* SkipIterator(System::Collections::Generic::IEnumerable_1<TSource>* source, int count) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "SkipIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, count));
    }
    // static public System.Linq.IOrderedEnumerable`1<TSource> OrderBy(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector)
    // Offset: 0x11CC8AC
    template<class TSource, class TKey>
    static System::Linq::IOrderedEnumerable_1<TSource>* OrderBy(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Linq::IOrderedEnumerable_1<TSource>*>("System.Linq", "Enumerable", "OrderBy", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}, source, keySelector));
    }
    // static public System.Linq.IOrderedEnumerable`1<TSource> OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector)
    // Offset: 0x11CCB64
    template<class TSource, class TKey>
    static System::Linq::IOrderedEnumerable_1<TSource>* OrderByDescending(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Linq::IOrderedEnumerable_1<TSource>*>("System.Linq", "Enumerable", "OrderByDescending", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}, source, keySelector));
    }
    // static public System.Linq.IOrderedEnumerable`1<TSource> ThenBy(System.Linq.IOrderedEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector)
    // Offset: 0x11CCD48
    template<class TSource, class TKey>
    static System::Linq::IOrderedEnumerable_1<TSource>* ThenBy(System::Linq::IOrderedEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Linq::IOrderedEnumerable_1<TSource>*>("System.Linq", "Enumerable", "ThenBy", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}, source, keySelector));
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> GroupBy(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector)
    // Offset: 0xCF33F8
    template<class TKey, class TSource>
    static System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TSource>*>* GroupBy(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TSource>*>*>("System.Linq", "Enumerable", "GroupBy", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, keySelector)));
    }
    // static public System.Collections.Generic.IEnumerable`1<TSource> Concat(System.Collections.Generic.IEnumerable`1<TSource> first, System.Collections.Generic.IEnumerable`1<TSource> second)
    // Offset: 0xD03B0C
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* Concat(System::Collections::Generic::IEnumerable_1<TSource>* first, System::Collections::Generic::IEnumerable_1<TSource>* second) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "Concat", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, first, second));
    }
    // static private System.Collections.Generic.IEnumerable`1<TSource> ConcatIterator(System.Collections.Generic.IEnumerable`1<TSource> first, System.Collections.Generic.IEnumerable`1<TSource> second)
    // Offset: 0xD03C44
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* ConcatIterator(System::Collections::Generic::IEnumerable_1<TSource>* first, System::Collections::Generic::IEnumerable_1<TSource>* second) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "ConcatIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, first, second));
    }
    // static public System.Collections.Generic.IEnumerable`1<TSource> Distinct(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD03FA0
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* Distinct(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "Distinct", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static private System.Collections.Generic.IEnumerable`1<TSource> DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource> source, System.Collections.Generic.IEqualityComparer`1<TSource> comparer)
    // Offset: 0xD041C0
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* DistinctIterator(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "DistinctIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, comparer));
    }
    // static public System.Collections.Generic.IEnumerable`1<TSource> Except(System.Collections.Generic.IEnumerable`1<TSource> first, System.Collections.Generic.IEnumerable`1<TSource> second)
    // Offset: 0xD04400
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* Except(System::Collections::Generic::IEnumerable_1<TSource>* first, System::Collections::Generic::IEnumerable_1<TSource>* second) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "Except", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, first, second));
    }
    // static private System.Collections.Generic.IEnumerable`1<TSource> ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource> first, System.Collections.Generic.IEnumerable`1<TSource> second, System.Collections.Generic.IEqualityComparer`1<TSource> comparer)
    // Offset: 0xD04540
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* ExceptIterator(System::Collections::Generic::IEnumerable_1<TSource>* first, System::Collections::Generic::IEnumerable_1<TSource>* second, System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "ExceptIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, first, second, comparer));
    }
    // static public System.Collections.Generic.IEnumerable`1<TSource> Reverse(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD04698
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* Reverse(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "Reverse", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static private System.Collections.Generic.IEnumerable`1<TSource> ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD04824
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* ReverseIterator(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "ReverseIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public TSource[] ToArray(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD42930
    template<class TSource>
    static ::Array<TSource>* ToArray(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Array<TSource>*>("System.Linq", "Enumerable", "ToArray", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public System.Collections.Generic.List`1<TSource> ToList(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD192C8
    template<class TSource>
    static System::Collections::Generic::List_1<TSource>* ToList(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<TSource>*>("System.Linq", "Enumerable", "ToList", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public System.Collections.Generic.Dictionary`2<TKey,TElement> ToDictionary(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector, System.Func`2<TSource,TElement> elementSelector)
    // Offset: 0xE4F054
    template<class TKey, class TElement, class TSource>
    static System::Collections::Generic::Dictionary_2<TKey, TElement>* ToDictionary(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector, System::Func_2<TSource, TElement>* elementSelector) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::Dictionary_2<TKey, TElement>*>("System.Linq", "Enumerable", "ToDictionary", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, keySelector, elementSelector)));
    }
    // static public System.Collections.Generic.Dictionary`2<TKey,TElement> ToDictionary(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector, System.Func`2<TSource,TElement> elementSelector, System.Collections.Generic.IEqualityComparer`1<TKey> comparer)
    // Offset: 0xE4F068
    template<class TKey, class TElement, class TSource>
    static System::Collections::Generic::Dictionary_2<TKey, TElement>* ToDictionary(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector, System::Func_2<TSource, TElement>* elementSelector, System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::Dictionary_2<TKey, TElement>*>("System.Linq", "Enumerable", "ToDictionary", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, keySelector, elementSelector, comparer)));
    }
    // static public System.Collections.Generic.IEnumerable`1<TSource> DefaultIfEmpty(System.Collections.Generic.IEnumerable`1<TSource> source, TSource defaultValue)
    // Offset: 0xD03DF0
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* DefaultIfEmpty(System::Collections::Generic::IEnumerable_1<TSource>* source, TSource defaultValue) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "DefaultIfEmpty", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, defaultValue));
    }
    // static private System.Collections.Generic.IEnumerable`1<TSource> DefaultIfEmptyIterator(System.Collections.Generic.IEnumerable`1<TSource> source, TSource defaultValue)
    // Offset: 0xD03E84
    template<class TSource>
    static System::Collections::Generic::IEnumerable_1<TSource>* DefaultIfEmptyIterator(System::Collections::Generic::IEnumerable_1<TSource>* source, TSource defaultValue) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TSource>*>("System.Linq", "Enumerable", "DefaultIfEmptyIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, defaultValue));
    }
    // static public System.Collections.Generic.IEnumerable`1<TResult> OfType(System.Collections.IEnumerable source)
    // Offset: 0xCFE7DC
    template<class TResult>
    static System::Collections::Generic::IEnumerable_1<TResult>* OfType(System::Collections::IEnumerable* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "OfType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, source));
    }
    // static private System.Collections.Generic.IEnumerable`1<TResult> OfTypeIterator(System.Collections.IEnumerable source)
    // Offset: 0xCFE860
    template<class TResult>
    static System::Collections::Generic::IEnumerable_1<TResult>* OfTypeIterator(System::Collections::IEnumerable* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "OfTypeIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, source));
    }
    // static public System.Collections.Generic.IEnumerable`1<TResult> Cast(System.Collections.IEnumerable source)
    // Offset: 0xCFE4D0
    template<class TResult>
    static System::Collections::Generic::IEnumerable_1<TResult>* Cast(System::Collections::IEnumerable* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "Cast", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, source));
    }
    // static private System.Collections.Generic.IEnumerable`1<TResult> CastIterator(System.Collections.IEnumerable source)
    // Offset: 0xCFE648
    template<class TResult>
    static System::Collections::Generic::IEnumerable_1<TResult>* CastIterator(System::Collections::IEnumerable* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "CastIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, source));
    }
    // static public TSource First(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD3E300
    template<class TSource>
    static TSource First(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "First", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public TSource First(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xD3EFA4
    template<class TSource>
    static TSource First(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, bool>* predicate) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "First", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, predicate));
    }
    // static public TSource FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD3F2D0
    template<class TSource>
    static TSource FirstOrDefault(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "FirstOrDefault", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public TSource FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xD3F700
    template<class TSource>
    static TSource FirstOrDefault(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, bool>* predicate) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "FirstOrDefault", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, predicate));
    }
    // static public TSource Last(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD3FE70
    template<class TSource>
    static TSource Last(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "Last", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public TSource LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD407A8
    template<class TSource>
    static TSource LastOrDefault(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "LastOrDefault", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public TSource Single(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD40C40
    template<class TSource>
    static TSource Single(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "Single", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public TSource SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xD41A88
    template<class TSource>
    static TSource SingleOrDefault(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "SingleOrDefault", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public TSource SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xD423E8
    template<class TSource>
    static TSource SingleOrDefault(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, bool>* predicate) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "SingleOrDefault", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, predicate));
    }
    // static public TSource ElementAt(System.Collections.Generic.IEnumerable`1<TSource> source, System.Int32 index)
    // Offset: 0xD3DB90
    template<class TSource>
    static TSource ElementAt(System::Collections::Generic::IEnumerable_1<TSource>* source, int index) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TSource>("System.Linq", "Enumerable", "ElementAt", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, index));
    }
    // static public System.Collections.Generic.IEnumerable`1<TResult> Repeat(TResult element, System.Int32 count)
    // Offset: 0xCFE8DC
    template<class TResult>
    static System::Collections::Generic::IEnumerable_1<TResult>* Repeat(TResult element, int count) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "Repeat", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, element, count));
    }
    // static private System.Collections.Generic.IEnumerable`1<TResult> RepeatIterator(TResult element, System.Int32 count)
    // Offset: 0xCFE9F4
    template<class TResult>
    static System::Collections::Generic::IEnumerable_1<TResult>* RepeatIterator(TResult element, int count) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "RepeatIterator", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, element, count));
    }
    // static public System.Collections.Generic.IEnumerable`1<TResult> Empty()
    // Offset: 0xCFE740
    template<class TResult>
    static System::Collections::Generic::IEnumerable_1<TResult>* Empty() {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>("System.Linq", "Enumerable", "Empty", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
    }
    // static public System.Boolean Any(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xE4A2E8
    template<class TSource>
    static bool Any(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("System.Linq", "Enumerable", "Any", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public System.Boolean Any(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xE4A560
    template<class TSource>
    static bool Any(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, bool>* predicate) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("System.Linq", "Enumerable", "Any", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, predicate));
    }
    // static public System.Boolean All(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xE49868
    template<class TSource>
    static bool All(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, bool>* predicate) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("System.Linq", "Enumerable", "All", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, predicate));
    }
    // static public System.Int32 Count(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0x11CA08C
    template<class TSource>
    static int Count(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<int>("System.Linq", "Enumerable", "Count", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source));
    }
    // static public System.Boolean Contains(System.Collections.Generic.IEnumerable`1<TSource> source, TSource value)
    // Offset: 0xE4B7BC
    template<class TSource>
    static bool Contains(System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("System.Linq", "Enumerable", "Contains", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, value));
    }
    // static public System.Boolean Contains(System.Collections.Generic.IEnumerable`1<TSource> source, TSource value, System.Collections.Generic.IEqualityComparer`1<TSource> comparer)
    // Offset: 0xE4AF48
    template<class TSource>
    static bool Contains(System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value, System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("System.Linq", "Enumerable", "Contains", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, value, comparer));
    }
    // static public System.Int32 Sum(System.Collections.Generic.IEnumerable`1<System.Int32> source)
    // Offset: 0x19646C0
    static int Sum(System::Collections::Generic::IEnumerable_1<int>* source);
    // static public System.Int32 Sum(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Int32> selector)
    // Offset: 0x11CB1F4
    template<class TSource>
    static int Sum(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, int>* selector) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<int>("System.Linq", "Enumerable", "Sum", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, selector));
    }
    // static public System.Single Min(System.Collections.Generic.IEnumerable`1<System.Single> source)
    // Offset: 0x19649C4
    static float Min(System::Collections::Generic::IEnumerable_1<float>* source);
    // static public System.Int32 Max(System.Collections.Generic.IEnumerable`1<System.Int32> source)
    // Offset: 0x1964D04
    static int Max(System::Collections::Generic::IEnumerable_1<int>* source);
    // static public System.Single Max(System.Collections.Generic.IEnumerable`1<System.Single> source)
    // Offset: 0x1964FB0
    static float Max(System::Collections::Generic::IEnumerable_1<float>* source);
    // static public System.Int32 Max(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Int32> selector)
    // Offset: 0x11CB1D0
    template<class TSource>
    static int Max(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, int>* selector) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<int>("System.Linq", "Enumerable", "Max", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, selector));
    }
  }; // System.Linq.Enumerable
}
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Enumerable*, "System.Linq", "Enumerable");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.TaskCreationOptions
#include "System/Threading/Tasks/TaskCreationOptions.hpp"
// Including type: System.Threading.Tasks.InternalTaskOptions
#include "System/Threading/Tasks/InternalTaskOptions.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: TaskFactory`1<TResult>
  template<typename TResult>
  class TaskFactory_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.Task`1
  template<typename TResult>
  class Task_1 : public System::Threading::Tasks::Task {
    public:
    // Nested type: System::Threading::Tasks::Task_1::$$c<TResult>
    class $$c;
    // Autogenerated type: System.Threading.Tasks.Task`1/<>c
    class $$c : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = Task_1<TResult>*;
      // Autogenerated static field getter
      // Get static field: static public readonly System.Threading.Tasks.Task`1/<>c<TResult> <>9
      static typename System::Threading::Tasks::Task_1<TResult>::$$c* _get_$$9() {
        return CRASH_UNLESS((il2cpp_utils::GetFieldValue<typename System::Threading::Tasks::Task_1<TResult>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Task_1<TResult>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly System.Threading.Tasks.Task`1/<>c<TResult> <>9
      static void _set_$$9(typename System::Threading::Tasks::Task_1<TResult>::$$c* value) {
        CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Task_1<TResult>::$$c*>::get(), "<>9", value));
      }
      // static private System.Void .cctor()
      // Offset: 0x1479C98
      static void _cctor() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Task_1<TResult>::$$c*>::get(), ".cctor"));
      }
      // System.Threading.Tasks.Task`1<TResult> <.cctor>b__64_0(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> completed)
      // Offset: 0x1479D8C
      System::Threading::Tasks::Task_1<TResult>* $_cctor$b__64_0(System::Threading::Tasks::Task_1<System::Threading::Tasks::Task*>* completed) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<TResult>*>(this, "<.cctor>b__64_0", completed));
      }
      // public System.Void .ctor()
      // Offset: 0x1479D74
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename Task_1<TResult>::$$c* New_ctor() {
        return (typename Task_1<TResult>::$$c*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Task_1<TResult>::$$c*>::get()));
      }
    }; // System.Threading.Tasks.Task`1/<>c
    // TResult m_result
    // Offset: 0x0
    TResult m_result;
    // Autogenerated static field getter
    // Get static field: static private readonly System.Threading.Tasks.TaskFactory`1<TResult> s_Factory
    static System::Threading::Tasks::TaskFactory_1<TResult>* _get_s_Factory() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<System::Threading::Tasks::TaskFactory_1<TResult>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "s_Factory")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Threading.Tasks.TaskFactory`1<TResult> s_Factory
    static void _set_s_Factory(System::Threading::Tasks::TaskFactory_1<TResult>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "s_Factory", value));
    }
    // Autogenerated static field getter
    // Get static field: static readonly System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> TaskWhenAnyCast
    static System::Func_2<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task*>*, System::Threading::Tasks::Task_1<TResult>*>* _get_TaskWhenAnyCast() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task*>*, System::Threading::Tasks::Task_1<TResult>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "TaskWhenAnyCast")));
    }
    // Autogenerated static field setter
    // Set static field: static readonly System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> TaskWhenAnyCast
    static void _set_TaskWhenAnyCast(System::Func_2<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task*>*, System::Threading::Tasks::Task_1<TResult>*>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "TaskWhenAnyCast", value));
    }
    // System.Void .ctor(System.Object state, System.Threading.Tasks.TaskCreationOptions options)
    // Offset: 0x147B568
    static Task_1<TResult>* New_ctor(::Il2CppObject* state, System::Threading::Tasks::TaskCreationOptions options) {
      return (Task_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), state, options));
    }
    // System.Void .ctor(TResult result)
    // Offset: 0x147B5F4
    static Task_1<TResult>* New_ctor(TResult result) {
      return (Task_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), result));
    }
    // System.Void .ctor(System.Boolean canceled, TResult result, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.CancellationToken ct)
    // Offset: 0x147B694
    static Task_1<TResult>* New_ctor(bool canceled, TResult result, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::CancellationToken ct) {
      return (Task_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), canceled, result, creationOptions, ct));
    }
    // public System.Void .ctor(System.Func`2<System.Object,TResult> function, System.Object state, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions)
    // Offset: 0x147B76C
    static Task_1<TResult>* New_ctor(System::Func_2<::Il2CppObject*, TResult>* function, ::Il2CppObject* state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions) {
      return (Task_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), function, state, cancellationToken, creationOptions));
    }
    // System.Void .ctor(System.Func`1<TResult> valueSelector, System.Threading.Tasks.Task parent, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler, System.Threading.StackCrawlMark stackMark)
    // Offset: 0x147B868
    static Task_1<TResult>* New_ctor(System::Func_1<TResult>* valueSelector, System::Threading::Tasks::Task* parent, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler* scheduler, System::Threading::StackCrawlMark& stackMark) {
      return (Task_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), valueSelector, parent, cancellationToken, creationOptions, internalOptions, scheduler, stackMark));
    }
    // System.Void .ctor(System.Func`1<TResult> valueSelector, System.Threading.Tasks.Task parent, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0x147B94C
    static Task_1<TResult>* New_ctor(System::Func_1<TResult>* valueSelector, System::Threading::Tasks::Task* parent, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler* scheduler) {
      return (Task_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), valueSelector, parent, cancellationToken, creationOptions, internalOptions, scheduler));
    }
    // static System.Threading.Tasks.Task`1<TResult> StartNew(System.Threading.Tasks.Task parent, System.Func`1<TResult> function, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler, System.Threading.StackCrawlMark stackMark)
    // Offset: 0x147BBA8
    static System::Threading::Tasks::Task_1<TResult>* StartNew(System::Threading::Tasks::Task* parent, System::Func_1<TResult>* function, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler* scheduler, System::Threading::StackCrawlMark& stackMark) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<TResult>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "StartNew", parent, function, cancellationToken, creationOptions, internalOptions, scheduler, stackMark));
    }
    // System.Boolean TrySetResult(TResult result)
    // Offset: 0x147BDB0
    bool TrySetResult(TResult result) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TrySetResult", result));
    }
    // public TResult get_Result()
    // Offset: 0x147BE6C
    TResult get_Result() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "get_Result"));
    }
    // TResult get_ResultOnSuccess()
    // Offset: 0x147BEDC
    TResult get_ResultOnSuccess() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "get_ResultOnSuccess"));
    }
    // TResult GetResultCore(System.Boolean waitCompletionNotification)
    // Offset: 0x147BEE8
    TResult GetResultCore(bool waitCompletionNotification) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "GetResultCore", waitCompletionNotification));
    }
    // System.Boolean TrySetException(System.Object exceptionObject)
    // Offset: 0x147BF64
    bool TrySetException(::Il2CppObject* exceptionObject) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TrySetException", exceptionObject));
    }
    // System.Boolean TrySetCanceled(System.Threading.CancellationToken tokenToRecord)
    // Offset: 0x147BFDC
    bool TrySetCanceled(System::Threading::CancellationToken tokenToRecord) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TrySetCanceled", tokenToRecord));
    }
    // System.Boolean TrySetCanceled(System.Threading.CancellationToken tokenToRecord, System.Object cancellationException)
    // Offset: 0x147C004
    bool TrySetCanceled(System::Threading::CancellationToken tokenToRecord, ::Il2CppObject* cancellationException) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TrySetCanceled", tokenToRecord, cancellationException));
    }
    // static public System.Threading.Tasks.TaskFactory`1<TResult> get_Factory()
    // Offset: 0x147C078
    static System::Threading::Tasks::TaskFactory_1<TResult>* get_Factory() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::TaskFactory_1<TResult>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), "get_Factory"));
    }
    // public System.Runtime.CompilerServices.TaskAwaiter`1<TResult> GetAwaiter()
    // Offset: 0x1488464
    System::Runtime::CompilerServices::TaskAwaiter_1<TResult> GetAwaiter() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>(this, "GetAwaiter"));
    }
    // public System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> ConfigureAwait(System.Boolean continueOnCapturedContext)
    // Offset: 0x147C274
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> ConfigureAwait(bool continueOnCapturedContext) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>>(this, "ConfigureAwait", continueOnCapturedContext));
    }
    // System.Void .ctor()
    // Offset: 0x147B4F8
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::.ctor()
    // Base method: System.Void Object::.ctor()
    static Task_1<TResult>* New_ctor() {
      return (Task_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get()));
    }
    // System.Void .ctor(System.Delegate valueSelector, System.Object state, System.Threading.Tasks.Task parent, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0x147BA74
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::.ctor(System.Delegate valueSelector, System.Object state, System.Threading.Tasks.Task parent, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, System.Threading.Tasks.TaskScheduler scheduler)
    static Task_1<TResult>* New_ctor(System::Delegate* valueSelector, ::Il2CppObject* state, System::Threading::Tasks::Task* parent, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler* scheduler) {
      return (Task_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), valueSelector, state, parent, cancellationToken, creationOptions, internalOptions, scheduler));
    }
    // override System.Void InnerInvoke()
    // Offset: 0x147C164
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::InnerInvoke()
    void InnerInvoke() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "InnerInvoke"));
    }
    // static private System.Void .cctor()
    // Offset: 0x147C2B4
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::.cctor()
    static void _cctor() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Task_1<TResult>*>::get(), ".cctor"));
    }
  }; // System.Threading.Tasks.Task`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::Task_1, "System.Threading.Tasks", "Task`1");
#pragma pack(pop)
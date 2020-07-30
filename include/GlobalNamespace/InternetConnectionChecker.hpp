// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:23 PM
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: InternetConnectionChecker
  class InternetConnectionChecker : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::InternetConnectionChecker::$IsConnectedToInternetAsync$d__0
    struct $IsConnectedToInternetAsync$d__0;
    // static public System.Threading.Tasks.Task`1<System.Boolean> IsConnectedToInternetAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x193814C
    static System::Threading::Tasks::Task_1<bool>* IsConnectedToInternetAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x1938258
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InternetConnectionChecker* New_ctor();
  }; // InternetConnectionChecker
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InternetConnectionChecker*, "", "InternetConnectionChecker");
#pragma pack(pop)
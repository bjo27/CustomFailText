// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SceneContext/<>c__DisplayClass48_0
  class SceneContext::$$c__DisplayClass48_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.IEnumerable`1<System.String> parentContractNames
    // Offset: 0x10
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* parentContractNames;
    // public System.Func`2<System.String,System.Boolean> <>9__4
    // Offset: 0x18
    System::Func_2<::Il2CppString*, bool>* $$9__4;
    // System.Boolean <GetParentContainers>b__2(Zenject.SceneContext sceneContext)
    // Offset: 0xFB5780
    bool $GetParentContainers$b__2(Zenject::SceneContext* sceneContext);
    // System.Boolean <GetParentContainers>b__4(System.String x)
    // Offset: 0xFB584C
    bool $GetParentContainers$b__4(::Il2CppString* x);
    // public System.Void .ctor()
    // Offset: 0xFB4838
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SceneContext::$$c__DisplayClass48_0* New_ctor();
  }; // Zenject.SceneContext/<>c__DisplayClass48_0
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContext::$$c__DisplayClass48_0*, "Zenject", "SceneContext/<>c__DisplayClass48_0");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass62_2
  class FromBinder::$$c__DisplayClass62_2 : public ::Il2CppObject {
    public:
    // public Zenject.InjectContext ctx
    // Offset: 0x10
    Zenject::InjectContext* ctx;
    // public UnityEngine.MonoBehaviour monoBehaviour
    // Offset: 0x18
    UnityEngine::MonoBehaviour* monoBehaviour;
    // System.Boolean <FromComponentsInParents>b__2(UnityEngine.Component x)
    // Offset: 0xF217AC
    bool $FromComponentsInParents$b__2(UnityEngine::Component* x);
    // System.Boolean <FromComponentsInParents>b__3(UnityEngine.Component x)
    // Offset: 0xF217D0
    bool $FromComponentsInParents$b__3(UnityEngine::Component* x);
    // public System.Void .ctor()
    // Offset: 0xF217A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass62_2* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass62_2
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass62_2*, "Zenject", "FromBinder/<>c__DisplayClass62_2");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.IfNotBoundBinder
#include "Zenject/IfNotBoundBinder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.NonLazyBinder
  class NonLazyBinder : public Zenject::IfNotBoundBinder {
    public:
    // public Zenject.IfNotBoundBinder NonLazy()
    // Offset: 0xFACACC
    Zenject::IfNotBoundBinder* NonLazy();
    // public Zenject.IfNotBoundBinder Lazy()
    // Offset: 0xFACAEC
    Zenject::IfNotBoundBinder* Lazy();
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0xFACAC4
    // Implemented from: Zenject.IfNotBoundBinder
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    static NonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo);
  }; // Zenject.NonLazyBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::NonLazyBinder*, "Zenject", "NonLazyBinder");
#pragma pack(pop)
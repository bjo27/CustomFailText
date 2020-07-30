// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:48 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPool`1
#include "Zenject/MemoryPool_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableMemoryPool`1
  template<typename TValue>
  class PoolableMemoryPool_1 : public Zenject::MemoryPool_1<TValue> {
    public:
    // protected override System.Void OnDespawned(TValue item)
    // Offset: 0x15DAAC8
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::OnDespawned(TValue item)
    void OnDespawned(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // protected override System.Void Reinitialize(TValue item)
    // Offset: 0x15DAB74
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool`1::Reinitialize(TValue item)
    void Reinitialize(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", item));
    }
    // public System.Void .ctor()
    // Offset: 0x15DAC24
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool`1::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static PoolableMemoryPool_1<TValue>* New_ctor() {
      return (PoolableMemoryPool_1<TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableMemoryPool_1<TValue>*>::get()));
    }
  }; // Zenject.PoolableMemoryPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPool_1, "Zenject", "PoolableMemoryPool`1");
#pragma pack(pop)
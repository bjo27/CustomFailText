// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ScopeTypes
  struct ScopeTypes : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Zenject.ScopeTypes Unset
    static constexpr const int Unset = 0;
    // Get static field: static public Zenject.ScopeTypes Unset
    static Zenject::ScopeTypes _get_Unset();
    // Set static field: static public Zenject.ScopeTypes Unset
    static void _set_Unset(Zenject::ScopeTypes value);
    // static field const value: static public Zenject.ScopeTypes Transient
    static constexpr const int Transient = 1;
    // Get static field: static public Zenject.ScopeTypes Transient
    static Zenject::ScopeTypes _get_Transient();
    // Set static field: static public Zenject.ScopeTypes Transient
    static void _set_Transient(Zenject::ScopeTypes value);
    // static field const value: static public Zenject.ScopeTypes Singleton
    static constexpr const int Singleton = 2;
    // Get static field: static public Zenject.ScopeTypes Singleton
    static Zenject::ScopeTypes _get_Singleton();
    // Set static field: static public Zenject.ScopeTypes Singleton
    static void _set_Singleton(Zenject::ScopeTypes value);
    // Creating value type constructor for type: ScopeTypes
    ScopeTypes(int value_ = {}) : value{value_} {}
  }; // Zenject.ScopeTypes
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScopeTypes, "Zenject", "ScopeTypes");
#pragma pack(pop)
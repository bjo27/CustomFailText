// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:26 PM
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Space
  struct Space : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Space World
    static constexpr const int World = 0;
    // Get static field: static public UnityEngine.Space World
    static UnityEngine::Space _get_World();
    // Set static field: static public UnityEngine.Space World
    static void _set_World(UnityEngine::Space value);
    // static field const value: static public UnityEngine.Space Self
    static constexpr const int Self = 1;
    // Get static field: static public UnityEngine.Space Self
    static UnityEngine::Space _get_Self();
    // Set static field: static public UnityEngine.Space Self
    static void _set_Self(UnityEngine::Space value);
    // Creating value type constructor for type: Space
    Space(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Space
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Space, "UnityEngine", "Space");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:29 PM
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
  // Autogenerated type: UnityEngine.SpritePackingMode
  struct SpritePackingMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.SpritePackingMode Tight
    static constexpr const int Tight = 0;
    // Get static field: static public UnityEngine.SpritePackingMode Tight
    static UnityEngine::SpritePackingMode _get_Tight();
    // Set static field: static public UnityEngine.SpritePackingMode Tight
    static void _set_Tight(UnityEngine::SpritePackingMode value);
    // static field const value: static public UnityEngine.SpritePackingMode Rectangle
    static constexpr const int Rectangle = 1;
    // Get static field: static public UnityEngine.SpritePackingMode Rectangle
    static UnityEngine::SpritePackingMode _get_Rectangle();
    // Set static field: static public UnityEngine.SpritePackingMode Rectangle
    static void _set_Rectangle(UnityEngine::SpritePackingMode value);
    // Creating value type constructor for type: SpritePackingMode
    SpritePackingMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.SpritePackingMode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpritePackingMode, "UnityEngine", "SpritePackingMode");
#pragma pack(pop)
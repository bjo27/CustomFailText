// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:37 PM
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
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.TestPlatform
  struct TestPlatform : public System::Enum {
    public:
    // public System.Byte value__
    // Offset: 0x0
    uint8_t value;
    // static field const value: static public UnityEngine.TestTools.TestPlatform All
    static constexpr const uint8_t All = 255u;
    // Get static field: static public UnityEngine.TestTools.TestPlatform All
    static UnityEngine::TestTools::TestPlatform _get_All();
    // Set static field: static public UnityEngine.TestTools.TestPlatform All
    static void _set_All(UnityEngine::TestTools::TestPlatform value);
    // static field const value: static public UnityEngine.TestTools.TestPlatform EditMode
    static constexpr const uint8_t EditMode = 2u;
    // Get static field: static public UnityEngine.TestTools.TestPlatform EditMode
    static UnityEngine::TestTools::TestPlatform _get_EditMode();
    // Set static field: static public UnityEngine.TestTools.TestPlatform EditMode
    static void _set_EditMode(UnityEngine::TestTools::TestPlatform value);
    // static field const value: static public UnityEngine.TestTools.TestPlatform PlayMode
    static constexpr const uint8_t PlayMode = 4u;
    // Get static field: static public UnityEngine.TestTools.TestPlatform PlayMode
    static UnityEngine::TestTools::TestPlatform _get_PlayMode();
    // Set static field: static public UnityEngine.TestTools.TestPlatform PlayMode
    static void _set_PlayMode(UnityEngine::TestTools::TestPlatform value);
    // Creating value type constructor for type: TestPlatform
    TestPlatform(uint8_t value_ = {}) : value{value_} {}
  }; // UnityEngine.TestTools.TestPlatform
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestPlatform, "UnityEngine.TestTools", "TestPlatform");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Autogenerated type: UnityEngine.Animations.AnimationHumanStream
  struct AnimationHumanStream : public System::ValueType {
    public:
    // private System.IntPtr stream
    // Offset: 0x0
    System::IntPtr stream;
    // Creating value type constructor for type: AnimationHumanStream
    AnimationHumanStream(System::IntPtr stream_ = {}) : stream{stream_} {}
  }; // UnityEngine.Animations.AnimationHumanStream
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationHumanStream, "UnityEngine.Animations", "AnimationHumanStream");
#pragma pack(pop)
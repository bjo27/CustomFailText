// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PlayerPrefsException
  class PlayerPrefsException : public System::Exception {
    public:
    // public System.Void .ctor(System.String error)
    // Offset: 0x14046B4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String error)
    static PlayerPrefsException* New_ctor(::Il2CppString* error);
  }; // UnityEngine.PlayerPrefsException
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerPrefsException*, "UnityEngine", "PlayerPrefsException");
#pragma pack(pop)
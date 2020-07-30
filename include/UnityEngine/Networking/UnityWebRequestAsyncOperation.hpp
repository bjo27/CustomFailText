// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation : public UnityEngine::AsyncOperation {
    public:
    // private UnityEngine.Networking.UnityWebRequest <webRequest>k__BackingField
    // Offset: 0x20
    UnityEngine::Networking::UnityWebRequest* webRequest;
    // System.Void set_webRequest(UnityEngine.Networking.UnityWebRequest value)
    // Offset: 0x192E508
    void set_webRequest(UnityEngine::Networking::UnityWebRequest* value);
    // public System.Void .ctor()
    // Offset: 0x192E510
    // Implemented from: UnityEngine.AsyncOperation
    // Base method: System.Void AsyncOperation::.ctor()
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    static UnityWebRequestAsyncOperation* New_ctor();
  }; // UnityEngine.Networking.UnityWebRequestAsyncOperation
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestAsyncOperation*, "UnityEngine.Networking", "UnityWebRequestAsyncOperation");
#pragma pack(pop)
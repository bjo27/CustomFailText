// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:51 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRAudioSourceTest
  class OVRAudioSourceTest : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single period
    // Offset: 0x18
    float period;
    // private System.Single nextActionTime
    // Offset: 0x1C
    float nextActionTime;
    // private System.Void Start()
    // Offset: 0xCB1530
    void Start();
    // private System.Void Update()
    // Offset: 0xCB1624
    void Update();
    // public System.Void .ctor()
    // Offset: 0xCB17E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRAudioSourceTest* New_ctor();
  }; // OVRAudioSourceTest
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRAudioSourceTest*, "", "OVRAudioSourceTest");
#pragma pack(pop)
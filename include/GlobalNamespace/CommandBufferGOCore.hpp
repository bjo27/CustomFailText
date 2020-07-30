// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:04 PM
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CommandBufferOwners
  class CommandBufferOwners;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CameraEvent
  struct CameraEvent;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CommandBufferGOCore
  class CommandBufferGOCore : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* cameras;
    // Get static field: static private UnityEngine.Material _material
    static UnityEngine::Material* _get__material();
    // Set static field: static private UnityEngine.Material _material
    static void _set__material(UnityEngine::Material* value);
    // private UnityEngine.Mesh _mesh
    // Offset: 0x20
    UnityEngine::Mesh* mesh;
    // protected System.Void OnEnable()
    // Offset: 0x18F5FC0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x18F6410
    void OnDisable();
    // protected System.Void OnWillRenderObject()
    // Offset: 0x18F6790
    void OnWillRenderObject();
    // protected UnityEngine.Rendering.CameraEvent CommandBufferCameraEvent()
    // Offset: 0xFFFFFFFF
    UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();
    // protected UnityEngine.Rendering.CommandBuffer CreateCommandBuffer(UnityEngine.Camera camera)
    // Offset: 0xFFFFFFFF
    UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(UnityEngine::Camera* camera);
    // protected System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> CamerasDict()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* CamerasDict();
    // protected System.Void .ctor()
    // Offset: 0x18F5F40
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CommandBufferGOCore* New_ctor();
  }; // CommandBufferGOCore
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CommandBufferGOCore*, "", "CommandBufferGOCore");
#pragma pack(pop)
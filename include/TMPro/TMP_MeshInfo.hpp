// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: VertexSortingOrder
  struct VertexSortingOrder;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_MeshInfo
  struct TMP_MeshInfo : public System::ValueType {
    public:
    // Get static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static UnityEngine::Color32 _get_s_DefaultColor();
    // Set static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static void _set_s_DefaultColor(UnityEngine::Color32 value);
    // Get static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static UnityEngine::Vector3 _get_s_DefaultNormal();
    // Set static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static void _set_s_DefaultNormal(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static UnityEngine::Vector4 _get_s_DefaultTangent();
    // Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static void _set_s_DefaultTangent(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Bounds s_DefaultBounds
    static UnityEngine::Bounds _get_s_DefaultBounds();
    // Set static field: static private readonly UnityEngine.Bounds s_DefaultBounds
    static void _set_s_DefaultBounds(UnityEngine::Bounds value);
    // public UnityEngine.Mesh mesh
    // Offset: 0x0
    UnityEngine::Mesh* mesh;
    // public System.Int32 vertexCount
    // Offset: 0x8
    int vertexCount;
    // public UnityEngine.Vector3[] vertices
    // Offset: 0x10
    ::Array<UnityEngine::Vector3>* vertices;
    // public UnityEngine.Vector3[] normals
    // Offset: 0x18
    ::Array<UnityEngine::Vector3>* normals;
    // public UnityEngine.Vector4[] tangents
    // Offset: 0x20
    ::Array<UnityEngine::Vector4>* tangents;
    // public UnityEngine.Vector2[] uvs0
    // Offset: 0x28
    ::Array<UnityEngine::Vector2>* uvs0;
    // public UnityEngine.Vector2[] uvs2
    // Offset: 0x30
    ::Array<UnityEngine::Vector2>* uvs2;
    // public UnityEngine.Color32[] colors32
    // Offset: 0x38
    ::Array<UnityEngine::Color32>* colors32;
    // public System.Int32[] triangles
    // Offset: 0x40
    ::Array<int>* triangles;
    // Creating value type constructor for type: TMP_MeshInfo
    TMP_MeshInfo(UnityEngine::Mesh* mesh_ = {}, int vertexCount_ = {}, ::Array<UnityEngine::Vector3>* vertices_ = {}, ::Array<UnityEngine::Vector3>* normals_ = {}, ::Array<UnityEngine::Vector4>* tangents_ = {}, ::Array<UnityEngine::Vector2>* uvs0_ = {}, ::Array<UnityEngine::Vector2>* uvs2_ = {}, ::Array<UnityEngine::Color32>* colors32_ = {}, ::Array<int>* triangles_ = {}) : mesh{mesh_}, vertexCount{vertexCount_}, vertices{vertices_}, normals{normals_}, tangents{tangents_}, uvs0{uvs0_}, uvs2{uvs2_}, colors32{colors32_}, triangles{triangles_} {}
    // public System.Void .ctor(UnityEngine.Mesh mesh, System.Int32 size)
    // Offset: 0xA2749C
    static TMP_MeshInfo* New_ctor(UnityEngine::Mesh* mesh, int size);
    // public System.Void .ctor(UnityEngine.Mesh mesh, System.Int32 size, System.Boolean isVolumetric)
    // Offset: 0xA274A4
    static TMP_MeshInfo* New_ctor(UnityEngine::Mesh* mesh, int size, bool isVolumetric);
    // public System.Void ResizeMeshInfo(System.Int32 size)
    // Offset: 0xA274B0
    void ResizeMeshInfo(int size);
    // public System.Void ResizeMeshInfo(System.Int32 size, System.Boolean isVolumetric)
    // Offset: 0xA274B8
    void ResizeMeshInfo(int size, bool isVolumetric);
    // public System.Void Clear()
    // Offset: 0xA274C4
    void Clear();
    // public System.Void Clear(System.Boolean uploadChanges)
    // Offset: 0xA274CC
    void Clear(bool uploadChanges);
    // public System.Void ClearUnusedVertices()
    // Offset: 0xA274D8
    void ClearUnusedVertices();
    // public System.Void ClearUnusedVertices(System.Int32 startIndex)
    // Offset: 0xA274E0
    void ClearUnusedVertices(int startIndex);
    // public System.Void ClearUnusedVertices(System.Int32 startIndex, System.Boolean updateMesh)
    // Offset: 0xA274E8
    void ClearUnusedVertices(int startIndex, bool updateMesh);
    // public System.Void SortGeometry(TMPro.VertexSortingOrder order)
    // Offset: 0xA274F4
    void SortGeometry(TMPro::VertexSortingOrder order);
    // public System.Void SortGeometry(System.Collections.Generic.IList`1<System.Int32> sortingOrder)
    // Offset: 0xA274FC
    void SortGeometry(System::Collections::Generic::IList_1<int>* sortingOrder);
    // public System.Void SwapVertexData(System.Int32 src, System.Int32 dst)
    // Offset: 0xA27504
    void SwapVertexData(int src, int dst);
    // static private System.Void .cctor()
    // Offset: 0xB9D1D8
    static void _cctor();
  }; // TMPro.TMP_MeshInfo
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_MeshInfo, "TMPro", "TMP_MeshInfo");
#pragma pack(pop)
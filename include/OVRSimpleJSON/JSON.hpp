// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Autogenerated type: OVRSimpleJSON.JSON
  class JSON : public ::Il2CppObject {
    public:
    // static public OVRSimpleJSON.JSONNode Parse(System.String aJSON)
    // Offset: 0xF39FF0
    static OVRSimpleJSON::JSONNode* Parse(::Il2CppString* aJSON);
  }; // OVRSimpleJSON.JSON
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSON*, "OVRSimpleJSON", "JSON");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: TMPro.TMP_TextElement
#include "TMPro/TMP_TextElement.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Character
  class TMP_Character : public TMPro::TMP_TextElement {
    public:
    // public System.Void .ctor(System.UInt32 unicode, UnityEngine.TextCore.Glyph glyph)
    // Offset: 0xB696B4
    static TMP_Character* New_ctor(uint unicode, UnityEngine::TextCore::Glyph* glyph);
    // System.Void .ctor(System.UInt32 unicode, System.UInt32 glyphIndex)
    // Offset: 0xB69720
    static TMP_Character* New_ctor(uint unicode, uint glyphIndex);
    // public System.Void .ctor()
    // Offset: 0xB69680
    // Implemented from: TMPro.TMP_TextElement
    // Base method: System.Void TMP_TextElement::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_Character* New_ctor();
  }; // TMPro.TMP_Character
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Character*, "TMPro", "TMP_Character");
#pragma pack(pop)
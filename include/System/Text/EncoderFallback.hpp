// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:29 PM
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.EncoderFallback
  class EncoderFallback : public ::Il2CppObject {
    public:
    // System.Boolean bIsMicrosoftBestFitFallback
    // Offset: 0x10
    bool bIsMicrosoftBestFitFallback;
    // Get static field: static private System.Text.EncoderFallback replacementFallback
    static System::Text::EncoderFallback* _get_replacementFallback();
    // Set static field: static private System.Text.EncoderFallback replacementFallback
    static void _set_replacementFallback(System::Text::EncoderFallback* value);
    // Get static field: static private System.Text.EncoderFallback exceptionFallback
    static System::Text::EncoderFallback* _get_exceptionFallback();
    // Set static field: static private System.Text.EncoderFallback exceptionFallback
    static void _set_exceptionFallback(System::Text::EncoderFallback* value);
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x12D8814
    static ::Il2CppObject* get_InternalSyncObject();
    // static public System.Text.EncoderFallback get_ReplacementFallback()
    // Offset: 0x12D2D70
    static System::Text::EncoderFallback* get_ReplacementFallback();
    // static public System.Text.EncoderFallback get_ExceptionFallback()
    // Offset: 0x12D88F8
    static System::Text::EncoderFallback* get_ExceptionFallback();
    // public System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0xFFFFFFFF
    System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
    // public System.Int32 get_MaxCharCount()
    // Offset: 0xFFFFFFFF
    int get_MaxCharCount();
    // protected System.Void .ctor()
    // Offset: 0x12D7F7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EncoderFallback* New_ctor();
  }; // System.Text.EncoderFallback
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderFallback*, "System.Text", "EncoderFallback");
#pragma pack(pop)
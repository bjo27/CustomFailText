// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:29 PM
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
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.NormalizationForm
  struct NormalizationForm : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Text.NormalizationForm FormC
    static constexpr const int FormC = 1;
    // Get static field: static public System.Text.NormalizationForm FormC
    static System::Text::NormalizationForm _get_FormC();
    // Set static field: static public System.Text.NormalizationForm FormC
    static void _set_FormC(System::Text::NormalizationForm value);
    // static field const value: static public System.Text.NormalizationForm FormD
    static constexpr const int FormD = 2;
    // Get static field: static public System.Text.NormalizationForm FormD
    static System::Text::NormalizationForm _get_FormD();
    // Set static field: static public System.Text.NormalizationForm FormD
    static void _set_FormD(System::Text::NormalizationForm value);
    // static field const value: static public System.Text.NormalizationForm FormKC
    static constexpr const int FormKC = 5;
    // Get static field: static public System.Text.NormalizationForm FormKC
    static System::Text::NormalizationForm _get_FormKC();
    // Set static field: static public System.Text.NormalizationForm FormKC
    static void _set_FormKC(System::Text::NormalizationForm value);
    // static field const value: static public System.Text.NormalizationForm FormKD
    static constexpr const int FormKD = 6;
    // Get static field: static public System.Text.NormalizationForm FormKD
    static System::Text::NormalizationForm _get_FormKD();
    // Set static field: static public System.Text.NormalizationForm FormKD
    static void _set_FormKD(System::Text::NormalizationForm value);
    // Creating value type constructor for type: NormalizationForm
    NormalizationForm(int value_ = {}) : value{value_} {}
  }; // System.Text.NormalizationForm
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::NormalizationForm, "System.Text", "NormalizationForm");
#pragma pack(pop)
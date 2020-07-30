// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:04 PM
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
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.GoogleDriveDownloadFormat
  struct GoogleDriveDownloadFormat : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Polyglot.GoogleDriveDownloadFormat CSV
    static constexpr const int CSV = 0;
    // Get static field: static public Polyglot.GoogleDriveDownloadFormat CSV
    static Polyglot::GoogleDriveDownloadFormat _get_CSV();
    // Set static field: static public Polyglot.GoogleDriveDownloadFormat CSV
    static void _set_CSV(Polyglot::GoogleDriveDownloadFormat value);
    // static field const value: static public Polyglot.GoogleDriveDownloadFormat TSV
    static constexpr const int TSV = 1;
    // Get static field: static public Polyglot.GoogleDriveDownloadFormat TSV
    static Polyglot::GoogleDriveDownloadFormat _get_TSV();
    // Set static field: static public Polyglot.GoogleDriveDownloadFormat TSV
    static void _set_TSV(Polyglot::GoogleDriveDownloadFormat value);
    // Creating value type constructor for type: GoogleDriveDownloadFormat
    GoogleDriveDownloadFormat(int value_ = {}) : value{value_} {}
  }; // Polyglot.GoogleDriveDownloadFormat
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::GoogleDriveDownloadFormat, "Polyglot", "GoogleDriveDownloadFormat");
#pragma pack(pop)
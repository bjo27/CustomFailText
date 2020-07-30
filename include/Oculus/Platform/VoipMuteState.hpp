// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:02 PM
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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.VoipMuteState
  struct VoipMuteState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.VoipMuteState Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.VoipMuteState Unknown
    static Oculus::Platform::VoipMuteState _get_Unknown();
    // Set static field: static public Oculus.Platform.VoipMuteState Unknown
    static void _set_Unknown(Oculus::Platform::VoipMuteState value);
    // static field const value: static public Oculus.Platform.VoipMuteState Muted
    static constexpr const int Muted = 1;
    // Get static field: static public Oculus.Platform.VoipMuteState Muted
    static Oculus::Platform::VoipMuteState _get_Muted();
    // Set static field: static public Oculus.Platform.VoipMuteState Muted
    static void _set_Muted(Oculus::Platform::VoipMuteState value);
    // static field const value: static public Oculus.Platform.VoipMuteState Unmuted
    static constexpr const int Unmuted = 2;
    // Get static field: static public Oculus.Platform.VoipMuteState Unmuted
    static Oculus::Platform::VoipMuteState _get_Unmuted();
    // Set static field: static public Oculus.Platform.VoipMuteState Unmuted
    static void _set_Unmuted(Oculus::Platform::VoipMuteState value);
    // Creating value type constructor for type: VoipMuteState
    VoipMuteState(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.VoipMuteState
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipMuteState, "Oculus.Platform", "VoipMuteState");
#pragma pack(pop)
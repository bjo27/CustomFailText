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
  // Autogenerated type: Oculus.Platform.RoomType
  struct RoomType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.RoomType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.RoomType Unknown
    static Oculus::Platform::RoomType _get_Unknown();
    // Set static field: static public Oculus.Platform.RoomType Unknown
    static void _set_Unknown(Oculus::Platform::RoomType value);
    // static field const value: static public Oculus.Platform.RoomType Matchmaking
    static constexpr const int Matchmaking = 1;
    // Get static field: static public Oculus.Platform.RoomType Matchmaking
    static Oculus::Platform::RoomType _get_Matchmaking();
    // Set static field: static public Oculus.Platform.RoomType Matchmaking
    static void _set_Matchmaking(Oculus::Platform::RoomType value);
    // static field const value: static public Oculus.Platform.RoomType Moderated
    static constexpr const int Moderated = 2;
    // Get static field: static public Oculus.Platform.RoomType Moderated
    static Oculus::Platform::RoomType _get_Moderated();
    // Set static field: static public Oculus.Platform.RoomType Moderated
    static void _set_Moderated(Oculus::Platform::RoomType value);
    // static field const value: static public Oculus.Platform.RoomType Private
    static constexpr const int Private = 3;
    // Get static field: static public Oculus.Platform.RoomType Private
    static Oculus::Platform::RoomType _get_Private();
    // Set static field: static public Oculus.Platform.RoomType Private
    static void _set_Private(Oculus::Platform::RoomType value);
    // static field const value: static public Oculus.Platform.RoomType Solo
    static constexpr const int Solo = 4;
    // Get static field: static public Oculus.Platform.RoomType Solo
    static Oculus::Platform::RoomType _get_Solo();
    // Set static field: static public Oculus.Platform.RoomType Solo
    static void _set_Solo(Oculus::Platform::RoomType value);
    // Creating value type constructor for type: RoomType
    RoomType(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.RoomType
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RoomType, "Oculus.Platform", "RoomType");
#pragma pack(pop)
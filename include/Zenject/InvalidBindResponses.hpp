// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:45 PM
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
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InvalidBindResponses
  struct InvalidBindResponses : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Zenject.InvalidBindResponses Assert
    static constexpr const int Assert = 0;
    // Get static field: static public Zenject.InvalidBindResponses Assert
    static Zenject::InvalidBindResponses _get_Assert();
    // Set static field: static public Zenject.InvalidBindResponses Assert
    static void _set_Assert(Zenject::InvalidBindResponses value);
    // static field const value: static public Zenject.InvalidBindResponses Skip
    static constexpr const int Skip = 1;
    // Get static field: static public Zenject.InvalidBindResponses Skip
    static Zenject::InvalidBindResponses _get_Skip();
    // Set static field: static public Zenject.InvalidBindResponses Skip
    static void _set_Skip(Zenject::InvalidBindResponses value);
    // Creating value type constructor for type: InvalidBindResponses
    InvalidBindResponses(int value_ = {}) : value{value_} {}
  }; // Zenject.InvalidBindResponses
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InvalidBindResponses, "Zenject", "InvalidBindResponses");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:36 PM
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
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MessageEnd
  class MessageEnd : public ::Il2CppObject {
    public:
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0xE13090
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xE130B0
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0xE130B4
    void Dump();
    // public System.Void Dump(System.IO.Stream sout)
    // Offset: 0xE130B8
    void Dump(System::IO::Stream* sout);
    // System.Void .ctor()
    // Offset: 0xE13088
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MessageEnd* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.MessageEnd
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MessageEnd*, "System.Runtime.Serialization.Formatters.Binary", "MessageEnd");
#pragma pack(pop)
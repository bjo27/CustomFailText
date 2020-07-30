// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Extension
#include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
// Including type: System.Security.Cryptography.AsnDecodeStatus
#include "System/Security/Cryptography/AsnDecodeStatus.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: AsnEncodedData because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
  class X509BasicConstraintsExtension : public System::Security::Cryptography::X509Certificates::X509Extension {
    public:
    // static field const value: static System.String oid
    static constexpr const char* oid = "2.5.29.19";
    // Get static field: static System.String oid
    static ::Il2CppString* _get_oid();
    // Set static field: static System.String oid
    static void _set_oid(::Il2CppString* value);
    // static field const value: static System.String friendlyName
    static constexpr const char* friendlyName = "Basic Constraints";
    // Get static field: static System.String friendlyName
    static ::Il2CppString* _get_friendlyName();
    // Set static field: static System.String friendlyName
    static void _set_friendlyName(::Il2CppString* value);
    // private System.Boolean _certificateAuthority
    // Offset: 0x21
    bool certificateAuthority;
    // private System.Boolean _hasPathLengthConstraint
    // Offset: 0x22
    bool hasPathLengthConstraint;
    // private System.Int32 _pathLengthConstraint
    // Offset: 0x24
    int pathLengthConstraint;
    // private System.Security.Cryptography.AsnDecodeStatus _status
    // Offset: 0x28
    System::Security::Cryptography::AsnDecodeStatus status;
    // public System.Void .ctor(System.Security.Cryptography.AsnEncodedData encodedBasicConstraints, System.Boolean critical)
    // Offset: 0x12022BC
    static X509BasicConstraintsExtension* New_ctor(System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical);
    // public System.Void .ctor(System.Boolean certificateAuthority, System.Boolean hasPathLengthConstraint, System.Int32 pathLengthConstraint, System.Boolean critical)
    // Offset: 0x1203ED8
    static X509BasicConstraintsExtension* New_ctor(bool certificateAuthority, bool hasPathLengthConstraint, int pathLengthConstraint, bool critical);
    // public System.Boolean get_CertificateAuthority()
    // Offset: 0x1204160
    bool get_CertificateAuthority();
    // public System.Boolean get_HasPathLengthConstraint()
    // Offset: 0x12041F0
    bool get_HasPathLengthConstraint();
    // public System.Int32 get_PathLengthConstraint()
    // Offset: 0x1204280
    int get_PathLengthConstraint();
    // System.Security.Cryptography.AsnDecodeStatus Decode(System.Byte[] extension)
    // Offset: 0x1203CF4
    System::Security::Cryptography::AsnDecodeStatus Decode(::Array<uint8_t>* extension);
    // System.Byte[] Encode()
    // Offset: 0x1203FF4
    ::Array<uint8_t>* Encode();
    // public System.Void .ctor()
    // Offset: 0x1203C64
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::.ctor()
    // Base method: System.Void AsnEncodedData::.ctor()
    // Base method: System.Void Object::.ctor()
    static X509BasicConstraintsExtension* New_ctor();
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x1204310
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // override System.String ToString(System.Boolean multiLine)
    // Offset: 0x12044AC
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::ToString(System.Boolean multiLine)
    ::Il2CppString* ToString(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*, "System.Security.Cryptography.X509Certificates", "X509BasicConstraintsExtension");
#pragma pack(pop)
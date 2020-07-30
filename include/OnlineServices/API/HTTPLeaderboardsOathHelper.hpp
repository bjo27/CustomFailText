// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:23 PM
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
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
  // Forward declaring type: IUserLoginDtoDataSource
  class IUserLoginDtoDataSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UriBuilder
  class UriBuilder;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: TokenDTO
  class TokenDTO;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper
  class HTTPLeaderboardsOathHelper : public ::Il2CppObject {
    public:
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__6
    struct $SendWebRequestWithOathAsync$d__6;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$LogOut$d__7
    struct $LogOut$d__7;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$LoginIfNeededAsync$d__8
    struct $LoginIfNeededAsync$d__8;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$GetJwtTokenAsync$d__10
    struct $GetJwtTokenAsync$d__10;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass11_1
    class $$c__DisplayClass11_1;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__11
    struct $SendWebRequestAsync$d__11;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__12
    struct $SendAndWaitAsync$d__12;
    // static field const value: static private System.String kLoginPath
    static constexpr const char* kLoginPath = "/api/v1/Account/LogIn";
    // Get static field: static private System.String kLoginPath
    static ::Il2CppString* _get_kLoginPath();
    // Set static field: static private System.String kLoginPath
    static void _set_kLoginPath(::Il2CppString* value);
    // static field const value: static private System.String kLogoutPath
    static constexpr const char* kLogoutPath = "/api/v1/Account/LogOut";
    // Get static field: static private System.String kLogoutPath
    static ::Il2CppString* _get_kLogoutPath();
    // Set static field: static private System.String kLogoutPath
    static void _set_kLogoutPath(::Il2CppString* value);
    // private OnlineServices.API.IUserLoginDtoDataSource _userLoginDataSource
    // Offset: 0x10
    OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource;
    // private System.UriBuilder _uriBuilder
    // Offset: 0x18
    System::UriBuilder* uriBuilder;
    // private LeaderboardsDTO.TokenDTO _jwtToken
    // Offset: 0x20
    LeaderboardsDTO::TokenDTO* jwtToken;
    // public System.Void .ctor(OnlineServices.API.IUserLoginDtoDataSource userLoginDataSource, System.UriBuilder uriBuilder)
    // Offset: 0xC2AF94
    static HTTPLeaderboardsOathHelper* New_ctor(OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource, System::UriBuilder* uriBuilder);
    // public System.Threading.Tasks.Task`1<System.String> SendWebRequestWithOathAsync(System.String path, System.String method, System.Object objectToSendAsJson, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC2B654
    System::Threading::Tasks::Task_1<::Il2CppString*>* SendWebRequestWithOathAsync(::Il2CppString* path, ::Il2CppString* method, ::Il2CppObject* objectToSendAsJson, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task LogOut()
    // Offset: 0xC2B9DC
    System::Threading::Tasks::Task* LogOut();
    // private System.Threading.Tasks.Task LoginIfNeededAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC2BDD4
    System::Threading::Tasks::Task* LoginIfNeededAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Boolean IsUserLoggedIn()
    // Offset: 0xC2BF14
    bool IsUserLoggedIn();
    // private System.Threading.Tasks.Task`1<LeaderboardsDTO.TokenDTO> GetJwtTokenAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC2BF24
    System::Threading::Tasks::Task_1<LeaderboardsDTO::TokenDTO*>* GetJwtTokenAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.String> SendWebRequestAsync(System.String uri, System.String method, System.String bodyData, System.String bearerToken)
    // Offset: 0xC2C05C
    System::Threading::Tasks::Task_1<::Il2CppString*>* SendWebRequestAsync(::Il2CppString* uri, ::Il2CppString* method, ::Il2CppString* bodyData, ::Il2CppString* bearerToken);
    // private System.Threading.Tasks.Task SendAndWaitAsync(UnityEngine.Networking.UnityWebRequest webRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC2C1E0
    System::Threading::Tasks::Task* SendAndWaitAsync(UnityEngine::Networking::UnityWebRequest* webRequest, System::Threading::CancellationToken cancellationToken);
    // static public System.Void Log(System.String message)
    // Offset: 0xC2C310
    static void Log(::Il2CppString* message);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper*, "OnlineServices.API", "HTTPLeaderboardsOathHelper");
#pragma pack(pop)
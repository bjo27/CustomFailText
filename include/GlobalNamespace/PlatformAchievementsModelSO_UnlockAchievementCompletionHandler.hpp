// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformAchievementsModelSO/UnlockAchievementCompletionHandler
  class PlatformAchievementsModelSO::UnlockAchievementCompletionHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xBC0514
    static PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(PlatformAchievementsModelSO/UnlockAchievementResult result)
    // Offset: 0xBBFEF8
    void Invoke(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult result);
    // public System.IAsyncResult BeginInvoke(PlatformAchievementsModelSO/UnlockAchievementResult result, System.AsyncCallback callback, System.Object object)
    // Offset: 0xBC0528
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xBC05B4
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformAchievementsModelSO/UnlockAchievementCompletionHandler
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*, "", "PlatformAchievementsModelSO/UnlockAchievementCompletionHandler");
#pragma pack(pop)
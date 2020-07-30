// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialSongController/TutorialObjectSpawnData
  class TutorialSongController::TutorialObjectSpawnData : public ::Il2CppObject {
    public:
    // public Signal gameEvent
    // Offset: 0x10
    GlobalNamespace::Signal* gameEvent;
    // public System.Int32 beatOffset
    // Offset: 0x18
    int beatOffset;
    // public System.Int32 firstTimeBeatOffset
    // Offset: 0x1C
    int firstTimeBeatOffset;
    // public System.Void .ctor(Signal gameEvent, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset)
    // Offset: 0xC3724C
    static TutorialSongController::TutorialObjectSpawnData* New_ctor(GlobalNamespace::Signal* gameEvent, int firstTimeBeatOffset, int beatOffset);
  }; // TutorialSongController/TutorialObjectSpawnData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*, "", "TutorialSongController/TutorialObjectSpawnData");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:08 PM
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatDataTransformHelper
  class BeatDataTransformHelper : public ::Il2CppObject {
    public:
    // static public BeatmapData CreateTransformedBeatmapData(BeatmapData beatmapData, GameplayModifiers gameplayModifiers, PracticeSettings practiceSettings, PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0x1972498
    static GlobalNamespace::BeatmapData* CreateTransformedBeatmapData(GlobalNamespace::BeatmapData* beatmapData, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PracticeSettings* practiceSettings, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
    // public System.Void .ctor()
    // Offset: 0x19730A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatDataTransformHelper* New_ctor();
  }; // BeatDataTransformHelper
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatDataTransformHelper*, "", "BeatDataTransformHelper");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: SongController
#include "GlobalNamespace/SongController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: INoteController
  class INoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: BeatmapLineData
  class BeatmapLineData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialSongController
  class TutorialSongController : public GlobalNamespace::SongController {
    public:
    // Nested type: GlobalNamespace::TutorialSongController::InitData
    class InitData;
    // Nested type: GlobalNamespace::TutorialSongController::TutorialObjectSpawnData
    class TutorialObjectSpawnData;
    // Nested type: GlobalNamespace::TutorialSongController::TutorialNoteSpawnData
    class TutorialNoteSpawnData;
    // Nested type: GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData
    class TutorialObstacleSpawnData;
    // Nested type: GlobalNamespace::TutorialSongController::$StartSongCoroutine$d__37
    class $StartSongCoroutine$d__37;
    // private AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private System.Int32 _startWaitTimeInBeats
    // Offset: 0x28
    int startWaitTimeInBeats;
    // private System.Int32 _numberOfBeatsToSnap
    // Offset: 0x2C
    int numberOfBeatsToSnap;
    // private System.Int32 _obstacleDurationInBeats
    // Offset: 0x30
    int obstacleDurationInBeats;
    // private Signal _noteCuttingTutorialPartDidStartSignal
    // Offset: 0x38
    GlobalNamespace::Signal* noteCuttingTutorialPartDidStartSignal;
    // private Signal _noteCuttingInAnyDirectionDidStartSignal
    // Offset: 0x40
    GlobalNamespace::Signal* noteCuttingInAnyDirectionDidStartSignal;
    // private Signal _bombCuttingTutorialPartDidStartSignal
    // Offset: 0x48
    GlobalNamespace::Signal* bombCuttingTutorialPartDidStartSignal;
    // private Signal _leftObstacleTutorialPartDidStartSignal
    // Offset: 0x50
    GlobalNamespace::Signal* leftObstacleTutorialPartDidStartSignal;
    // private Signal _rightObstacleTutorialPartDidStartSignal
    // Offset: 0x58
    GlobalNamespace::Signal* rightObstacleTutorialPartDidStartSignal;
    // private Signal _topObstacleTutorialPartDidStartSignal
    // Offset: 0x60
    GlobalNamespace::Signal* topObstacleTutorialPartDidStartSignal;
    // private Signal _noteWasCutOKSignal
    // Offset: 0x68
    GlobalNamespace::Signal* noteWasCutOKSignal;
    // private Signal _noteWasCutTooSoonSignal
    // Offset: 0x70
    GlobalNamespace::Signal* noteWasCutTooSoonSignal;
    // private Signal _noteWasCutWithWrongColorSignal
    // Offset: 0x78
    GlobalNamespace::Signal* noteWasCutWithWrongColorSignal;
    // private Signal _noteWasCutFromDifferentDirectionSignal
    // Offset: 0x80
    GlobalNamespace::Signal* noteWasCutFromDifferentDirectionSignal;
    // private Signal _noteWasCutWithSlowSpeedSignal
    // Offset: 0x88
    GlobalNamespace::Signal* noteWasCutWithSlowSpeedSignal;
    // private Signal _bombWasCutSignal
    // Offset: 0x90
    GlobalNamespace::Signal* bombWasCutSignal;
    // private TutorialSongController/InitData _initData
    // Offset: 0x98
    GlobalNamespace::TutorialSongController::InitData* initData;
    // private BeatmapObjectManager _beatmapObjectManager
    // Offset: 0xA0
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0xA8
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private System.Boolean <specialTutorialMode>k__BackingField
    // Offset: 0xB0
    bool specialTutorialMode;
    // private System.Int32 _tutorialBeatmapObjectIndex
    // Offset: 0xB4
    int tutorialBeatmapObjectIndex;
    // private System.Int32 _prevSpawnedBeatmapObjectIndex
    // Offset: 0xB8
    int prevSpawnedBeatmapObjectIndex;
    // private System.Int32 _nextBeatmapObjectId
    // Offset: 0xBC
    int nextBeatmapObjectId;
    // private System.Single _songBPM
    // Offset: 0xC0
    float songBPM;
    // private TutorialSongController/TutorialObjectSpawnData[] _normalModeTutorialObjectsSpawnData
    // Offset: 0xC8
    ::Array<GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*>* normalModeTutorialObjectsSpawnData;
    // private TutorialSongController/TutorialObjectSpawnData[] _specialModeTutorialObjectsSpawnData
    // Offset: 0xD0
    ::Array<GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*>* specialModeTutorialObjectsSpawnData;
    // public System.Boolean get_specialTutorialMode()
    // Offset: 0xC35A48
    bool get_specialTutorialMode();
    // public System.Void set_specialTutorialMode(System.Boolean value)
    // Offset: 0xC35A50
    void set_specialTutorialMode(bool value);
    // protected System.Void Awake()
    // Offset: 0xC35A5C
    void Awake();
    // protected System.Void Start()
    // Offset: 0xC362AC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC363E8
    void OnDestroy();
    // private System.Collections.IEnumerator StartSongCoroutine()
    // Offset: 0xC3680C
    System::Collections::IEnumerator* StartSongCoroutine();
    // private System.Void HandleNoteWasCutEvent(INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xC36938
    void HandleNoteWasCutEvent(GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void HandleNoteWasMissed(INoteController noteController)
    // Offset: 0xC36AD0
    void HandleNoteWasMissed(GlobalNamespace::INoteController* noteController);
    // private System.Void HandleObstacleDidPassThreeQuartersOfMove2(ObstacleController obstacleController)
    // Offset: 0xC36CB8
    void HandleObstacleDidPassThreeQuartersOfMove2(GlobalNamespace::ObstacleController* obstacleController);
    // protected System.Void UpdateBeatmapData(System.Single noteTime)
    // Offset: 0xC36564
    void UpdateBeatmapData(float noteTime);
    // private System.Single GetNextBeatmapObjectTime(System.Int32 beatOffset)
    // Offset: 0xC36CCC
    float GetNextBeatmapObjectTime(int beatOffset);
    // private BeatmapLineData[] CreateBeatmapLinesData(System.Single time, TutorialSongController/TutorialObstacleSpawnData tutorialObstacleSpawnData)
    // Offset: 0xC36E80
    ::Array<GlobalNamespace::BeatmapLineData*>* CreateBeatmapLinesData(float time, GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData* tutorialObstacleSpawnData);
    // private BeatmapLineData[] CreateBeatmapLinesData(System.Single time, TutorialSongController/TutorialNoteSpawnData tutorialNoteSpawnData)
    // Offset: 0xC36D24
    ::Array<GlobalNamespace::BeatmapLineData*>* CreateBeatmapLinesData(float time, GlobalNamespace::TutorialSongController::TutorialNoteSpawnData* tutorialNoteSpawnData);
    // private BeatmapLineData[] CreateBeatmapLines(System.Int32 lineCount, System.Int32 activeLineIndex)
    // Offset: 0xC36FDC
    ::Array<GlobalNamespace::BeatmapLineData*>* CreateBeatmapLines(int lineCount, int activeLineIndex);
    // public override System.Void StartSong()
    // Offset: 0xC36514
    // Implemented from: SongController
    // Base method: System.Void SongController::StartSong()
    void StartSong();
    // public override System.Void StopSong()
    // Offset: 0xC368B4
    // Implemented from: SongController
    // Base method: System.Void SongController::StopSong()
    void StopSong();
    // public override System.Void PauseSong()
    // Offset: 0xC368E8
    // Implemented from: SongController
    // Base method: System.Void SongController::PauseSong()
    void PauseSong();
    // public override System.Void ResumeSong()
    // Offset: 0xC3691C
    // Implemented from: SongController
    // Base method: System.Void SongController::ResumeSong()
    void ResumeSong();
    // public System.Void .ctor()
    // Offset: 0xC3712C
    // Implemented from: SongController
    // Base method: System.Void SongController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialSongController* New_ctor();
  }; // TutorialSongController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController*, "", "TutorialSongController");
#pragma pack(pop)
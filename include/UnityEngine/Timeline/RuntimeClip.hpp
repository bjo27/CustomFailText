// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Timeline.RuntimeClipBase
#include "UnityEngine/Timeline/RuntimeClipBase.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.RuntimeClip
  class RuntimeClip : public UnityEngine::Timeline::RuntimeClipBase {
    public:
    // private UnityEngine.Timeline.TimelineClip m_Clip
    // Offset: 0x18
    UnityEngine::Timeline::TimelineClip* m_Clip;
    // private UnityEngine.Playables.Playable m_Playable
    // Offset: 0x20
    UnityEngine::Playables::Playable m_Playable;
    // private UnityEngine.Playables.Playable m_ParentMixer
    // Offset: 0x30
    UnityEngine::Playables::Playable m_ParentMixer;
    // public System.Void .ctor(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer)
    // Offset: 0x107C7B8
    static RuntimeClip* New_ctor(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer);
    // private System.Void Create(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer)
    // Offset: 0x1088570
    void Create(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer);
    // public UnityEngine.Timeline.TimelineClip get_clip()
    // Offset: 0x1088608
    UnityEngine::Timeline::TimelineClip* get_clip();
    // public UnityEngine.Playables.Playable get_mixer()
    // Offset: 0x1088610
    UnityEngine::Playables::Playable get_mixer();
    // public UnityEngine.Playables.Playable get_playable()
    // Offset: 0x108861C
    UnityEngine::Playables::Playable get_playable();
    // public System.Void SetTime(System.Double time)
    // Offset: 0x1088770
    void SetTime(double time);
    // public System.Void SetDuration(System.Double duration)
    // Offset: 0x10887D0
    void SetDuration(double duration);
    // public override System.Double get_start()
    // Offset: 0x108850C
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_start()
    double get_start();
    // public override System.Double get_duration()
    // Offset: 0x1088550
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_duration()
    double get_duration();
    // public override System.Void set_enable(System.Boolean value)
    // Offset: 0x1088628
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::set_enable(System.Boolean value)
    void set_enable(bool value);
    // public override System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x1088830
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    void EvaluateAt(double localTime, UnityEngine::Playables::FrameData frameData);
    // public override System.Void Reset()
    // Offset: 0x1088E34
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::Reset()
    void Reset();
  }; // UnityEngine.Timeline.RuntimeClip
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::RuntimeClip*, "UnityEngine.Timeline", "RuntimeClip");
#pragma pack(pop)
// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Forward declaring type: TestStartedEvent
  class TestStartedEvent;
  // Forward declaring type: TestFinishedEvent
  class TestFinishedEvent;
  // Forward declaring type: RunStartedEvent
  class RunStartedEvent;
  // Forward declaring type: RunFinishedEvent
  class RunFinishedEvent;
  // Forward declaring type: PlaymodeTestsControllerSettings
  class PlaymodeTestsControllerSettings;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestAssemblyRunner
  class UnityTestAssemblyRunner;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController
  class PlaymodeTestsController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$Start$d__12
    class $Start$d__12;
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$TestRunnerCoroutine$d__15
    class $TestRunnerCoroutine$d__15;
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c
    class $$c;
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$Run$d__16
    class $Run$d__16;
    // private System.Collections.IEnumerator m_TestSteps
    // Offset: 0x18
    System::Collections::IEnumerator* m_TestSteps;
    // private System.Collections.Generic.List`1<System.String> m_AssembliesWithTests
    // Offset: 0x20
    System::Collections::Generic::List_1<::Il2CppString*>* m_AssembliesWithTests;
    // UnityEngine.TestTools.TestRunner.TestStartedEvent testStartedEvent
    // Offset: 0x28
    UnityEngine::TestTools::TestRunner::TestStartedEvent* testStartedEvent;
    // UnityEngine.TestTools.TestRunner.TestFinishedEvent testFinishedEvent
    // Offset: 0x30
    UnityEngine::TestTools::TestRunner::TestFinishedEvent* testFinishedEvent;
    // UnityEngine.TestTools.TestRunner.RunStartedEvent runStartedEvent
    // Offset: 0x38
    UnityEngine::TestTools::TestRunner::RunStartedEvent* runStartedEvent;
    // UnityEngine.TestTools.TestRunner.RunFinishedEvent runFinishedEvent
    // Offset: 0x40
    UnityEngine::TestTools::TestRunner::RunFinishedEvent* runFinishedEvent;
    // static field const value: static System.String kPlaymodeTestControllerName
    static constexpr const char* kPlaymodeTestControllerName = "Code-based tests runner";
    // Get static field: static System.String kPlaymodeTestControllerName
    static ::Il2CppString* _get_kPlaymodeTestControllerName();
    // Set static field: static System.String kPlaymodeTestControllerName
    static void _set_kPlaymodeTestControllerName(::Il2CppString* value);
    // public UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings settings
    // Offset: 0x48
    UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings* settings;
    // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestAssemblyRunner m_Runner
    // Offset: 0x50
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner* m_Runner;
    // public System.Collections.Generic.List`1<System.String> get_AssembliesWithTests()
    // Offset: 0xE30B98
    System::Collections::Generic::List_1<::Il2CppString*>* get_AssembliesWithTests();
    // public System.Void set_AssembliesWithTests(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0xE30BA0
    void set_AssembliesWithTests(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // public System.Collections.IEnumerator Start()
    // Offset: 0xE30BA8
    System::Collections::IEnumerator* Start();
    // static System.Boolean IsControllerOnScene()
    // Offset: 0xE30C50
    static bool IsControllerOnScene();
    // static UnityEngine.TestTools.TestRunner.PlaymodeTestsController GetController()
    // Offset: 0xE30CD4
    static UnityEngine::TestTools::TestRunner::PlaymodeTestsController* GetController();
    // public System.Collections.IEnumerator TestRunnerCoroutine()
    // Offset: 0xE30D38
    System::Collections::IEnumerator* TestRunnerCoroutine();
    // public System.Collections.IEnumerator Run()
    // Offset: 0xE30DE0
    System::Collections::IEnumerator* Run();
    // public System.Void Cleanup()
    // Offset: 0xE30E88
    void Cleanup();
    // static public System.Void TryCleanup()
    // Offset: 0xE30F5C
    static void TryCleanup();
    // public System.Void .ctor()
    // Offset: 0xE30FF0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlaymodeTestsController* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsController
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsController");
#pragma pack(pop)
#pragma once

namespace RE::ID
{
	namespace Actor
	{
		inline constexpr REL::Offset GetItemCountInContainer{ 0 };  // 0x65DA780
	}

	namespace FORM_ENUM_STRING
	{
		inline constexpr REL::Offset FormEnumString{ 0 };  // 0x8FDD6A0
	}

	namespace GameSettingCollection
	{
		inline constexpr REL::Offset Singleton{ 0 };  // 0x8FE1E10
	}

	namespace InterfaceManager
	{
		inline constexpr REL::Offset GetInstance{ 0 };  // 0x6603730
	}

	namespace MapMenu
	{
		inline constexpr REL::Offset CenterMapAt{ 0 };               // 0x6587A30
		inline constexpr REL::Offset SwitchTabs{ 0 };                //0x658CC90
		inline constexpr REL::Offset SwitchTabsNotifyingAltar{ 0 };  // 0x658CE30
		inline constexpr REL::Offset Update{ 0 };                    // 0x658D080
	}

	namespace MenuConsole
	{
		inline constexpr REL::Offset Instance{ 0 };   // 0x665C360
		inline constexpr REL::Offset PrintLine{ 0 };  // 0x665C580
	}

	namespace PlayerCharacter
	{
		inline constexpr REL::Offset Singleton{ 0x9413B08 };
	}

	namespace Script
	{
		inline constexpr REL::Offset ParseParameters{ 0x662DCA0 };
	}

	namespace SCRIPT_FUNCTION
	{
		inline constexpr REL::Offset ConsoleFunctions{ 0x8FB6600 };
		inline constexpr REL::Offset ScriptFunctions{ 0x8FAF210 };
	}

	namespace Setting
	{
		inline constexpr REL::Offset SetString{ 0 };  // 0x6710B70
	}

	namespace TESDataHandler
	{
		inline constexpr REL::Offset Singleton{ 0x9474418 };
	}

	namespace TESForm
	{
		inline constexpr REL::Offset AllForms{ 0 };            // 0x8FDDD30
		inline constexpr REL::Offset AllFormsByEditorID{ 0 };  // 0x8FDDD70
	}

	namespace TESFullName
	{
		inline constexpr REL::Offset GetFullName{ 0 };  // 0x65A8170
	}

	namespace TESObjectREFR
	{
		inline constexpr REL::Offset GetInterior{ 0 };    // 0x65A8400
		inline constexpr REL::Offset GetWorldSpace{ 0 };  // 0x65A9F10
	}

	namespace Tile
	{
		inline constexpr REL::Offset GetMenuByClass{ 0 };  // 0x671B0C0
		inline constexpr REL::Offset GetMenu{ 0 };         // 0x671B070
	}

	inline constexpr REL::Offset RTDynamicCast{ 0x6BF7A96 };
}

namespace UE::ID
{
	namespace FFrame
	{
		inline constexpr REL::Offset KismetExecutionMessage{ 0 };  // 0x10FD030
	}

	namespace FLogScopedCategoryAndVerbosityOverride
	{
		inline constexpr REL::Offset GetTLSCurrent{ 0 };  // 0x0EA74B0
	}

	namespace FMemory
	{
		inline constexpr REL::Offset Free{ 0x0E24570 };
		inline constexpr REL::Offset Malloc{ 0x0E30FB0 };
		inline constexpr REL::Offset Realloc{ 0 };       // 0x0E3EE30
		inline constexpr REL::Offset QuantizeSize{ 0 };  // 0x0E3E800
	}

	namespace FName
	{
		inline constexpr REL::Offset Ctor1{ 0 };         // 0x0F45900
		inline constexpr REL::Offset Ctor2{ 0 };         // 0x0F45A70
		inline constexpr REL::Offset AppendString{ 0 };  // 0x0F4B710
		inline constexpr REL::Offset ToString{ 0 };      // 0x0F61010
	}

	namespace FNamePool
	{
		inline constexpr REL::Offset GetSingleton{ 0x9061500 };
	}

	namespace FParse
	{
		inline constexpr REL::Offset Command{ 0 };  // 0x0F0F5E0
	}

	namespace FSelfRegisteringExec
	{
		inline constexpr REL::Offset Ctor{ 0 };  // 0x0EEA960
		inline constexpr REL::Offset Dtor{ 0 };  // 0x0EEAF70
	}

	namespace FString
	{
		inline constexpr REL::Offset AppendChar{ 0 };    // 0x0DE7710
		inline constexpr REL::Offset AppendChars1{ 0 };  // 0x0DE7790
		inline constexpr REL::Offset AppendChars2{ 0 };  // 0x0DE77A0
		inline constexpr REL::Offset Ctor1{ 0 };         // 0x0DE4F20
		inline constexpr REL::Offset Ctor2{ 0 };         // 0x0DE50B0
		inline constexpr REL::Offset Reset{ 0 };         // 0x0DF0110
	}

	namespace FText
	{
		inline constexpr REL::Offset Ctor1{ 0 };     // 0x0E561F0
		inline constexpr REL::Offset GetEmpty{ 0 };  // 0x0E6E7C0
		inline constexpr REL::Offset Rebuild{ 0 };   // 0x0E7F220
	}

	namespace FUObjectArray
	{
		inline constexpr REL::Offset GetSingleton{ 0x91077E0 };
	}

	namespace UAltarCheatManager
	{
		inline constexpr REL::Offset GetSelectedActor{ 0 };  // 0x2CE76F0
		inline constexpr REL::Offset SetSelectedActor{ 0 };  // 0x479DAB0
	}

	namespace UClass
	{
		inline constexpr REL::Offset FindFunctionByName{ 0 };  // 0x1005AA0
	}

	namespace UEngine
	{
		inline constexpr REL::Offset GetSingleton{ 0x92734C0 };
		inline constexpr REL::Offset GetCurrentPlayWorld{ 0 };  // 0x37F0A20
	}

	namespace UGameplayStatics
	{
		inline constexpr REL::Offset GetPlayerController{ 0 };  // 0x31B6B80
	}

	namespace UObjectBaseUtility
	{
		inline constexpr REL::Offset GetFullName1{ 0 };  // 0x111F730
		inline constexpr REL::Offset GetFullName2{ 0 };  // 0x111F8D0
	}

	namespace UWorld
	{
		inline constexpr REL::Offset GetSingleton{ 0 };  // 0x92B3878
	}

	namespace VOblivionUEPairingGate
	{
		inline constexpr REL::Offset GetSingleton{ 0 };  // 0x45C16F0
	}

	inline constexpr REL::Offset AsyncTask{ 0 };                       // 0x0DC48F0
	inline constexpr REL::Offset GetExecRegistry{ 0 };                 // 0x0EF7E60
	inline constexpr REL::Offset GetExecRegistryLock{ 0 };             // 0x0EF7ED0
	inline constexpr REL::Offset GetTransientPackage{ 0 };             // 0x109A510
	inline constexpr REL::Offset IsInGameThread{ 0 };                  // 0x0E3C380
	inline constexpr REL::Offset LowLevelFatalErrorHandler{ 0 };       // 0x0ED7980
	inline constexpr REL::Offset StaticConstructObject_Internal{ 0 };  // 0x1129D30
	inline constexpr REL::Offset StaticFindObjectFast{ 0 };            // 0x112C350
	inline constexpr REL::Offset StaticFindObjectFastSafe{ 0 };        // 0x112CC40
	inline constexpr REL::Offset StaticFindObject{ 0 };                // 0x112C0F0
	inline constexpr REL::Offset StaticFindObjectSafe{ 0 };            // 0x112CCE0
}

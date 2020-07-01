// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE4_Udemy_1_6 : ModuleRules
{
	public UE4_Udemy_1_6(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

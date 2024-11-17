// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class battle_ : ModuleRules
{
	public battle_(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "AssetRegistry", "InputCore", "EnhancedInput", "ImageWrapper"});
	}
}

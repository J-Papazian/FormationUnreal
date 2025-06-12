// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FormationUnreal : ModuleRules
{
	public FormationUnreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"FormationUnreal",
			"FormationUnreal/Variant_Platforming",
			"FormationUnreal/Variant_Combat",
			"FormationUnreal/Variant_Combat/AI",
			"FormationUnreal/Variant_SideScrolling",
			"FormationUnreal/Variant_SideScrolling/Gameplay",
			"FormationUnreal/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

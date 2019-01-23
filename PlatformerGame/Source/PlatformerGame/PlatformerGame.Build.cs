// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PlatformerGame : ModuleRules
{
	public PlatformerGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivatePCHHeaderFile = "Public/PlatformerGame.h";

		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore", 
               	"GameMenuBuilder",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"PlatformerGameLoadingScreen"
			}
		); 

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Slate",
				"SlateCore",
			}
		);

        PrivateIncludePaths.AddRange(new string[] { 
			"PlatformerGame/Private/UI/Menu",
			});
	}
}

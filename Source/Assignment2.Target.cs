// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Assignment2Target : TargetRules
{
	public Assignment2Target( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_2;

        bEnforceIWYU = true;
        bUseUnityBuild = true;
        bUsePCHFiles = true;

        ExtraModuleNames.Add("Assignment2");
	}
}

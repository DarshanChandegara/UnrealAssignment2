// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Assignment2EditorTarget : TargetRules
{
	public Assignment2EditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_2;

        bEnforceIWYU = true;
        bUseUnityBuild = true;
        bUsePCHFiles = true;


        ExtraModuleNames.Add("Assignment2");
	}
}

// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class CYY_Demo : ModuleRules
{
	public CYY_Demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore",
			// --- 请添加以下模块 ---
			"Slate",
			"SlateCore",
			"GameplayTags"  // 因为你的连招系统大量使用了 Tag，主项目最好也加上这个
		});
		
		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

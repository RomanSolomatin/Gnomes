// DigitalDominus (C) 2016

using UnrealBuildTool;

public class Gnomes : ModuleRules
{
	public Gnomes(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}

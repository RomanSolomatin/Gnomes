// DigitalDominus (C) 2016

using UnrealBuildTool;
using System.Collections.Generic;

public class GnomesTarget : TargetRules
{
	public GnomesTarget(TargetInfo Target)
	{
		Type = TargetType.Game;
	}

	//
	// TargetRules interface.
	//

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "Gnomes" } );
	}
}

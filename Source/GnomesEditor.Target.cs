// DigitalDominus (C) 2016

using UnrealBuildTool;
using System.Collections.Generic;

public class GnomesEditorTarget : TargetRules
{
	public GnomesEditorTarget(TargetInfo Target)
	{
		Type = TargetType.Editor;
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

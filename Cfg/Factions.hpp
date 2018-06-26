class CfgFactionClasses
{
	class SPAG
	 {
		scope = 2;
		displayName = "Spagistan";
		flag = "\spag\data\gui\Spag_Flag_Square_ca.paa";
		icon = "\spag\data\gui\Spag_Flag_Square_ca.paa";
		priority = 0;
		side = 2;
	 };
};

//TODO: CfgGroups is important for ALiVE compatability and should be identical to the above
// class CfgGroups
// {
	// West // Note side number 1 == West
	// BLU_F // Note faction name matches the name in CfgFactionClasses
		// Armored // Note all these group categories are using standard naming convention
		// Infantry
			// BUS_InfSquad
				// faction = "BLU_F";
				// name = "Rifle Squad";
				// side = 1; // Note this is important
		// Mechanized
		// Motorized
		// SpecOps
		// Support
// };
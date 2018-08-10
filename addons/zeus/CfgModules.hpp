//Modules

class CfgVehicles
{

	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};
		class ModuleDescription;
	};

	class Spag_ModuleEnding_F: Module_F
	{
		author = "Kalthramis";
		scope = 2;
		scopeCurator = 2;
		category = "MissionFlow";
		displayName = "End Mission (Spagistan)";
		icon = QPATHTOEF(common,gui\Spag_Flag_ca.paa);
		portrait = QPATHTOEF(common,gui\Spag_Flag_ca.paa);
		function = QFUNC(spawnEndMissionDisplay);
		isGlobal = 1;
		isTriggerActivated = 0;
		curatorCanAttach = 1;
		curatorCost = 0;

		class Arguments {};
		class ModuleDescription: ModuleDescription
		{
			description = "DO NOT USE IN 3DEN. Ends the mission with extra details - disables simulation for all players.";
			sync[] = {};
		};
	};
};

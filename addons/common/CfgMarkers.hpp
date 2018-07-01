class CfgMarkers
{
	/* class Flag;
	class flag_NATO: Flag; */
	//why is below not working
	class flag_Spain;
	class flag_Spagistan : flag_Spain
	{
		scope = 2;
		name = "Spagistan";
		icon = QPATHTOF(gui\Spag_Flag_Square_ca.paa);
		texture = QPATHTOF(gui\Spag_Flag_ca.paa);
		size = 32;
	};
};

class moduleEndMissionSpag
{
	idd = -1;

	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.23444445;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.30555556;
			style = 80;
			text = "";
			colorBackground[] = {0.2,0.2,0.2,0.8471};
			colorText[] = {0.0745,0.5059,0.1412,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class BackgroundBorder
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.30555556;
			style = 64;
			text = "End Mission (Spagistan)";
			colorBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class SaveAndEnd
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.06111112;
			style = 2+0;
			text = "Save and End Mission";
			borderSize = 0;
			colorBackground[] = {0.2902,0.5686,0.1882,1};
			colorBackgroundActive[] = {1,1,1,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,1};
			colorDisabled[] = {0.949,0.949,0.949,1};
			colorFocused[] = {0.6,0,0,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			soundEnter[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			soundEscape[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			soundPush[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			default = true;
			shadow = 2;
			onButtonClick = QUOTE(closeDialog 0; [player] spawn FUNC(moduleEndMission));
		};
		class EndMissionNoSave
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.03666667;
			style = 2+0+16;
			text = "End Mission (No Save)";
			borderSize = 0;
			colorBackground[] = {0.4,0.4,0.4,1};
			colorBackgroundActive[] = {0,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,1};
			colorDisabled[] = {0.949,0.949,0.949,1};
			colorFocused[] = {0.6,0,0,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			soundEnter[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			soundEscape[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			soundPush[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			onButtonClick = QUOTE(closeDialog 0; ['nothing'] spawn FUNC(moduleEndMission));
		};
		class EndMissionNoSave_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.44444445;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.06111112;
			style = 0+2;
			text = "Cancel";
			borderSize = 0;
			colorBackground[] = {0.4016,0.0247,0.0247,1};
			colorBackgroundActive[] = {1,1,1,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,1};
			colorDisabled[] = {0.949,0.949,0.949,1};
			colorFocused[] = {1,1,1,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			soundEnter[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			soundEscape[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			soundPush[] = { QPATHTOEF(common,data\sounds\menu_blip1.ogg),0.09,1.0};
			blinkingPeriod = 0;
			onButtonClick = "closeDialog 0";
			shadow = 2;

		};

	};

};

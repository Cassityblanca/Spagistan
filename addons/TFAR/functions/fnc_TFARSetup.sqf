/*
 * Author: Kalthramis
 * Sets TFAR's starting settings
 *
 * Arguments:
 *	None
 * Return Value:
 *  None
 *
 * Public: No
 * Clientside: yes
 * Serverside: yes
 */
 #include "script_component.hpp";

// GLOBALS
if(isNil "TF_defaultEastRiflemanRadio") then {
	TF_defaultEastRiflemanRadio = "TFAR_anprc148jem";
};
if(isNil "TF_defaultEastBackpack") then {
	TF_defaultEastBackpack = "TFAR_SPAG_mr3000";
};

// OVERRIDE
/* if(isNil "TFAR_defaultFrequencies_sr_east") then {
	TFAR_defaultFrequencies_sr_east = ["100"];
}; */
TFAR_defaultFrequencies_sr_east = ["100"];

/* if(isNil "TFAR_defaultFrequencies_sr_independent") then {
	TFAR_defaultFrequencies_sr_independent = ["100"];
} */
TFAR_defaultFrequencies_sr_independent = ["100"];


// VOLUMES
if(isNil "TF_speakerDistance") then {
	TF_speakerDistance = 50;
}

100 call TFAR_fnc_setVoiceVolume;
player setVariable ["tf_globalVolume", 1]

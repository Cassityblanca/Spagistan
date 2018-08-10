/*
 * Author: Kalthramis
 * Spawns RSCmoduleEndMissionSpag for the curator. Currently does this for ALL curators, until I gain more wrinkles.
 *
 * Arguments:
 * 0: <STRING> name of disaply
 *
 * Return Value:
 * None
 *
 * Example:
 * ["RSCmoduleEndMissionSpag"] call spag_zeus_fnc_SpawncuratorDisaply
 *
 * Public: Yes
 */

/* params ["_display"]; */
{
	createDialog "moduleEndMissionSpag";
}foreach AllCurators;

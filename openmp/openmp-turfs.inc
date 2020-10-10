// =============================================================================
//
// THIS FILE WAS GENERATED AUTOMATICALLY - DO NOT EDIT BY HAND!
//
// If there is an issue in this file, please open an issue.
//
// In order to modify how this file is generated, see the source code of
// "nativegen". These natives are generated from "SCRIPT_API" and
// "SCRIPT_METHOD" macros from the C++ source code.
//
// =============================================================================

#if defined _inc_openmp_turfs
	#endinput
#endif
#define _inc_openmp_turfs

native Turf__Create(Float:position_x1, Float:position_y1, Float:position_x2, Float:position_y2);

native bool:Turf__Destroy(turf);

native bool:Turf__IsValid(Turf:unset);

native Turf_SetColour(Turf:turf, colour);

native Turf_GetColour(Turf:turf);

native Turf_SetPosition(Turf:turf, Float:position_x1, Float:position_y1, Float:position_x2, Float:position_y2);

native Turf_GetPosition(Turf:turf, &Float:position_x1, &Float:position_y1, &Float:position_x2, &Float:position_y2);

native Turf_Display(Turf:turf, colour, Player:player, bool:show);

native Turf_Has(Turf:turf, Player:player);

native Turf_Flash(Turf:turf, colour);

native Turf_StopFlashing(Turf:turf);


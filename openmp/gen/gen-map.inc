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

#if defined _inc_gen_map
	#endinput
#endif
#define _inc_gen_map

native bool:SetPlayerWorldBounds(Player:player, Float:maxX, Float:minX, Float:maxY, Float:minY);

native ShowPlayerNameTagForPlayer(Player:player, Player:showplayer, bool:show);

native bool:SetPlayerMapIcon(Player:player, id, Float:pos_x, Float:pos_y, Float:pos_z, type, colour, style = MAPICON_LOCAL);

native bool:RemovePlayerMapIcon(Player:player, id);


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

#if defined _inc_openmp_miscscripting
	#endinput
#endif
#define _inc_openmp_miscscripting

native CreateExplosion(Float:x, Float:y, Float:z, type, Float:r);

native CreateExplosionForPlayer(Player:player, Float:x, Float:y, Float:z, type, Float:r);

native Float:ASin(Float:value);

native Float:ACos(Float:value);

native Float:ATan(Float:value);

native Float:ATan2(Float:x, Float:y);

native Float:VectorSize(Float:x, Float:y, Float:z);

native bool:SendClientMessageToAll(colour, string:msg[]);

native bool:SendPlayerMessageToAll(Player:sender, string:msg[]);

native bool:SendDeathMessage(Player:killer, Player:killee, weapon);

native bool:GameTextForAll(string:msg[], time, style);

native bool:SendClientMessage(Player:player, colour, string:msg[]);

native bool:SendPlayerMessageToPlayer(Player:player, Player:sender, string:msg[]);

native bool:SendDeathMessageToPlayer(Player:player, Player:killer, Player:killee, weapon);

native bool:GameTextForPlayer(Player:player, string:msg[], time, style);

native bool:SetPlayerChatBubble(Player:player, string:text[], colour, Float:drawDistance, expireTime);


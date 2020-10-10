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

#if defined _inc_gen_game
	#endinput
#endif
#define _inc_gen_game

native bool:EnableStuntBonusForAll(bool:enable);

native bool:EnableStuntBonusForPlayer(Player:player, bool:enable);

native bool:GetStuntBonusForPlayer(Player:player);

native bool:SetGravity(Float:gravity);

native bool:SetPlayerGravity(Player:player, Float:gravity);

native Float:GetPlayerGravity(Player:player);

native bool:SetWeather(weather);

native bool:SetPlayerWeather(Player:player, weather);

native GetPlayerWeather(Player:player);

native bool:EnableZoneNames(bool:enable);

native bool:AllowInteriorWeapons(bool:enable);

native bool:SetDeathDropAmount(amount);

native bool:EnableTirePopping(bool:enable);

native bool:LimitGlobalChatRadius(Float:range);


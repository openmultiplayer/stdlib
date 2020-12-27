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

#if defined _inc_openmp_player
	#endinput
#endif
#define _inc_openmp_player

native bool:Player_SetPosition(Player:player, Float:x, Float:y, Float:z);

native bool:Player_SetPositionFindZ(Player:player, Float:x, Float:y, Float:z);

native bool:Player_GetPosition(Player:player, &Float:x, &Float:y, &Float:z);

native bool:Player_SetZAngle(Player:player, Float:angle);

native Float:GetPlayerFacingAngle(Player:player, &Float:angle);

native IsPlayerInRangeOfPoint(Player:player, Float:range, Float:x, Float:y, Float:z);

native Float:GetPlayerDistanceFromPoint(Player:player, Float:x, Float:y, Float:z);

native bool:IsPlayerStreamedIn(Player:player, Player:forplayer);

native bool:SetPlayerInterior(Player:player, interior);

native GetPlayerInterior(Player:player);

native bool:SetPlayerHealth(Player:player, Float:health);

native bool:GetPlayerHealth(Player:player, &Float:health);

native bool:SetPlayerArmour(Player:player, Float:armour);

native bool:GetPlayerArmour(Player:player, &Float:armour);

native bool:SetPlayerAmmo(Player:player, weaponid, ammo);

native GetPlayerAmmo(Player:player);

native GetPlayerWeaponState(Player:player);

native GetPlayerTargetPlayer(Player:player);

native GetPlayerTargetActor(Player:player);

native bool:SetPlayerTeam(Player:player, team);

native GetPlayerTeam(Player:player);

native bool:SetPlayerScore(Player:player, score);

native GetPlayerScore(Player:player);

native bool:SetPlayerDrunkLevel(Player:player, drunklevel);

native GetPlayerDrunkLevel(Player:player);

native bool:Player_SetColour(Player:player, colour);

native Player_SetColourForPlayer(Player:player, Player:showplayer, colour);

native Player_GetColour(Player:player);

native bool:Player_SetSkin(Player:player, skin);

native Player_GetSkin(Player:player);

native bool:GivePlayerWeapon(Player:player, weapon, ammo);

native bool:ResetPlayerWeapons(Player:player);

native bool:SetPlayerArmedWeapon(Player:player, weapon);

native bool:GetPlayerWeaponData(Player:player, slot, &weapon, &ammo);

native bool:GivePlayerMoney(Player:player, money);

native bool:ResetPlayerMoney(Player:player);

native SetPlayerName(Player:player, string:name[]);

native GetPlayerMoney(Player:player);

native GetPlayerState(Player:player);

native bool:GetPlayerIp(Player:player, string:ip[]);

native GetPlayerPing(Player:player);

native GetPlayerAveragePing(Player:player);

native GetPlayerWeapon(Player:player);

native Float:GetPlayerKeys(Player:player, &keys, &updown, &leftright);

native bool:GetPlayerName(Player:player, string:name[]);

native bool:SetPlayerTime(Player:player, hour, minute);

native bool:GetPlayerTime(Player:player, &hour, &minute);

native bool:TogglePlayerClock(Player:player, toggle);

native bool:ForceClassSelection(Player:player);

native bool:SetPlayerWantedLevel(Player:player, level);

native GetPlayerWantedLevel(Player:player);

native bool:SetPlayerFightingStyle(Player:player, style);

native GetPlayerFightingStyle(Player:player);

native bool:SetPlayerVelocity(Player:player, Float:x, Float:y, Float:z);

native bool:GetPlayerVelocity(Player:player, &Float:x, &Float:y, &Float:z);

native bool:PlayCrimeReportForPlayer(Player:player, Player:suspect, crime);

native bool:PlayAudioStreamForPlayer(Player:player, string:url[], Float:x, Float:y, Float:z, Float:distance, usepos);

native bool:PlayAudioStreamForAll(string:url[], Float:x, Float:y, Float:z, Float:distance, usepos);

native bool:StopAudioStreamForPlayer(Player:player);

native bool:SetPlayerShopName(Player:player, string:shopname[]);

native bool:SetPlayerSkillLevel(Player:player, type, level);

native GetPlayerSkillLevel(Player:player, type);

native GetPlayerSurfingVehicleID(Player:player);

native GetPlayerSurfingObjectID(Player:player);

native bool:RemoveBuildingForPlayer(Player:player, modelid, Float:x, Float:y, Float:z, Float:radius);

native bool:GetPlayerLastShotVectors(Player:player, &Float:origx, &Float:origy, &Float:origz, &Float:hitx, &Float:hity, &Float:hitz);

native bool:SetPlayerVirtualWorld(Player:player, virtualworld);

native GetPlayerVirtualWorld(Player:player);

native bool:SetPlayerSpecialAction(Player:player, action);

native GetPlayerSpecialAction(Player:player);

native GetPlayerAnimationIndex(Player:player);

native bool:GetAnimationName(index, string:animlib[], string:animname[]);

native PutPlayerInVehicle(Player:player, Vehicle:vehicle, seat);

native GetPlayerVehicleID(Player:player);

native GetPlayerVehicleSeat(Player:player);

native bool:RemovePlayerFromVehicle(Player:player);

native bool:TogglePlayerControllable(Player:player, bool:enable);

native bool:IsPlayerControllable(Player:player);

native bool:PlayerPlaySound(Player:player, sound, Float:x, Float:y, Float:z);

native bool:PlaySoundForAll(sound, Float:x, Float:y, Float:z);

native bool:ApplyAnimation(Player:player, string:animlib[], string:animname[], Float:delta, bool:loop, bool:lockx, bool:locky, bool:freeze, time, forcesync = 0);

native bool:ClearAnimations(Player:player, bool:forcesync = false);

native bool:DisableRemoteVehicleCollisions(Player:player, bool:disable);

native bool:GetPlayerVehicleCollision(Player:player);

native bool:IsPlayerConnected(Player:playerid);

native bool:Player_IsInAnyVehicle(Player:player);


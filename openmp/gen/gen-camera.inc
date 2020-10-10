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

#if defined _inc_gen_camera
	#endinput
#endif
#define _inc_gen_camera

native GetPlayerCameraPos(Player:player, &Float:pos_x, &Float:pos_y, &Float:pos_z);

native SetPlayerCameraPos(Player:player, Float:x, Float:y, Float:z);

native SetPlayerCameraLookAt(Player:player, Float:x, Float:y, Float:z, cut = CAMERA_CUT);

native SetCameraBehindPlayer(Player:player);

native InterpolateCameraPos(Player:player, Float:fromx, Float:fromy, Float:fromz, Float:tox, Float:toy, Float:toz, time, cut = CAMERA_CUT);

native InterpolateCameraLookAt(Player:player, Float:fromx, Float:fromy, Float:fromz, Float:tox, Float:toy, Float:toz, time, cut = CAMERA_CUT);

native GetPlayerCameraFrontVector(Player:player, &Float:pos_x, &Float:pos_y, &Float:pos_z);

native Float:GetPlayerCameraZoom(Player:player);

native GetPlayerCameraMode(Player:player);

native Float:GetPlayerCameraAspectRatio(Player:player);

native EnablePlayerCameraTarget(Player:playerdata, bool:enable);

native GetPlayerCameraTargetPlayer(Player:playerdata);

native GetPlayerCameraTargetVehicle(Player:playerdata);

native GetPlayerCameraTargetObject(Player:playerdata);

native GetPlayerCameraTargetActor(Player:playerdata);

native TogglePlayerSpectating(Player:player, bool:toggle);

native bool:PlayerSpectatePlayer(Player:player, Player:target, mode = SPECTATE_MODE_NORMAL);

native bool:PlayerSpectateVehicle(Player:player, Vehicle:vehicle, mode = SPECTATE_MODE_NORMAL);

native bool:AttachCameraToObject(Player:player, object);

native bool:AttachCameraToPlayerObject(Player:player, object);


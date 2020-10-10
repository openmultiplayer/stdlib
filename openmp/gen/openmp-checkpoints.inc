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

#if defined _inc_openmp_checkpoints
	#endinput
#endif
#define _inc_openmp_checkpoints

native bool:SetPlayerCheckpoint(Checkpoint:player, Float:pos_x, Float:pos_y, Float:pos_z, Float:size);

native bool:GetPlayerCheckpoint(Checkpoint:cpdat, &Float:pos_x, &Float:pos_y, &Float:pos_z, &Float:size);

native bool:DisablePlayerCheckpoint(Checkpoint:player);

native bool:IsPlayerInCheckpoint(Checkpoint:cpdat);

native bool:PlayerHasCheckpoint(Checkpoint:cpdat);

native bool:SetPlayerRaceCheckpoint(Checkpoint:player, type, Float:pos_x, Float:pos_y, Float:pos_z, Float:next_x, Float:next_y, Float:next_z, Float:size);

native bool:GetPlayerRaceCheckpoint(Checkpoint:cpdat, &type, &Float:pos_x, &Float:pos_y, &Float:pos_z, &Float:next_x, &Float:next_y, &Float:next_z, &Float:size);

native bool:DisablePlayerRaceCheckpoint(Checkpoint:player);

native bool:IsPlayerInRaceCheckpoint(Checkpoint:cpdat);

native bool:PlayerHasRaceCheckpoint(Checkpoint:cpdat);

native Checkpoint@Create(Float:pos_x, Float:pos_y, Float:pos_z, Float:size) = Checkpoint__Create;

native bool:Checkpoint@IsValid(id) = Checkpoint__IsValid;

native bool:Checkpoint@Destroy(id) = Checkpoint__Destroy;

native Checkpoint_Display_1(Checkpoint:entity, Player:pid, bool:show);

native Checkpoint_Display_A(Checkpoint:entity, bool:show);

native bool:Checkpoint_Has(Checkpoint:entity, Player:pid);

native Checkpoint_Inhabit_1(Checkpoint:cp, vw, bool:set);

native Checkpoint_Inhabit_A(Checkpoint:cp, bool:set);

native bool:Checkpoint_In(Checkpoint:cp, vw);

native Checkpoint_SetPosition(Checkpoint:cp, Float:position_x, Float:position_y, Float:position_z);

native Checkpoint_GetPosition(Checkpoint:cp, &Float:position_x, &Float:position_y, &Float:position_z);

native Checkpoint_SetSize(Checkpoint:cp, Float:position);

native Checkpoint_GetSize(Checkpoint:cp, &Float:position);


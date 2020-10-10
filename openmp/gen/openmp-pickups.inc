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

#if defined _inc_openmp_pickups
	#endinput
#endif
#define _inc_openmp_pickups

native Pickup@Create(model, type, Float:pos_x, Float:pos_y, Float:pos_z, vitualWorld = 0) = Pickup__Create;

native bool:Pickup@Destroy(pickup) = Pickup__Destroy;

native bool:Pickup@IsValid(Pickup:pickup) = Pickup__IsValid;

native Pickup_Display_1(Pickup:entity, Player:pid, bool:show);

native Pickup_Display_A(Pickup:entity, bool:show);

native bool:Pickup_Has(Pickup:entity, Player:pid);

native bool:Pickup_GetPlayer(Pickup:pickup, Player:playerData);

native bool:Pickup_SetPlayer(Pickup:pickup, Player:playerData, bool:show);

native bool:Pickup_GetVirtualWorld(Pickup:pickup, vitualWorld);

native bool:Pickup_SetVirtualWorld(Pickup:pickup, vitualWorld, bool:show);

native Pickup_GetPosition(Pickup:pickup, &Float:pos_x, &Float:pos_y, &Float:pos_z);

native Pickup_SetPosition(Pickup:pickup, Float:pos_x, Float:pos_y, Float:pos_z);

native Pickup_GetModel(Pickup:pickup);

native Pickup_SetModel(Pickup:pickup, model);

native Pickup_GetType(Pickup:pickup);

native Pickup_SetType(Pickup:pickup, type);

native bool:Pickup_Respawn(Pickup:pickup, Player:playerData);

native bool:Pickup_IsSpawned(Pickup:pickup, Player:playerData);


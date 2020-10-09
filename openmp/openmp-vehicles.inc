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

#if defined _inc_openmp_vehicles
	#endinput
#endif
#define _inc_openmp_vehicles

native Vehicle_Create(modelid, Float:pos_x, Float:pos_y, Float:pos_z, Float:a, colour1, colour2, respawn_delay, siren);

native bool:Vehicle_Destroy(vehicle);

native bool:Vehicle_IsValid(Vehicle:vehicle);

native bool:Vehicle_IsStreamedIn(Vehicle:vehicle, Player:player);

native bool:Vehicle_GetPosition(Vehicle:vehicle, &Float:pos_x, &Float:pos_y, &Float:pos_z);

native bool:Vehicle_SetPosition(Vehicle:vehicle, Float:pos_x, Float:pos_y, Float:pos_z);

native bool:Vehicle_GetRotation(Vehicle:vehicle, &Float:rot_x, &Float:rot_y, &Float:rot_z);

native bool:Vehicle_GetRotationQuat(Vehicle:vehicle, &Float:quat_x, &Float:quat_y, &Float:quat_z, &Float:quat_w);

native bool:Vehicle_GetZAngle(Vehicle:vehicle, &Float:a);

native bool:Vehicle_SetZAngle(Vehicle:vehicle, Float:a);

native Float:Vehicle_GetDistanceFromPoint(Vehicle:vehicle, Float:pos_x, Float:pos_y, Float:pos_z);

native bool:Vehicle_GetVelocity(Vehicle:vehicle, &Float:delta_x, &Float:delta_y, &Float:delta_z);

native bool:Vehicle_SetVelocity(Vehicle:vehicle, Float:delta_x, Float:delta_y, Float:delta_z);

native bool:Vehicle_ChangeColor(Vehicle:vehicle, colour1, colour2);

native bool:Vehicle_SetPaintjob(Vehicle:vehicle, paintjob);

native Vehicle_GetVirtualWorld(Vehicle:vehicle);

native bool:Vehicle_SetVirtualWorld(Vehicle:vehicle, virtualworld);

native bool:Vehicle_LinkToInterior(Vehicle:vehicle, interior);

native bool:Vehicle_GetHealth(Vehicle:vehicle, &Float:health);

native bool:Vehicle_SetHealth(Vehicle:vehicle, Float:health);

native bool:Vehicle_Repair(Vehicle:vehicle);

native bool:Vehicle_GetDamageStatus(Vehicle:vehicle, &panels, &doors, &lights, &tires);

native bool:Vehicle_UpdateDamageStatus(Vehicle:vehicle, panels, doors, lights, tires);

native bool:Vehicle_GetParamsForPlayer(Vehicle:vehicle, Player:player, &objective, &locked);

native bool:Vehicle_SetParamsForPlayer(Vehicle:vehicle, Player:player, objective, locked);

native bool:Vehicle_GetParamsEx(Vehicle:vehicle, &engine, &lights, &alarm, &doors, &bonnet, &boot, &objective);

native bool:Vehicle_SetParamsEx(Vehicle:vehicle, engine, lights, alarm, doors, bonnet, boot, objective);

native Vehicle_GetParamsSirenState(Vehicle:vehicle);

native bool:Vehicle_GetParamsCarDoors(Vehicle:vehicle, &driver, &passenger, &backleft, &backright);

native bool:Vehicle_SetParamsCarDoors(Vehicle:vehicle, driver, passenger, backleft, backright);

native bool:Vehicle_GetParamsCarWindows(Vehicle:vehicle, &driver, &passenger, &backleft, &backright);

native bool:Vehicle_SetParamsCarWindows(Vehicle:vehicle, driver, passenger, backleft, backright);

native Vehicle_GetTrailer(Vehicle:vehicle);

native bool:Vehicle_AttachTrailer(Vehicle:vehicle, Vehicle:trailerid);

native bool:Vehicle_DetachTrailer(Vehicle:vehicle, trailerid);

native bool:Vehicle_HasTrailer(Vehicle:vehicle, trailerid);

native Vehicle_GetModel(Vehicle:vehicle);

native bool:Vehicle_GetModelInfo(model, type, &Float:x, &Float:y, &Float:z);

native Vehicle_GetComponentType(component);

native Vehicle_GetComponentInSlot(Vehicle:vehicle, slot);

native bool:Vehicle_AddComponent(Vehicle:vehicle, component);

native bool:Vehicle_RemoveComponent(Vehicle:vehicle, component);

native Vehicle_Display(Vehicle:entity, Player:pid, bool:show);

native bool:Vehicle_Has(Vehicle:entity, Player:pid);

native SetNumberPlate(string:numberPlate[]);

native GetNumberPlate(string:numberPlate[]);


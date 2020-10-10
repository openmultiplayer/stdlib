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

#if defined _inc_gen_objects
	#endinput
#endif
#define _inc_gen_objects

native Object@Create(modelid, Float:position_x, Float:position_y, Float:position_z, Float:rotation_x, Float:rotation_y, Float:rotation_z) = Object__Create;

native bool:Object@Destroy(Object:id) = Object__Destroy;

native Object_AttachToVehicle(Object:object, Vehicle:vehicle, Float:offset_x, Float:offset_y, Float:offset_z, Float:rotation_x, Float:rotation_y, Float:rotation_z);

native Object_AttachToObject(Object:object, Object:targetObject, Float:offset_x, Float:offset_y, Float:offset_z, Float:rotation_x, Float:rotation_y, Float:rotation_z, bool:syncrotation = true);

native Object_AttachToPlayer(Object:object, Player:player, Float:offset_x, Float:offset_y, Float:offset_z, Float:rotation_x, Float:rotation_y, Float:rotation_z);

native bool:Object_TryGetParentVehicle(Object:object, &parent);

native bool:Object_TryGetParentObject(Object:object, &parent);

native bool:Object_TryGetParentPlayer(Object:object, &parent);

native bool:Object_DetachFromVehicle(Object:object, parent);

native bool:Object_DetachFromObject(Object:object, parent);

native bool:Object_DetachFromPlayer(Object:object, parent);

native Object_Detach(Object:object);

native Object_Inhabit_1(Object:object, vw, bool:set);

native Object_Inhabit_A(Object:object, bool:set);

native bool:Object_In(Object:object, vw);

native Object_SetPosition(Object:object, Float:position_x, Float:position_y, Float:position_z);

native Object_GetPosition(Object:object, &Float:position_x, &Float:position_y, &Float:position_z);

native Object_SetRotation_E(Object:object, Float:rotation_x, Float:rotation_y, Float:rotation_z);

native Object_GetRotation_E(Object:object, &Float:rotation_x, &Float:rotation_y, &Float:rotation_z);

native Object_GetModel(Object:object);

native Object_SetModel(Object:object, modelid);

native Float:Object_GetStreamDistance(Object:object);

native Object_SetStreamDistance(Object:object, Float:distance);

native Float:Object_GetDrawDistance(Object:object);

native Object_SetDrawDistance(Object:object, Float:distance);

native bool:Object_GetMaterial(Object:object, materialIndex, &modelid, s1, s2, &materialcolour, s1S, s2S);

native Object_SetMaterial(Object:object, materialIndex, modelid, string:txdname[], string:texturename[], materialcolour);

native bool:Object_GetMaterialText(Object:object, materialIndex, s1, &materialSize, s2, &fontSize, &bool:bold, &fontColour, &backcolour, &alignment, s1S, s2S);

native Object_SetMaterialText(Object:object, materialIndex, string:text[], materialSize, string:fontFace[], fontSize, bool:bold, fontColour, backcolour, alignment);

native bool:Object_HasMaterial(Object:object, materialIndex);

native bool:Object_HasMaterialText(Object:object, materialIndex);

native bool:Object_RemoveMaterial(Object:object, materialIndex);

native Object_SetCameraCollision(Object:object, bool:set);

native Object@SetCameraCollision(bool:set) = Object__SetCameraCollision;

native Object_Move(Object:object, Float:target_x, Float:target_y, Float:target_z, Float:speed, Float:rotation_x = 0.0, Float:rotation_y = 0.0, Float:rotation_z = 0.0);

native Object_Stop(Object:object);

native Object_Edit(Object:object);

native bool:Object_IsMoving(Object:object);

native Float:Object_GetMoveSpeed(Object:object);

native Object_GetMoveEndRotation(Object:object, &Float:rotation_x, &Float:rotation_y, &Float:rotation_z);

native Object_GetMoveEndPosition(Object:object, &Float:position_x, &Float:position_y, &Float:position_z);

native bool:Object@IsValid(Object:object) = Object__IsValid;

native Object_Display_1(Object:entity, Player:pid, bool:show);

native Object_Display_A(Object:entity, bool:show);

native bool:Object_Has(Object:entity, Player:pid);


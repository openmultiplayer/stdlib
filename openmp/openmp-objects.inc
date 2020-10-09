native Object__Create(modelid, Float:position_x, Float:position_y, Float:position_z, Float:rotation_x, Float:rotation_y, Float:rotation_z);

native bool:Object__Destroy(Object:id);

native Object_AttachToVehicle(Object:object, Vehicle:vehicle, Float:offset_x, Float:offset_y, Float:offset_z, Float:rotation_x, Float:rotation_y, Float:rotation_z);

native Object_AttachToObject(Object:object, Object:targetObject, Float:offset_x, Float:offset_y, Float:offset_z, Float:rotation_x, Float:rotation_y, Float:rotation_z, bool:syncrotation);

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

native Object__SetCameraCollision(bool:set);

native Object_Move(Object:object, Float:target_x, Float:target_y, Float:target_z, Float:speed, Float:rotation_x, Float:rotation_y, Float:rotation_z);

native Object_Stop(Object:object);

native Object_Edit(Object:object);

native bool:Object_IsMoving(Object:object);

native Float:Object_GetMoveSpeed(Object:object);

native Object_GetMoveEndRotation(Object:object, &Float:rotation_x, &Float:rotation_y, &Float:rotation_z);

native Object_GetMoveEndPosition(Object:object, &Float:position_x, &Float:position_y, &Float:position_z);

native bool:Object__IsValid(Object:object);

native Object_Display(Object:entity, Player:pid, bool:show);

native bool:Object_Has(Object:entity, Player:pid);

native SetStreamDistance(Float:distance);


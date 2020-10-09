native Pickup__Create(model, type, Float:pos_x, Float:pos_y, Float:pos_z, vitualWorld);

native bool:Pickup__Destroy(pickup);

native bool:Pickup__IsValid(Pickup:pickup);

native Pickup_Display(Pickup:entity, Player:pid, bool:show);

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


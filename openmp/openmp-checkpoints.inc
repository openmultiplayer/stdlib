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

native Checkpoint_Display(Checkpoint:entity, Player:pid, bool:show);

native bool:Checkpoint_Has(Checkpoint:entity, Player:pid);


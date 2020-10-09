native CreateExplosion(Float:x, Float:y, Float:z, type, Float:r);

native CreateExplosionForPlayer(Player:player, Float:x, Float:y, Float:z, type, Float:r);

native Float:ASin(Float:value);

native Float:ACos(Float:value);

native Float:ATan(Float:value);

native Float:ATan2(Float:x, Float:y);

native Float:VectorSize(Float:x, Float:y, Float:z);

native bool:SendClientMessageToAll(colour, string:msg[]);

native bool:SendPlayerMessageToAll(Player:sender, string:msg[]);

native bool:SendDeathMessage(Player:killer, Player:killee, weapon);

native bool:GameTextForAll(string:msg[], time, style);

native bool:SendClientMessage(Player:player, colour, string:msg[]);

native bool:SendPlayerMessageToPlayer(Player:player, Player:sender, string:msg[]);

native bool:SendDeathMessageToPlayer(Player:player, Player:killer, Player:killee, weapon);

native bool:GameTextForPlayer(Player:player, string:msg[], time, style);

native bool:SetPlayerChatBubble(Player:player, string:text[], colour, Float:drawDistance, expireTime);


native Create3DTextLabel(string:text[], colour, Float:position_x, Float:position_y, Float:position_z, Float:drawDistance, virtualWorld, testlos);

native bool:Delete3DTextLabel(id);

native bool:Attach3DTextLabelToPlayer(Text3D:text3d, Player:player, Float:offset_x, Float:offset_y, Float:offset_z);

native bool:Attach3DTextLabelToVehicle(Text3D:text3d, Vehicle:vehicle, Float:offset_x, Float:offset_y, Float:offset_z);

native bool:Update3DTextLabelText(Text3D:text3d, color, string:text[]);

native CreatePlayer3DTextLabel(PlayerText3D:pt3ddata, string:text[], colour, Float:position_x, Float:position_y, Float:position_z, Float:drawDistance, Player:attachedPlayerID, attachedVehicleID, testlos);

native bool:DeletePlayer3DTextLabel(PlayerText3D:pt3ddata, id);

native bool:UpdatePlayer3DTextLabelText(PlayerText3D:playertext3d, colour, string:text[]);


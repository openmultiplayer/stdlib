native CreateMenu(string:title[], columns, Float:X, Float:Y, Float:Col1Width, Float:Col2Width);

native DestroyMenu(Menu:menu);

native AddMenuItem(Menu:menu, column, string:item[]);

native SetMenuColumnHeader(Menu:menu, column, string:columnheader[]);

native ShowMenuForPlayer(Menu:menu, Player:player);

native HideMenuForPlayer(Menu:menu, Player:player);

native bool:IsValidMenu(menu);

native DisableMenu(Menu:menu);

native DisableMenuRow(Menu:menu, row);

native GetPlayerMenu(Player:menuplayerdata);


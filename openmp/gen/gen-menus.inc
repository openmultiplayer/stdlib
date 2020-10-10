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

#if defined _inc_gen_menus
	#endinput
#endif
#define _inc_gen_menus

native CreateMenu(string:title[], columns, Float:X, Float:Y, Float:Col1Width, Float:Col2Width = 0.0);

native DestroyMenu(Menu:menu);

native AddMenuItem(Menu:menu, column, string:item[]);

native SetMenuColumnHeader(Menu:menu, column, string:columnheader[]);

native ShowMenuForPlayer(Menu:menu, Player:player);

native HideMenuForPlayer(Menu:menu, Player:player);

native bool:IsValidMenu(menu);

native DisableMenu(Menu:menu);

native DisableMenuRow(Menu:menu, row);

native GetPlayerMenu(Player:menuplayerdata);


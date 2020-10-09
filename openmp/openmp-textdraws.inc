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

#if defined _inc_openmp_textdraws
	#endinput
#endif
#define _inc_openmp_textdraws

native TextDraw__Create(Float:pos_x, Float:pos_y, string:text[]);

native bool:TextDraw__Destroy(textdraw);

native TextDraw__IsValid(textdraw);

native bool:SelectTextDraw(Player:player, color);

native bool:CancelSelectTextDraw(Player:player);

native TextDraw_GetPosition(TextDraw:td, &Float:position_x, &Float:position_y);

native TextDraw_SetPosition(TextDraw:td, Float:position_x, Float:position_y);

native TextDraw_GetZIndex(TextDraw:td, &Float:z);

native TextDraw_SetZIndex(TextDraw:td, Float:z);

native TextDraw_Display(TextDraw:entity, Player:pid, bool:show);

native bool:TextDraw_Has(TextDraw:entity, Player:pid);

native SetLetterSize(Float:size_x, Float:size_y);

native SetTextSize(Float:size_x, Float:size_y);

native SetAlignment(alignment);

native SetColor(color);

native SetBox(bool:use);

native SetBoxColor(color);

native SetShadow(shadow);

native SetOutline(outline);

native SetBackgroundColor(color);

native SetStyle(style);

native SetProportional(bool:proportional);

native SetSelectable(bool:selectable);

native SetString(string:text[]);

native SetPreviewModel(model);

native SetPreviewRotationAndZoom(Float:rotation_x, Float:rotation_y, Float:rotation_z, Float:zoom);

native SetPreviewVehicleColor(color1, color2);

native GetLetterSize(&Float:size_x, &Float:size_y);

native GetTextSize(&Float:size_x, &Float:size_y);

native GetString(string:text[]);

native GetPosition(&Float:position_x, &Float:position_y);

native bool:GetPreviewRotationAndZoom(&Float:rotation_x, &Float:rotation_y, &Float:rotation_z, &Float:zoom);

native bool:GetPreviewVehicleColor(&color1, &color2);


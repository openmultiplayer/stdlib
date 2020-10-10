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

#if defined _inc_gen_legacytranslator
	#endinput
#endif
#define _inc_gen_legacytranslator

native CreateLegacyTranslator(string:name[], max, invalid);

native bool:DestroyLegacyTranslator(id);

native LegacyTranslator_To(LegacyTranslator:translator, id);

native LegacyTranslator_From(LegacyTranslator:translator, id);

native LegacyTranslator_Allocate(LegacyTranslator:translator, id, Player:player);

native LegacyTranslator_Lookup(LegacyTranslator:translator, id, Player:player);

native bool:LegacyTranslator_ReverseLookup(LegacyTranslator:translator, input, &id, &Player:player);

native bool:LegacyTranslator_Release(LegacyTranslator:translator, id, Player:player);


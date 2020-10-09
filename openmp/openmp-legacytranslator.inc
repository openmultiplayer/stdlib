native CreateLegacyTranslator(string:name[], max, invalid);

native bool:DestroyLegacyTranslator(id);

native LegacyTranslator_To(LegacyTranslator:translator, id);

native LegacyTranslator_From(LegacyTranslator:translator, id);

native LegacyTranslator_Allocate(LegacyTranslator:translator, id, Player:player);

native LegacyTranslator_Lookup(LegacyTranslator:translator, id, Player:player);

native bool:LegacyTranslator_ReverseLookup(LegacyTranslator:translator, input, &id, &Player:player);

native bool:LegacyTranslator_Release(LegacyTranslator:translator, id, Player:player);


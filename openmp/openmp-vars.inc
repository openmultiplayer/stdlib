native GetConsoleVarAsInt(string:varName[]);

native GetConsoleVarAsString(string:varName[], string:strReturn[]);

native Float:GetConsoleVarAsFloat(string:varName[]);

native GetConsoleVarType(string:varName[]);

native GetConsoleVarsUpperIndex();

native bool:GetConsoleVarNameAtIndex(index, string:retVarName[]);

native GetServerVarAsInt(string:varName[]);

native GetServerVarAsString(string:varName[], string:strReturn[]);

native Float:GetServerVarAsFloat(string:varName[]);

native GetServerVarType(string:varName[]);

native GetServerVarsUpperIndex();

native bool:GetServerVarNameAtIndex(index, string:retVarName[]);

native bool:SetPVarInt(Player:pVarsData, string:varName[], intValue);

native bool:SetPVarString(Player:pVarsData, string:varName[], string:strValue[]);

native bool:SetPVarFloat(Player:pVarsData, string:varName[], Float:floatValue);

native GetPVarInt(Player:pVarsData, string:varName[]);

native GetPVarString(Player:pVarsData, string:varName[], string:strReturn[]);

native Float:GetPVarFloat(Player:pVarsData, string:varName[]);

native bool:DeletePVar(Player:pVarsData, string:varName[]);

native GetPVarType(Player:pVarsData, string:varName[]);

native GetPVarsUpperIndex(Player:pVarsData);

native bool:GetPVarNameAtIndex(Player:pVarsData, index, string:retVarName[]);

native bool:ClearPVars(Player:pVarsData);

native bool:SetSVarInt(string:varName[], intValue);

native bool:SetSVarString(string:varName[], string:strValue[]);

native bool:SetSVarFloat(string:varName[], Float:floatValue);

native GetSVarInt(string:varName[]);

native GetSVarString(string:varName[], string:strReturn[]);

native Float:GetSVarFloat(string:varName[]);

native bool:DeleteSVar(string:varName[]);

native GetSVarType(string:varName[]);

native GetSVarsUpperIndex();

native bool:GetSVarNameAtIndex(index, string:retVarName[]);

native bool:ClearSVars();


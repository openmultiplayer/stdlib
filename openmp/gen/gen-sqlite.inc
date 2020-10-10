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

#if defined _inc_gen_sqlite
	#endinput
#endif
#define _inc_gen_sqlite

native SQLite_Open(string:filePath[]);

native SQLite_Close(SQLiteConnection:connectionID);

native SQLite_ExecuteQuery(SQLiteConnection:connectionID, string:expression[]);

native SQLite_FreeResultSet(SQLiteResultSet:resultSetID);

native SQLite_GetRowCount(SQLiteResultSet:resultSetID);

native SQLite_SelectNextRow(SQLiteResultSet:resultSetID);

native SQLite_GetFieldCount(SQLiteResultSet:resultSetID);

native SQLite_GetFieldName(SQLiteResultSet:resultSetID, fieldIndex, string:result[]);

native SQLite_GetFieldString(SQLiteResultSet:resultSetID, fieldIndex, string:result[]);

native SQLite_GetFieldInteger(SQLiteResultSet:resultSetID, fieldIndex = 0);

native Float:SQLite_GetFieldFloat(SQLiteResultSet:resultSetID, fieldIndex = 0);

native SQLite_GetFieldStringByName(SQLiteResultSet:resultSetID, string:fieldName[], string:result[]);

native SQLite_GetFieldIntegerByName(SQLiteResultSet:resultSetID, string:fieldName[]);

native Float:SQLite_GetFieldFloatByName(SQLiteResultSet:resultSetID, string:fieldName[]);

native SQLite_GetConnectionPointer(SQLiteConnection:connectionID);

native SQLite_GetResultSetPointer(SQLiteResultSet:resultSetID);

native SQLite_GetOpenConnectionCount();

native SQLite_GetOpenResultSetCount();


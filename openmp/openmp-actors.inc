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

#if defined _inc_openmp_actors
	#endinput
#endif
#define _inc_openmp_actors

native Actor_Create(modelid, Float:x, Float:y, Float:z, Float:rotation);
native CreateActor(modelid, Float:x, Float:y, Float:z, Float:rotation) = Actor_Create;

native Actor_Destroy(Actor:actor);
native DestroyActor(Actor:actor) = Actor_Destroy;

native Actor_SetPosition(Actor:actor, Float:x, Float:y, Float:z);
native SetActorPos(Actor:actor, Float:x, Float:y, Float:z) = Actor_SetPosition;

native Actor_GetPosition(Actor:actor, &Float:x, &Float:y, &Float:z);
native GetActorPos(Actor:actor, &Float:x, &Float:y, &Float:z) = Actor_GetPosition;

native Actor_SetZAngle(Actor:actor, Float:angle);
native SetActorFacingAngle(Actor:actor, Float:angle) = Actor_SetZAngle;

native Actor_GetZAngle(Actor:actor, &Float:angle);
native GetActorFacingAngle(Actor:actor, &Float:angle) = Actor_GetZAngle;

native Actor_SetVirtualWorld(Actor:actor, virtualworld);
native SetActorVirtualWorld(Actor:actor, virtualworld) = Actor_SetVirtualWorld;

native Actor_GetVirtualWorld(Actor:actor);
native GetActorVirtualWorld(Actor:actor) = Actor_GetVirtualWorld;

native Actor_SetHealth(Actor:actor, Float:health);
native SetActorHealth(Actor:actor, Float:health) = Actor_SetHealth;

native Actor_GetHealth(Actor:actor, &Float:health);
native GetActorHealth(Actor:actor, &Float:health) = Actor_GetHealth;

native Actor_SetInvulnerable(Actor:actor, bool:invulnerable);
native SetActorInvulnerable(Actor:actor, bool:invulnerable) = Actor_SetInvulnerable;

native bool:Actor_IsInvulnerable(Actor:actor);
native IsActorInvulnerable(Actor:actor) = Actor_IsInvulnerable;

native Actor_ApplyAnimation(Actor:actor, string:animlib[], string:animname[], Float:delta, bool:loop, bool:lockx, bool:locky, bool:freeze, time);
native ApplyActorAnimation(Actor:actor, string:animlib[], string:animname[], Float:delta, bool:loop, bool:lockx, bool:locky, bool:freeze, time) = Actor_ApplyAnimation;

native Actor_ClearAnimations(Actor:actor);
native ClearActorAnimations(Actor:actor) = Actor_ClearAnimations;

native bool:Actor_IsStreamedInForPlayer(Actor:actor, Player:player);
native IsActorStreamedIn(Actor:actor, Player:player) = Actor_IsStreamedInForPlayer;

native bool:Actor_IsValid(actor);
native IsValidActor(actor) = Actor_IsValid;


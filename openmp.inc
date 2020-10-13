#if defined _inc_omp
	#endinput
#endif
#define _inc_omp

#if !defined __PawnBuild
	#error open.mp scripts require the community compiler from: git.io/pawn-compiler
#endif

#pragma tabsize 4
#pragma rational Float
#pragma option -;+
#pragma option -(+

#include <float>
#include <core>
#tryinclude <console>
#include <file>
#include <string>

#if !defined _console_included
	#define _console_included
	native print(const string[], foreground=-1, background=-1, highlight=-1);
	native printf(const format[], {Float,_}:...);
#endif

#include <openmp/camera>
#include <openmp/map>

#include <openmp/gen>

//+-----------------------------------------------------------------------------
//| Inclusion guard
//+-----------------------------------------------------------------------------
#ifndef MAGOS_INCLUDE_H
#define MAGOS_INCLUDE_H




//+-----------------------------------------------------------------------------
//| Prevents stupid warning messages
//+-----------------------------------------------------------------------------
#define DIRECTINPUT_VERSION 0x0800


//+-----------------------------------------------------------------------------
//| Prevents stupid pointer truncation warning messages
//+-----------------------------------------------------------------------------

#pragma warning(disable:4311)
#pragma warning(disable:4312)

#pragma warning( disable:4146 )
#pragma warning(disable:4786)

#pragma warning(disable:4005)
#pragma warning(disable:4003)

//+-----------------------------------------------------------------------------
//| Windows included files
//+-----------------------------------------------------------------------------
//#include <PreIncludes.h>
#include <windows.h>
#include <commctrl.h>
#include <cctype>
#include <cmath>
#include <ctime>


//+-----------------------------------------------------------------------------
//| DirectX included files
//+-----------------------------------------------------------------------------
#include <d3dx9.h>
#include <dinput.h>


//+-----------------------------------------------------------------------------
//| STL included files
//+-----------------------------------------------------------------------------
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>
#include <vector>
#include <list>
#include <map>
#include <set>

using namespace std;


//+-----------------------------------------------------------------------------
//| Removes stupid macros
//+-----------------------------------------------------------------------------
//#undef min
//#undef max

//+-----------------------------------------------------------------------------
//| End of inclusion guard
//+-----------------------------------------------------------------------------
#endif
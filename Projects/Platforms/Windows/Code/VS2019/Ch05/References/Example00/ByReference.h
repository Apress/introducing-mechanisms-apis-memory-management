#pragma once

#pragma region Include Files

#include <cstdlib>
#include <cstdint>

#include <conio.h>

#include <Utils.h>

#include "_Data.h"

#pragma endregion

#pragma region Passing by reference

void PassingByReference( _Data& _localData );
_Data PassingViaRvalue();

#pragma endregion
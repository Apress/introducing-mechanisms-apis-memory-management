#pragma region Include Files

#include <cstdlib>
#include <cstdint>

#include <conio.h>

#include <Utils.h>

#include "_Data.h"

#pragma endregion

#pragma region Passing by reference

void PassingByReference( _Data& _localData ) {

	_localData.Id = 300ui32;

	return;
};

#pragma endregion

#pragma region Get a rvalue.

_Data GetARvalue() {

	_Data _localData { 100ui32 };
	

	/* Using a xvalue for this example. */
	return _localData;
};

#pragma endregion
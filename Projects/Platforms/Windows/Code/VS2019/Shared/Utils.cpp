#ifdef __INTEL_COMPILER
#pragma warning( disable: 1079; )
#endif

#pragma region Include Files

#include <cstdlib>
#include<cstdio>
#include <cwchar>
#include <cstdint>
#include <cstring>
#include <memory>
#include <string>

#include <conio.h>

#include <afx.h>

#include "Utils.h"

#pragma endregion

#pragma region Namespaces

using namespace std;

#pragma endregion


#pragma region Pause support function

void Pause( bool finish  ) {

	const wchar_t* _finishMessage { L"Press <ENTER> to finish..." };
	const wchar_t* _pauseMessage { L"Press <ENTER> to continue..." };

	_cwprintf_s( L"\n\n%s\n\n", !finish ? _pauseMessage : _finishMessage );

	_getwchar_nolock();

	return;
};

#pragma endregion

#pragma region YesOrNo - support function

const wchar_t* YesOrNo( bool confirmed ) {

	return ( confirmed ? L"yes" : L"no" );

};

#pragma endregion

#pragma once

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

#pragma endregion

#pragma region Namespaces

using namespace std;

#pragma endregion

extern "C" {

	void Pause( bool finish = false  );

	const wchar_t* YesOrNo( bool confirmed );

};

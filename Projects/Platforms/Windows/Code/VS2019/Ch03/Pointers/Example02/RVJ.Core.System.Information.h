#pragma once


#ifdef __INTEL_COMPILER
#pragma warning( disable: 1079 )
#endif

#pragma region Include Files

#include <cstdlib>
#include <cstdint>
#include <memory>

/*MFC*/
#include <afx.h>

/*Windows API*/
#include <VersionHelpers.h>

#pragma endregion

#pragma region Namespaces

using namespace std;

#pragma endregion


namespace RVJ {
	namespace Core {
		namespace System {
			namespace Information {

#pragma region Definition for class OperatingSystem 
				class OperatingSystem {
				
					public:


					char16_t* ComputerName();

					char16_t* UserName();

					bool IsWindowsXP();

					char16_t* RootDirectory();

					char16_t* SystemDirectory();

					char16_t* ToString();
				
				};
#pragma endregion

			};
		};
	};
};




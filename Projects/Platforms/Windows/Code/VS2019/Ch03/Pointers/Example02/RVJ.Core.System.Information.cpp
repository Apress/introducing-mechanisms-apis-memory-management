
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

/*RVJ*/
#include "RVJ.Core.System.Information.h"

#pragma endregion

#pragma region Namespaces

using namespace std;
using namespace RVJ::Core::System::Information;

#pragma endregion



enum class __OperatingSystemClassification : uint32_t {
	WindowsXP,
	WindowsXP_SP1,
	WindowsXP_SP2,
	WindowsXP_SP3,
	WindowsVista,
	WindowsVista_SP1,
	WindowsVista_SP2,
	Windows7,
	Windows7_SP1,
	Windows8,
	Windows8_1,
	Windows10,
	WindowsServer,
	WindowsByVersion

};


class OperatingSystem {

	private:

	bool _WindowsXP;
	bool _WindowsXPSP1;
	bool _WindowsXPSP2;
	bool _WindowsXPSP3;

	bool _WindowsVista;
	bool _WindowsVistaSP1;
	bool _WindowsVistaSP2;

	__OperatingSystemClassification _classOfOperatingSystem;

	public:

	bool WindowsXP;
	bool WindowsXPSP1;
	bool WindowsXPSP2;
	bool WindowsXPSP3;

	bool WindowsVista;
	bool WindowsVistaSP1;
	bool WindowsVistaSP2;

	private:

	void __fillPublicFields() {

		this->WindowsXP = this->_WindowsXP;
		this->WindowsXPSP1 = this->_WindowsXPSP1;
		this->WindowsXPSP2 = this->WindowsXPSP2;
		this->WindowsXPSP3 = this->WindowsXPSP3;

		this->WindowsVista = this->_WindowsVista;
		this->WindowsVistaSP1 = this->_WindowsVistaSP1;
		this->WindowsVistaSP2 = this->_WindowsVistaSP2;

		return;
	};

	public:

	OperatingSystem() {

		this->_WindowsXP = IsWindowsXPOrGreater();
		this->_WindowsXPSP1 = IsWindowsXPSP1OrGreater();
		this->_WindowsXPSP2 = IsWindowsXPSP2OrGreater();
		this->_WindowsXPSP3 = IsWindowsXPSP3OrGreater();
		this->_classOfOperatingSystem = __OperatingSystemClassification::Windows10;


		return;
	};

	~OperatingSystem() {
		return;
	};


	public:

	virtual bool IsWindowsXP() {

		/*switch ( switch_on )
		{
			default:
				break;
		}*/

	};

	virtual char16_t* ComputerName() {
		return nullptr;
	};

	virtual char16_t* UserName() {
		return nullptr;
	};

	virtual char16_t* RootDirectory() {
		return nullptr;
	};

	virtual char16_t* SystemDirectory() {
		return nullptr;
	};

	virtual char16_t* ToString() {

		/*
		Check this before.

		https://docs.microsoft.com/en-us/windows/win32/winrt/hstring

		*/
		/*switch ( switch_on )
		{
			default:
				break;
		}*/

		return nullptr;
	};
};



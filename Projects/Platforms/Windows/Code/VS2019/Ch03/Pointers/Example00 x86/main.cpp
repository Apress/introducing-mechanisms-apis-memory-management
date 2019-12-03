/*

AUTHOR: Roger Villela
E-MAIL: RVJ.Education@OpenMind.OnMicrosoft.com
CONTACT: RogerVillelaJournal@OpenMind.OnMicrosoft.com
LINKEDIN: https://www.linkedin.com/in/rogervillela

(EN-US) MATERIAL FOR EXCLUSIVE EDUCATIONAL AND INFORMATIVE USE

The use of this example project and other materials created, provided and presented directly by ROGER VILLELA, hereinafter referred to as the SOLE AUTHOR and SOLE HOLDER of the rights in any present or future context, are dedicated solely to Educational use through courses and other commercial or free products of authorship of the exclusive authors, which the EXCLUSIVE AUTHOR presents and can present throughout the national and international territory through various means of communication and distribution, such as electronic documents, print-outs, social networks and purpose-compatible groups such as blogs and other types of sites for presentation of educational technical content, conferences through products such as Microsoft Skype (Copyright- All rights reserved), Microsoft Teams (copyright-All rights Reserved), Microsoft Skype for Business (copyright-All rights Reserved), and others that are relevant to the educational technical purpose. The EXCLUSIVE AUTHOR is not liable, directly or indirectly, for the use made by third parties of this or other products. The EXCLUSIVE AUTHOR does not implicitly authorize any physical person and person legal, to use their products or their name without the proper commercial and legal contracting. The commercial and legal contracting must follow according to the rules determined in each district, province, principality, kingdom, city, state and country that demonstrate interest. Prior to the commercial and legal rules determined in each geographical context, the terms first formalised by the EXCLUSIVE AUTHOR and which need to be accepted and fulfilled in their entirety for such hiring to be officially recognized by the EXCLUSIVE AUTHOR.

MICROSOFT VISUAL STUDIO

-> The solutions, projects, sample codes, support files required, codes that are integrally or partially included in the newsletter text as part of each edition of the ROGERVILLELA JOURNAL are constructed according to the following minimum criteria:

-> Use Microsoft Windows 10 creators Update (non-beta or non-preview) as minimum platform.
-> They use the latest version of Microsoft Windows 10 (non-beta or non-preview) as provided.
-> Use Microsoft Visual Studio 2017 (non-beta or non-preview) as minimum platform.
-> They use the latest version of Microsoft Visual Studio 2019 (non-beta or non-preview) as provided.
-> Use the latest version of the Microsoft Windows SDK (non-beta or non-preview) for Microsoft Windows 10 (non-beta or non-preview) as provided.
-> Use the .NET Framework version 4.0 (non-beta or non-preview) as minimum version.
-> They use the latest version of the .NET Framework (non-beta or non-preview) from the minimum version criterion and as provided.
-> Use the .NET Core version 3.0 (non-beta or non-preview) as minimum version.
-> They use the latest version of the .NET Core 3.0 (non-beta or non-preview) from the minimum version criterion and as provided.


INTEL PARALLEL STUDIO

-> The solutions, projects, sample codes, support files required, codes that are integrally or partially included in the newsletter text as part of each edition of the ROGERVILLELA JOURNAL are constructed according to the following minimum criteria:

-> Use Microsoft Windows 10 creators Update (non-beta or non-preview) as minimum platform.
-> They use the latest version of Microsoft Windows 10 (non-beta or non-preview) as provided.
->  Use Microsoft Visual Studio 2017 (non-beta or non-preview) as minimum platform for the integration environment.
-> They use the latest version of Microsoft Visual Studio 2019 (non-beta or non-preview) as provided.
-> Use the latest version of the Microsoft Windows SDK (non-beta or non-preview) for Microsoft Windows 10 (non-beta or non-preview) as provided.
-> Use Intel Parallel Studio 2019 as a minimum platform.
-> They use the latest version of Intel Parallel Studio from the minimum version criterion and as provided.


INTEL C++ / MICROSOFT VISUAL C++

-> The key code compiles with other versions of Intel C++ / Microsoft Visual C++, provided that there are support for the resources used in the directly related codes and files. But the project file (vcxproj) may be incompatible as a function of changes made through the versions/updates.
-> Compilation options can also vary between versions/updates. If you use another Intel C++ / Microsoft Visual C++ version/update, adjustments may be required.

MICROSOFT WINDOWS SDK

-> The sample projects are always distributed and configured to use the latest version of the Microsoft Windows SDK (non-beta or non-preview) for Microsoft Windows 10 (non-beta or non-preview). However, they are compatible with the Microsoft Windows SDK 10.0.10240.0 onwards.
-> The key code also compiles with other versions of the Windows SDK. However, adaptations may be required as a function of build options and support for features in libraries and header files.

SOFTWARES && TECHNOLOGIES

==> Operating Systems

-> Microsoft Windows 10 (May 2019 Update / a.k.a. 1903)
-> Microsoft Windows 10 (October 2018 Update / a.k.a. 1809)
-> Microsoft Windows 10 (April 2018 Update / a.k.a. 1803)
-> Microsoft Windows 10 (Fall Creators Update)
-> Microsoft Windows 10 (Creators Update)

==> Compilers

-> Microsoft C/C++
-> Microsoft Macro Assembler (MASM).
-> Intel C/C++

==> Platform: Microsoft Windows operating system

-> C++ programming language.
-> Assembly (Intel x86, Intel 64-x64).


==> Platform: CLR (Common Language Runtime)

-> C++/CLI (Common Language Infrastructure) projection.
-> CIL - Common Intermediate Language.
-> C# Programming Language.


==> Platform: WinRT (Windows Runtime)

-> C++/WinRT projection.
-> C++/CX (Component Extensions) projection.
-> C++ programming language.


==> Libraries

-> Microsoft UCRT - Universal C Runtime.
-> Microsoft CRT - C Runtime.
-> WinRT Libraries.
-> Windows API's (Application Programming Interfaces).
-> C++ Standard Library.
-> C++ STL - Standard Template Library.
-> BCL - Base Class Library (core set).
-> FCL - Framework Class Library (complete set).

==> Intel Parallel Studio (Intel  C++)

->	2019 (RTM, Update 4).

==> Microsoft Visual Studio 2019 (Microsoft Visual C++)

-> 16.2.n

==> Microsoft Visual Studio 2017 (Microsoft Visual C++)

-> 15.9.n


==> Microsoft Windows SDK(s) (including updates)

-> 10.0.18362.n (Microsoft Windows 10 version 1903 / a.k.a. May 2019 Update)
-> 10.0.17763.n (Microsoft Windows 10 version 1809 / a.k.a. October 2018 Update)
-> 10.0.17134.n (Microsoft Windows 10 version 1803 / a.k.a. April 2018 Update)
-> 10.0.16299.n (Microsoft Windows 10  version 1709 / a.k.a. Fall Creators Update)
-> 10.0.15063.n (Microsoft Windows 10 version 1703 / a.k.a. Creators Update)
-> 10.0.15052.n
-> 10.0.14965.n
-> 10.0.14393.n (Microsoft Windows 10 version 1607 / a.k.a. Anniversary Edition)
-> 10.0.10586.n (Microsoft Windows 10)
-> 10.0.10240.n (Microsoft Windows 10)


INTRODUCTION


DETAILS


*/


#ifdef __INTEL_COMPILER
#pragma warning( disable: 1079 )
#endif

#pragma region Include Files

#include <cstdio>
#include <cstdint>
#include <conio.h>
#include <cstdlib>
#include <cwchar>
#include <typeinfo>

#include <afx.h>

#pragma endregion

#pragma region Namespaces

using namespace std;

#pragma endregion

#pragma region Pause routine
void Pause( bool finish = false ) {

	constexpr wchar_t* _finishMessage { L"Press <ENTER> to finish..." };
	constexpr wchar_t* _pauseMessage { L"Press <ENTER> to continue..." };

	_cwprintf_s( L"\n\n%s\n\n", !finish ? _pauseMessage : _finishMessage );

	_getwchar_nolock();

	return;
};
#pragma endregion


wchar_t* YesNo( bool confirmed ) {

	return ( confirmed ? L"yes" : L"no" );

};

#pragma region Defining a typical MFC derived type.

class Person : public CObject {};

class Employee : public Person {};

#pragma endregion

template< typename T, typename H>
uint32_t TwoExpressions( T&& l, H&& r ) {
	return  ( l + r );
};

void wmain() {

	uint32_t X { 90 };

	uint32_t& Y { X };

	uint32_t L { Y };

	uint32_t&& Z { ( Y * L ) };


	uint32_t index { 20 };
	
	index = TwoExpressions<uint32_t, uint32_t>( ( index * 10 ), ( index * 30 ) ) ;


	uint32_t* ptrToUINT32 {}; /* When using {} empty braces syntax we are initializing the pointer with the nullptr value. */

	int32_t* ptrToINT32 {}; /* Also initialized with nullptr value when using {} empty braces syntax. */

	uint64_t* ptrToUINT64 {}; /* Also initialized with nullptr value when using {} empty braces syntax. */

	int64_t* ptrToINT64 {}; /* Also initialized with nullptr value when using {} empty braces syntax. */

#pragma region Using RAW POINTERS

	_cwprintf_s( L"\n\nUsing RAW POINTERS\n\n" );

	Person* rPerson { new Person() };

#pragma endregion

#pragma region Info about the instance

	const type_info& personInfo { typeid( rPerson ) };

#pragma endregion

	/*

	Ancestor, yes or no?

	*/
	bool ancestor { ( typeid( CObject ).before( personInfo ) ) };

	/*

	Print RTTI information about the object.

	*/
	_cwprintf_s( L"Human-readable name: %S\n\nUndecoretad name: %S\n\nCObject is an ancestor?: %s\n\nPerson is a descendent?: %s", personInfo.name(), personInfo.raw_name(), YesNo( ancestor ), YesNo( ancestor ) );


	delete rPerson; rPerson = nullptr;


	::Pause( true );

	return;
};



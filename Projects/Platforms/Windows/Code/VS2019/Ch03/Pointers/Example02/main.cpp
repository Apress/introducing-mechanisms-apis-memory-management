/*

AUTHOR: Roger Villela
E-MAIL: RVJ.Education@OpenMind.OnMicrosoft.com
CONTACT: RogerVillelaJournal@OpenMind.OnMicrosoft.com
LINKEDIN: https://www.linkedin.com/in/rogervillela

(EN-US) MATERIAL FOR EXCLUSIVE EDUCATIONAL AND INFORMATIVE USE

The use of this example project and other materials created, provided and
presented directly by ROGER VILLELA, hereinafter referred to as the SOLE AUTHOR
and SOLE HOLDER of the rights in any present or future context, are dedicated
solely to Educational use through courses and other commercial or free products
of authorship of the exclusive authors, which the EXCLUSIVE AUTHOR presents and
can present throughout the national and international territory through various
means of communication and distribution, such as electronic documents,
print-outs, social networks and purpose-compatible groups such as blogs and
other types of sites for presentation of educational technical content,
conferences through products such as Microsoft Skype (Copyright- All rights
reserved), Microsoft Teams (copyright-All rights Reserved), Microsoft Skype for
Business (copyright-All rights Reserved), and others that are relevant to the
educational technical purpose. The EXCLUSIVE AUTHOR is not liable, directly or
indirectly, for the use made by third parties of this or other products. The
EXCLUSIVE AUTHOR does not implicitly authorize any physical person and person
legal, to use their products or their name without the proper commercial and
legal contracting. The commercial and legal contracting must follow according to
the rules determined in each district, province, principality, kingdom, city,
state and country that demonstrate interest. Prior to the commercial and legal
rules determined in each geographical context, the terms first formalised by the
EXCLUSIVE AUTHOR and which need to be accepted and fulfilled in their entirety
for such hiring to be officially recognized by the EXCLUSIVE AUTHOR.

MICROSOFT VISUAL STUDIO

-> The solutions, projects, sample codes, support files required, codes that are
integrally or partially included in the newsletter text as part of each edition
of the ROGERVILLELA JOURNAL are constructed according to the following minimum
criteria:

				-> Use Microsoft Windows 10 creators Update (RTM) as minimum
platform.
				-> They use the latest version of Microsoft Windows 10 (RTM) as
provided.
				-> Use Microsoft Visual Studio 2017 (RTM) as minimum platform.
				-> They use the latest version of Microsoft Visual Studio 2017
(RTM) as provided.
				-> Use the latest version of the Microsoft Windows SDK (RTM) for
Microsoft Windows 10 (RTM) as provided.
				-> Use the .NET Framework version 4.0 (RTM) as minimum version.
				-> They use the latest version of the .NET Framework (RTM) from
the minimum version criterion and as provided.

INTEL PARALLEL STUDIO

-> The solutions, projects, sample codes, support files required, codes that are
integrally or partially included in the newsletter text as part of each edition
of the ROGERVILLELA JOURNAL are constructed according to the following minimum
criteria:

		-> Use Microsoft Windows 10 creators Update (RTM) as minimum platform.
		-> They use the latest version of Microsoft Windows 10 (RTM) as
provided.
		->  Use Microsoft Visual Studio 2017 (RTM) as minimum platform for the
integration environment.
		-> They use the latest version of Microsoft Visual Studio 2017 (RTM) as
provided.
		-> Use the latest version of the Microsoft Windows SDK (RTM) for
Microsoft Windows 10 (RTM) as provided.
		-> Use Intel Parallel Studio 2018 as a minimum platform.
		-> They use the latest version of Intel Parallel Studio from the minimum
version criterion and as provided.


INTEL C++ / MICROSOFT VISUAL C++

-> The key code compiles with other versions of Intel C++ / Microsoft Visual
C++, provided that there are support for the resources used in the directly
related codes and files. But the project file (vcxproj) may be incompatible as a
function of changes made through the versions/updates.
-> Compilation options can also vary between versions/updates. If you use
another Intel C++ / Microsoft Visual C++ version/update, adjustments may be
required.

MICROSOFT WINDOWS SDK

-> The sample projects are always distributed and configured to use the latest
version of the Microsoft Windows SDK (RTM) for Microsoft Windows 10 (RTM).
However, they are compatible with the Microsoft Windows SDK 10.0.10240.0
onwards.
-> The key code also compiles with other versions of the Windows SDK. However,
adaptations may be required as a function of build options and support for
features in libraries and header files.

SOFTWARES && TECHNOLOGIES

==> Operating Systems

-> Microsoft Windows 10 (October 2018 Update / a.k.a. 1809)
-> Microsoft Windows 10 (April 2018 Update / a.k.a. 1803)
-> Microsoft Windows 10 (Fall Creators Update)
-> Microsoft Windows 10 (Creators Update)

==> Compilers

-> Microsoft C++
-> Intel C++

==> Platform: Windows OS

-> C++ programming language.
-> Assembly (Intel x86, Intel x64, Intel 64).


==> Platform: CLR (Common Language Runtime)

-> C++/CLI (Common Language Infrastructure) projection.
-> CIL - Common Intermediate Language.
-> C# Programming Language.


==> Platform: WinRT (Windows Runtime)

-> C++/CX (Component Extensions) projection.
-> C++ programming language.


==> Libraries

-> Microsoft UCRT - Universal C Runtime.
-> Microsoft CRT - C Runtime.
-> WinRT Libraries.
-> Windows API's (Application Programming Interfaces).
-> C++ Standard Library.
-> C++ STL - Standard Template Library.
-> STL/CLR Library.
-> BCL - Base Class Library (core set).
-> FCL - Framework Class Library (complete set).

==> Intel Parallel Studio (Intel  C++)

->	2019 (RTM, Update 1).
->	2018 (RTM, Update 3).

==> Microsoft Visual Studio 2019 (Microsoft Visual C++)

-> 16.n.n

==> Microsoft Visual Studio 2017 (Microsoft Visual C++)

-> 15.9.n
-> 15.8.n
-> 15.7.n
-> 15.6.n
-> 15.5.n
-> 15.4.n
-> 15.3.n
-> 15.2.n
-> 15.0.n


==> Microsoft Windows SDK(s) (including updates)

-> 10.0.17763.n (Microsoft Windows 10 October 2018 Update / a.k.a. 1809)
-> 10.0.17134.n (Microsoft Windows 10 April 2018 Update / a.k.a. 1803)
-> 10.0.16299.n (Microsoft Windows 10 Fall Creators Update)
-> 10.0.15063.n (Microsoft Windows 10 Creators Update)
-> 10.0.15052.n
-> 10.0.14965.n
-> 10.0.14393.n
-> 10.0.10586.n
-> 10.0.10240.n




*/

#ifdef __INTEL_COMPILER
#pragma warning(disable : 1079)
#endif

#pragma region Header files


#include <cstdint>
#include <cstdlib>
#include <string>
#include <memory>


/*MFC*/
#include <afx.h>

/*RVJ*/
#include "RVJ.Core.System.Information.h"

#pragma endregion

#pragma region Namespaces

using namespace std;

#pragma endregion

#pragma region Pause routine

void Pause( bool finish = false ) {

	constexpr wchar_t* _finishMessage{ L"Press <ENTER> for finish..." };
	constexpr wchar_t* _pauseMessage{ L"Press <ENTER> for continue..." };

	_cwprintf_s( L"\n\n%s\n\n", !finish ? _pauseMessage : _finishMessage );

	_getwchar_nolock();

	return;
};

#pragma endregion


class Person : public CObject {

private:

	std::wstring _firstName{};
	std::wstring _familyName{};
	std::uint32_t _age{};

public:

	std::wstring FirstName{};

};

/*

		- Include header file <memory> or <memory.h>
		- Is necessary uses the new operator.
		- Is not necessary uses the delete operator.
		- Using delete operator causes unpredictable consequences.
		- Always assign nullptr after the pointer is not more in use.

		CHARACTERISTICS OF A unique_ptr<T>

		RECOMMENDATION: Uses make_unique to create an instance of unique_ptr instead of calls unique_ptr directly.

		The make_unique is carefully implemented for avoid exception, that is, exception safety on the terminology. We do not need to use the new operatior for memory allocation and not the delete operator for release the memory, the make_unique do this for us.

*/

void Scenario00() {

	unique_ptr<Person> pPerson{ new  Person() };

	/*

	When unique_ptr is destroyed all memory and objects are released from memory.

	*/


	_cwprintf_s( L"%s\n", L"unique_ptr instance, owner of an instance of Person allocated with malloc funcion..." );

	pPerson = nullptr;


	return;
};


void Scenario01() {

	unique_ptr<Person> pPerson{ make_unique<Person>() };

	/*

	When unique_ptr is destroyed, all memory and objects are released from memory.

	*/
	pPerson = nullptr;


	return;
};


/*

A unique_ptr cannot be directly or indirectly shared.

*/
void Scenario02() {

	unique_ptr<Person> pPersonOne{ make_unique<Person>() };
	unique_ptr <Person> pPersonTwo{};

	Person* rPersonOne{ new Person() };
	Person* rPersonTwo{};



	rPersonTwo = rPersonOne;

	//pPersonTwo = pPersonOne;




	/*

	When unique_ptr is destroyed, all memory and objects are released from memory.

	*/
	delete rPersonOne, rPersonTwo = nullptr, rPersonOne = nullptr;

	pPersonOne = nullptr, pPersonTwo = nullptr;


	return;
};

/*

Cannot copy, only use the move semantics.

*/
void Scenario03() {

	Person* rPersonOne{ new Person() };
	Person* rPersonTwo{};


	unique_ptr<Person> pPersonOne{ make_unique<Person>() };
	unique_ptr <Person> pPersonTwo{};



	/*

	Instead of this expression:

	pPersonTwo = pPersonOne;

	now we have this expression:

	pPersonTwo = std::move(pPersonOne);

	*/

	pPersonTwo = std::move( pPersonOne );


	/*

	When unique_ptr is destroyed, all memory and objects are released from memory.

	*/
	delete rPersonOne, rPersonTwo = nullptr, rPersonOne = nullptr;

	pPersonOne = nullptr, pPersonTwo = nullptr;


	return;
};

void wmain() {

	Scenario00();
	Scenario01();
	Scenario02();
	Scenario03();

	return;
};

/*

AUTHOR: Roger Villela
AUTHOR CONTACT: Roger@OpenMind.OnMicrosoft.com
RVJ EDUCATION CONTACT: RVJ.Education@OpenMind.OnMicrosoft.com
RVJ CONTACT: RogerVillelaJournal@OpenMind.OnMicrosoft.com
LINKEDIN: https://www.linkedin.com/in/rogervillela

(EN-US) MATERIAL FOR EXCLUSIVE EDUCATIONAL AND INFORMATIVE USE

The use of this example project and other materials created, provided and presented directly by ROGER VILLELA, hereinafter referred to as the SOLE AUTHOR and SOLE HOLDER of the rights in any present or future context, are dedicated solely to Educational use through courses and other commercial or free products of authorship of the exclusive authors, which the EXCLUSIVE AUTHOR presents and can present throughout the national and international territory through various means of communication and distribution, such as electronic documents, print-outs, social networks and purpose-compatible groups such as blogs and other types of sites for presentation of educational technical content, conferences through products such as Microsoft Skype (Copyright- All rights reserved), Microsoft Teams (copyright-All rights Reserved), Microsoft Skype for Business (copyright-All rights Reserved), and others that are relevant to the educational technical purpose. The EXCLUSIVE AUTHOR is not liable, directly or indirectly, for the use made by third parties of this or other products. The EXCLUSIVE AUTHOR does not implicitly authorize any physical person and person legal, to use their products or their name without the proper commercial and legal contracting. The commercial and legal contracting must follow according to the rules determined in each district, province, principality, kingdom, city, state and country that demonstrate interest. Prior to the commercial and legal rules determined in each geographical context, the terms first formalised by the EXCLUSIVE AUTHOR and which need to be accepted and fulfilled in their entirety for such hiring to be officially recognized by the EXCLUSIVE AUTHOR.

MICROSOFT VISUAL STUDIO

-> The solutions, projects, sample codes, support files required, codes that are integrally or partially included in the newsletter text as part of each edition of the ROGERVILLELA JOURNAL are constructed according to the following minimum criteria:

		-> Use Microsoft Windows 10 Creators Update (RTM) as minimum platform.
		-> They use the latest version of Microsoft Windows 10 (RTM) as provided.
		-> Use Microsoft Visual Studio 2019 (RTM) as minimum platform.
		-> They use the latest version of Microsoft Visual Studio 2019 (RTM) as provided.
		-> Use the latest version of the Microsoft Windows SDK (RTM) for Microsoft Windows 10 (RTM) as provided.
		-> Use the .NET Framework version 4.0 (RTM) as minimum version.
		-> They use the latest version of the .NET Framework (RTM) from the minimum version criterion and as provided.

INTEL PARALLEL STUDIO

-> The solutions, projects, sample codes, support files required, codes that are integrally or partially included in the newsletter text as part of each edition of the ROGERVILLELA JOURNAL are constructed according to the following minimum criteria:

	-> Use Microsoft Windows 10 Creators Update (RTM) as minimum platform.
	-> They use the latest version of Microsoft Windows 10 (RTM) as provided.
	->  Use Microsoft Visual Studio 2019 (RTM) as minimum platform for the integration environment.
	-> They use the latest version of Microsoft Visual Studio 2019 (RTM) as provided.
	-> Use the latest version of the Microsoft Windows SDK (RTM) for Microsoft Windows 10 (RTM) as provided.
	-> Use Intel Parallel Studio XE 2019 as a minimum platform.
	-> They use the latest version of Intel Parallel Studio from the minimum version criterion and as provided.


INTEL C++ / MICROSOFT VISUAL C++

-> The key code compiles with other versions of Intel C++ / Microsoft Visual C++, provided that there are support for the resources used in the directly related codes and files. But the project file (vcxproj) may be incompatible as a function of changes made through the versions/updates.
-> Compilation options can also vary between versions/updates. If you use another Intel C++ / Microsoft Visual C++ version/update, adjustments may be required.

MICROSOFT WINDOWS SDK

-> The sample projects are always distributed and configured to use the latest version of the Microsoft Windows SDK (RTM) for Microsoft Windows 10 (RTM). However, they are compatible with the Microsoft Windows SDK 10.0.10240.0 onwards.
-> The key code also compiles with other versions of the Windows SDK. However, adaptations may be required as a function of build options and support for features in libraries and header files.

SOFTWARES && TECHNOLOGIES

==> Operating Systems

-> Microsoft Windows 10 (May 2019 Update / a.k.a. 1903)
-> Microsoft Windows 10 (October 2018 Update / a.k.a. 1809)
-> Microsoft Windows 10 (April 2018 Update / a.k.a. 1803)
-> Microsoft Windows 10 (Fall Creators Update)
-> Microsoft Windows 10 (Creators Update)

==> Compilers

-> Microsoft C++ compiler (CL.EXE).
-> Microsoft C compiler (CL.EXE).
-> Microsoft Macro Assembler (MASM) (ML.EXE).
-> Intel C++ compiler (ICL.EXE).
-> Intel C compiler (ICL.EXE).

==> Platform: Windows OS

-> C++ programming language.
-> Assembly (Intel x86, Intel x64, Intel 64).


==> Platform: CLR (Common Language Runtime)

-> C++/CLI (Common Language Infrastructure) projection.
-> CIL - Common Intermediate Language.
-> MSIL - Microsoft Intermediate Language.
-> C# Programming Language.


==> Platform: WinRT (Windows Runtime)

-> C Programming Language.
-> C++ Programming Language.
-> C++/CX (Component Extensions) projection.
-> C++/WinRT projection.


==> Libraries

-> Microsoft UCRT - Universal C Runtime.
-> Microsoft CRT - C Runtime.
-> WinRT Libraries.
-> Windows API's (Application Programming Interfaces).
-> C++ Standard Library.
-> C++ STL - Standard Template Library.
-> Boost ( https://www.boost.org/ )
-> BCL - Base Class Library (core set).
-> FCL - Framework Class Library (complete set).

==> Intel Parallel Studio (Intel  C++)

->	2019 (RTM, Update 4).

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

	Progressive examples about the use of pointers and smart pointers.

DETAILS

	We have a sequence of eight sample functions Scenario00, Scenario01, Scenario02, Scenario03, Scenario04, Scenario05, Scenario06,and Scenario07 and the respective comments about the behaviors of raw pointers, unique_ptr, and smart pointers in the respective context.

*/


#ifdef __INTEL_COMPILER
// Disable warning for wmain() not returning an integer value.
#pragma warning(  disable : 1079 )
#else

// Disable warning for wmain() not returning an integer value.
#pragma warning(  disable : 4326 )

#endif

#pragma region Header Files

#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <typeinfo>
#include <cwchar>


#include <conio.h>

/* MFC */
#include <afx.h>

/* RVJ */
#include <Utils.h>


#pragma endregion

#pragma region Namespaces

using namespace std;

#pragma endregion

#pragma region Class Person

class Person : public CObject {


public:
	Person() {

		_cwprintf_s( L"Constructor of Person.\n\n" );

	};
	~Person() {

		_cwprintf_s( L"Destructor of Person.\n\n" );

	};

public:

	/* Potential for cyclic pointers!!! This is not recommended. */
	Person* another {};

};


#pragma endregion

#pragma region Scenario 00 - RAW Pointers

void Scenario00() {

	Person* rPerson { new Person() };
	Person* rPerson00 { rPerson };
	Person* rPerson01 { rPerson };
	Person* rPerson02 { rPerson };


	uint8_t* rUINT8 { new uint8_t( 0x0000 ) };
	uint8_t* rUINT8_00 { rUINT8 };

	uint16_t* rUINT16 { new uint16_t( 0xA000 ) };
	uint16_t* rUINT16_00 { rUINT16 };


	uint32_t* rUINT32 { new uint32_t( 0xC000 ) };
	uint32_t* rUINT32_00 { rUINT32 };

	uint64_t* rUINT64 { new uint64_t( 0xF000 ) };
	uint64_t* rUINT64_00 { rUINT64 };


	delete rUINT64_00;
	delete rUINT32_00;
	delete rUINT16_00;
	delete rUINT8_00;
	delete rPerson00;

	rUINT64 = nullptr;
	rUINT64_00 = nullptr;
	rUINT32 = nullptr;
	rUINT32_00 = nullptr;
	rUINT16 = nullptr;
	rUINT16_00 = nullptr;
	rUINT8 = nullptr;
	rUINT8_00 = nullptr;
	rPerson = nullptr;
	rPerson00 = nullptr;
	rPerson01 = nullptr;
	rPerson02 = nullptr;

	Pause();
	_flushall();
	_wsystem( L"cls" );

	return;
};

#pragma endregion

#pragma region Scenario01 - unique_ptr Smart Pointer - Using multiple scopes

void Scenario01() {

	{

		unique_ptr<Person> upPerson { make_unique<Person>() };

	};

	// Out of scope is destroyed from memory.

	Pause();
	_flushall();
	_wsystem( L"cls" );

	return;
};

#pragma endregion

#pragma region Scenario02 - unique_ptr Smart Pointer - multiple references.

/* Two instances of unique_ptr cannot points to the same instance. */
void Scenario02() {

	{

		unique_ptr<Person> upPerson { make_unique<Person>() };
	 /* unique_ptr<Person> upPerson00 { upPerson }; */

	};

	// Out of scope, the smart pointer is destroyed from memory.

	Pause();
	_flushall();
	_wsystem( L"cls" );

	return;
};

#pragma endregion

#pragma region Scenario03 - shared_ptr Smart Pointer - Learning about owner concept.

void Scenario03() {

	shared_ptr<Person> spPerson { make_shared<Person>() }; // Owner
	shared_ptr<Person> spPerson00 { spPerson }; // Not owner, just a new reference.
	shared_ptr<Person> spPerson01 { make_unique<Person>() }; // Owner
	shared_ptr<Person> spPerson02 { new Person() }; // Owner


	_cwprintf_s( L"Number of shared_ptr that points to the same resource: %d\n\n", spPerson.use_count() );

	/*if ( const wchar_t* yes_or_no = YesOrNo( spPerson01.owner_before( spPerson ) ) ) {

		_cwprintf_s( L"Owner before on hierarchy: %s\n\n", yes_or_no );

	};*/

	Pause();
	_flushall();
	_wsystem( L"cls" );

	return;
};

#pragma endregion

#pragma region Scenario04 - shared_ptr Smart Pointer - Learning about reference counting concept.

void Scenario04() {

	shared_ptr<Person> spPerson { make_shared<Person>() }; // Owner
	shared_ptr<Person> spPerson01 { make_shared<Person>() }; // Owner

	long numberOfReferencesFirst { spPerson.use_count() };
	long numberOfReferencesSecond { spPerson01.use_count() };

	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson: %d\n\n", numberOfReferencesFirst );

	shared_ptr<Person> spPerson00 { spPerson }; // Not owner, just a new reference.

	numberOfReferencesFirst = spPerson00.use_count();

	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson: %d\n\n", numberOfReferencesFirst );

	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson01: %d\n\n", numberOfReferencesSecond );

	/* Minus one reference to spPerson.  */
	spPerson00 = nullptr;
	--numberOfReferencesFirst;

	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson: %d\n\n", numberOfReferencesFirst );

	/* Minus one reference to spPerson.  */
	spPerson = nullptr;
	--numberOfReferencesFirst;

	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson: %d\n\n", numberOfReferencesFirst );

	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson01: %d\n\n", numberOfReferencesSecond );

	spPerson01 = nullptr;
	--numberOfReferencesSecond;

	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson01: %d\n\n", numberOfReferencesSecond );

	Pause();
	_flushall();
	_wsystem( L"cls" );

	return;
};

#pragma endregion

#pragma region Scenario05 - shared_ptr Smart Pointer - Learning about reference counting using scope.

void Scenario05() {

	shared_ptr<Person> spPerson { make_shared<Person>() }; // Owner

	long numberOfReferencesFirst { spPerson.use_count() };
	long numberOfReferencesSecond {};

	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson: %d\n\n", numberOfReferencesFirst );

	{

		/* Open scope. More one reference for spPerson. */
		shared_ptr<Person> spPerson00 { spPerson }; // Not owner, just a new reference.

		numberOfReferencesFirst = spPerson.use_count();

		_cwprintf_s( L"Number of shared_ptrs that point for spPerson: %d\n\n", numberOfReferencesFirst );

	}

	/*  Closed scope. Minus  one reference for spPerson. */
	numberOfReferencesFirst = spPerson.use_count();

	_cwprintf_s( L"Number of shared_ptrs that point for spPerson: %d\n\n", numberOfReferencesFirst );

	{

		shared_ptr<Person> spPerson01 { make_shared<Person>() }; // Owner

		numberOfReferencesSecond = spPerson01.use_count();

		_cwprintf_s( L"Number of shared_ptrs that point for spPerson01: %d\n\n", numberOfReferencesSecond );

	}
	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson01: %d\n\n", --numberOfReferencesSecond );

	/* Minus one reference to spPerson.  */

	spPerson = nullptr;
	--numberOfReferencesFirst;

	_cwprintf_s( L"Number of shared_ptrs that point for the spPerson: %d\n\n", numberOfReferencesFirst );

	Pause();
	_flushall();
	_wsystem( L"cls" );

	return;
};

#pragma endregion

#pragma region Scenario06 - Working with std:move function.

void Scenario06() {

	/*

	RECOMMENDATION

	Except when necessary, do not create multiple owners for the same resource.
	This practice add complexity to the source code, and application as whole.

	*/

	unique_ptr<Person> upPerson { make_unique<Person>() };  //Owner
	unique_ptr<Person> upPerson00 { std::move( upPerson ) }; //  Moving the owner.

	/*

	upPerson not owner anymore.

	*/

	/*

	READ ACCESS VIOLATION.

	The instance of Person object (a resource) was moved to a new owner, in our example, this new owner is upPerson00.
	After transference, the old reference was reset, creating null values for internal pointers and random values for other kinds of data types, such as number data types.

	Our class Person derives of a base class CObject, one of classes of Microsoft Foundation Classes (MFC) framework .
	One of the methods is CObject->IsSerializable.
	After moved, trying to use the old resource we have the read access violation because the internal instance of Person object does not exist anymore.



	*/
	//upPerson->IsSerializable();

	Pause();
	_flushall();
	_wsystem( L"cls" );

	return;
};


#pragma endregion

#pragma region  Scenario 07 - Working with weak_ptr and shared_ptr.

/*

A weak_ptr applied for avoid cyclic scenario, A point to B, and B point to A.

*/

void Scenario07() {

	Person* pA { new Person() };
	Person* pB { new Person() };

	shared_ptr<Person> spPersonA { pA }; //Owner
	shared_ptr<Person> spPersonB { pB }; // Owner

	/* Cyclic pointers scenario. */
//	pA->another = pB;
//	pB->another = pA;

	_cwprintf_s( L"Counting for spPersonA BEFORE: %d\nCounting for spPersonB BEFORE: %d \n", spPersonA.use_count(), spPersonB.use_count() );

//		delete pB, pB = nullptr, delete pA, pA = nullptr;

	_cwprintf_s( L"Counting for spPersonA AFTER: %d\nCounting for spPersonB AFTER: %d \n", spPersonA.use_count(), spPersonB.use_count() );


	Pause();
	_flushall();
	_wsystem( L"cls" );

	_cwprintf_s( L"Now, using weak_ptr\n \n" );

	_cwprintf_s( L"Counting for spPersonA BEFORE: %d\nCounting for spPersonB BEFORE: %d \n", spPersonA.use_count(), spPersonB.use_count() );

	weak_ptr<Person> wpPersonA (  spPersonB );  // Take ownership temporarily without increment the number for reference counting.
	weak_ptr<Person> wpPersonB ( spPersonA ); // Take ownership temporarily without increment the number for reference counting.

	//OR

//	wpPersonA = spPersonB; // Taking ownership temporarily without increment the number for reference counting.
//	wpPersonB = spPersonA; // Taking ownership temporarily without increment the number for reference counting.

	_cwprintf_s( L"Counting for spPersonA AFTER: %d\nCounting for spPersonB AFTER: %d \n", spPersonA.use_count(), spPersonB.use_count() );

	if ( ( !wpPersonA.expired() ) && ( !wpPersonB.expired() ) ) {

		spPersonA = wpPersonA.lock();
		spPersonB = wpPersonB.lock();

		_cwprintf_s( L"Counting for wpPersonA AFTER: %d\nCounting for wpPersonB AFTER: %d \n", wpPersonA.use_count(), wpPersonB.use_count() );

		_cwprintf_s( L"Counting for spPersonA AFTER: %d\nCounting for spPersonB AFTER: %d \n", spPersonA.use_count(), spPersonB.use_count() );

		wpPersonA.reset(), wpPersonB.reset();

		_cwprintf_s( L"Counting for wpPersonA AFTER reset: %d\nCounting for wpPersonB AFTER reset: %d \n", wpPersonA.use_count(), wpPersonB.use_count() );

		_cwprintf_s( L"Counting for spPersonA AFTER reset of wpPersonA: %d\nCounting for spPersonB AFTER reset of wpPersonB: %d \n", spPersonA.use_count(), spPersonB.use_count() );
	};


	return;
};

#pragma endregion

void wmain() {

//	Scenario00();

//	Scenario01();

//	Scenario02();

//	Scenario03(); // Learning about Owner

//	Scenario04(); // Learning about reference counting

//	Scenario05(); // Learning about reference counting using scope.

//	Scenario06();

	Scenario07();

	Pause( true );

	return;
};


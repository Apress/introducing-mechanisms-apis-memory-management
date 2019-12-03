/*

AUTHOR: Roger Villela
E-MAIL: RVJ.Education@OpenMind.OnMicrosoft.com
CONTACT: RogerVillelaJournal@OpenMind.OnMicrosoft.com
LINKEDIN: https://www.linkedin.com/in/rogervillela

(EN-US) MATERIAL FOR EXCLUSIVE EDUCATIONAL AND INFORMATIVE USE

The use of this example project and other materials created, provided and presented directly by ROGER VILLELA, hereinafter referred to as the SOLE AUTHOR and SOLE HOLDER of the rights in any present or future context, are dedicated solely to Educational use through courses and other commercial or free products of authorship of the exclusive authors, which the EXCLUSIVE AUTHOR presents and can present throughout the national and international territory through various means of communication and distribution, such as electronic documents, print-outs, social networks and purpose-compatible groups such as blogs and other types of sites for presentation of educational technical content, conferences through products such as Microsoft Skype (Copyright- All rights reserved), Microsoft Teams (copyright-All rights Reserved), Microsoft Skype for Business (copyright-All rights Reserved), and others that are relevant to the educational technical purpose. The EXCLUSIVE AUTHOR is not liable, directly or indirectly, for the use made by third parties of this or other products. The EXCLUSIVE AUTHOR does not implicitly authorize any physical person and person legal, to use their products or their name without the proper commercial and legal contracting. The commercial and legal contracting must follow according to the rules determined in each district, province, principality, kingdom, city, state and country that demonstrate interest. Prior to the commercial and legal rules determined in each geographical context, the terms first formalised by the EXCLUSIVE AUTHOR and which need to be accepted and fulfilled in their entirety for such hiring to be officially recognized by the EXCLUSIVE AUTHOR.

MICROSOFT VISUAL STUDIO

-> The solutions, projects, sample codes, support files required, codes that are integrally or partially included in the newsletter text as part of each edition of the ROGERVILLELA JOURNAL are constructed according to the following minimum criteria:

		-> Use Microsoft Windows 10 creators Update (RTM) as minimum platform.
		-> They use the latest version of Microsoft Windows 10 (RTM) as provided.
		-> Use Microsoft Visual Studio 2017 (RTM) as minimum platform.
		-> They use the latest version of Microsoft Visual Studio 2017 (RTM) as provided.
		-> Use the latest version of the Microsoft Windows SDK (RTM) for Microsoft Windows 10 (RTM) as provided.
		-> Use the .NET Framework version 4.0 (RTM) as minimum version.
		-> They use the latest version of the .NET Framework (RTM) from the minimum version criterion and as provided.

INTEL PARALLEL STUDIO

-> The solutions, projects, sample codes, support files required, codes that are integrally or partially included in the newsletter text as part of each edition of the ROGERVILLELA JOURNAL are constructed according to the following minimum criteria:

	-> Use Microsoft Windows 10 creators Update (RTM) as minimum platform.
	-> They use the latest version of Microsoft Windows 10 (RTM) as provided.
	->  Use Microsoft Visual Studio 2017 (RTM) as minimum platform for the integration environment.
	-> They use the latest version of Microsoft Visual Studio 2017 (RTM) as provided.
	-> Use the latest version of the Microsoft Windows SDK (RTM) for Microsoft Windows 10 (RTM) as provided.
	-> Use Intel Parallel Studio 2018 as a minimum platform.
	-> They use the latest version of Intel Parallel Studio from the minimum version criterion and as provided.


INTEL C++ / MICROSOFT VISUAL C++

-> The key code compiles with other versions of Intel C++ / Microsoft Visual C++, provided that there are support for the resources used in the directly related codes and files. But the project file (vcxproj) may be incompatible as a function of changes made through the versions/updates.
-> Compilation options can also vary between versions/updates. If you use another Intel C++ / Microsoft Visual C++ version/update, adjustments may be required.

MICROSOFT WINDOWS SDK

-> The sample projects are always distributed and configured to use the latest version of the Microsoft Windows SDK (RTM) for Microsoft Windows 10 (RTM). However, they are compatible with the Microsoft Windows SDK 10.0.10240.0 onwards.
-> The key code also compiles with other versions of the Windows SDK. However, adaptations may be required as a function of build options and support for features in libraries and header files.

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

-> 16.n

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



INTRODUCTION

	Descrição de regras típicas para o bom uso de ponteiros.

DETAILS

	Se um ponteiro não é inicializado, ele não armazena um endereço de memória válido e o compilador emite o warning C4700. Os números associados com os warnings geralmente são modificados entre implementações do Microsoft Visual C++. Caso utilize partes deste código onde warnings são citados, e os números não sejam os mesmos, deve haver alguma variação no cenário de utilização como configuração, ou versão do Microsoft Visual C++ é diferente.

	int* pointerToN;


	Não inicializar o ponteiro causa erros que podem passar despercebidos até que informações ou comportamentos não previstos ocorram.
	O mais evidente deles é a aplicação abortar a execução, por isto é fundamental inicializar o ponteiro adequadamente.

*/

#ifdef __INTEL_COMPILER
#pragma warning( disable: 1079; )
#endif

#pragma region Include Files
#include <RVJ.Desktop.h>
#pragma endregion

#pragma region Namespaces
using namespace std;
using namespace RVJ::Desktop;
#pragma endregion

void ExampleN() {

	uint32_t sizeInBytes { sizeof( bool ) };
	bool bValue {};

	return;

};

/*
	Size of Pointers Scenario 0 - Using calloc() function.
*/
void SizeOfPointers_Scenario_2( void ) {

	/* Base type synonym. */
	typedef char BaseType;

	/* Maximum number of elements. */
	constexpr uint32_t NumberOfElements { 100ui32 };

	/* Size of base type, in bytes. */
	constexpr uint32_t SizeOfBaseType { sizeof( BaseType ) };

	/* Size of buffer,in bytes. */
	constexpr uint32_t Length { NumberOfElements << SizeOfBaseType };

	/* Character used for the endpoint. */
	constexpr BaseType EndPointSymbol { 0x52 }; // Uppercase R letter.

	/* Last position marker. */
	constexpr uint32_t LastPosition { Length - SizeOfBaseType };

	/* The calloc function allocates a memory block and initializes every byte with zero value. */
	BaseType* buffer { reinterpret_cast< BaseType* >( calloc( NumberOfElements, SizeOfBaseType ) ) };

	BaseType* local { buffer };

	/*

	- Assigns a letter, filling the buffer until N-2.
	- Assigns to the last byte (N-1) a different value, indicating the final of items.

	*/


	if ( ( ( buffer + LastPosition ) != nullptr ) && ( LastPosition >= 0x0ui32 ) ) {

		*( buffer + LastPosition ) = EndPointSymbol;

		/* Navigates through the items, one by one. */
		for ( uint32_t index {}; ( index != Length ); index++ ) {

			/*

			- Shows the memory address of each item, in hexadecimal and decimal.
			- Shows the memory address of variable of pointer type, in decimal and hexadecimal.
			- Shows the size of each pointer, in bytes,  for each item.
			- Shows the value of each item.
			- Shows the indice of current position.

			*/

			/* Change the formatter in accordance with the base type. */
			Console::WriteLine( u"item address (h): 0x%p\nitem address (d): %u\npointer address (h): %#0x\npointer address (d): %u\nsize of pointer (d): %u bytes\nvalue: %c\nindex: %u\n\n",
				local, local, &local, &local, sizeof( local ), *local, index );

			local++; // Next position.
			//++local; // Next position.
		};
	};


	/* Release memory alocated to the buffer . */
	::free( buffer );

	buffer = {}, local = {};

	return;
};

/*
	Size of Pointers Scenario 0 - Using malloc() function.
*/
void SizeOfPointers_Scenario_0( void ) {

	/*

	Base type.

	*/
	typedef char BaseType;

	/*

	Size of base type, in bytes.

	*/
	constexpr uint32_t SizeOfBaseTypeInBytes { sizeof( BaseType ) };

	/*

	Initial maximum number of elements, 100 elements.

	*/
	constexpr uint32_t InitialNumberOfElements { 0x00000064ui32 };

	/*

	Total size of buffer,in bytes, . that buffer can be expanded to.

	*/
	constexpr	uint32_t Length { InitialNumberOfElements << SizeOfBaseTypeInBytes };

	/*

	Character used for the endpoint, Uppercase R letter.

	*/
	constexpr BaseType EndPointSymbol { 0x52 };

	/*

	Last position marker.

	*/
	constexpr uint32_t LastPositionAfterExpansion { Length - SizeOfBaseTypeInBytes };

	/*
	If running in debug mode, calls some of debug routines for verifications.
	*/
#if _DEBUG
//_CrtSetDbgFlag();
//_CrtCheckMemory();
#endif

/*

The malloc function allocates a memory block and Windows API SecureZeroMemory() function/macro initializes every byte with zero value.

*/
	BaseType* buffer { reinterpret_cast< BaseType* >( malloc( InitialNumberOfElements ) ) };

	/*

	If everything is OK, that is, the block of memory has been allocated correctly, so, continue the program execution, else stop the execution and shows the message error.


	The Windows API SecureZeroMemory() function/macro initializes every byte with zero value.

	*/

	BaseType* local { buffer };

	if ( ( buffer != nullptr ) && ( errno != ENOMEM ) ) {

		buffer = reinterpret_cast< BaseType* >( SecureZeroMemory( reinterpret_cast< PVOID >( buffer ), ( ( SIZE_T ) InitialNumberOfElements ) ) );

		/*

		- Assigns a letter, filling the buffer until N-2.
		- Assigns to the last byte (N-1) a different value, indicating the final of items.

		*/

		BaseType** allItems = new BaseType * [ InitialNumberOfElements ];
		uint32_t index = 0ui32;

		do {

			/*

			Preenche o dynamic array with all memory address of buffer.

			*/
			allItems [ index ] = ( buffer + index );
			/*
			Or this expression:
			*/
			*( allItems + index ) = ( buffer + index );

		} while ( index );


		delete [] allItems;

		if ( ( ( buffer + InitialNumberOfElements ) != nullptr ) && ( LastPositionAfterExpansion >= 0x0ui32 ) ) {

			*( buffer + LastPositionAfterExpansion ) = EndPointSymbol;

			/* Navigates through the items, one by one. */
			for ( ; ( index != Length ); index++ ) {

				/*

				- Shows the memory address of each item, in hexadecimal and decimal.
				- Shows the memory address of variable of pointer type, in decimal and hexadecimal.
				- Shows the size of each pointer, in bytes,  for each item.
				- Shows the value of each item.
				- Shows the indice of current position.

				*/

				/*

				Change the formatter in accordance with the base type.

				*/

				Console::WriteLine( u"item address (h): 0x%p\nitem address (d): %u\npointer address (h): %#0x\npointer address (d): %u\nsize of pointer (d): %u bytes\nvalue: %c\nindex: %u\n\n",
					local, local, &local, &local, sizeof( local ), *local, index );

				local++; // Next position.
				//++local; // Next position.
			};
		};


		/*

		Release memory alocated to the buffer .

		*/
		::free( buffer );

	};



/*

Assigns the nullptr value to pointer variables buffer and local.
Instead of empty {} braces syntax, we can also uses a direct assignment of the nullptr literal value.

Internally the Assembly programming language are the same for the instructions emitted by the MSVC compiler:

	buffer = {}, local = {};
	mov         dword ptr [buffer],0
	mov         dword ptr [local],0

	buffer = nullptr, local = nullptr;
	mov         dword ptr [buffer],0
	mov         dword ptr [local],0

	If we are using development tool set different from MSVC, we should check the results and sees if the Assembly instructions emitted are different for these sequence of instructions in C++ programming language. We also should check if the sequence of execution for the instructions in C++ programming language are different, because the assign = operator could be overloaded by some library in use for the project and considers both, {} and =, special situations when used for assigns the nullvalue to a pointer variable.

*/
	buffer = {}, local = {};

	buffer = nullptr, local = nullptr;

	return;
};


void Chapter02SourceCode( void ) {

#pragma warning ( disable: 4101 4615 4700; )

#pragma region Example used on Chapter 2 - Variables not initialized explicitly or implicitly.
	{

		uint32_t* ptrToUINT32; /* When not using {} empty braces syntax and do not explicitly assigns a value, we are not initializing the pointer with a value. */

		int32_t* ptrToINT32; /* Also, not initialized with nullptr value or explicitly with some value. */

		uint64_t* ptrToUIINT64; /* Also, not initialized with nullptr value or explicitly with some value. */

		int64_t* ptrToINT64; /* Also, not initialized with nullptr value or explicitly with some value. */

	};
#pragma endregion


#pragma region Example used on Chapter 2 - Variables not initialized explicitly or implicitly.
	{

		uint32_t* ptrToUINT32; /* When not using {} empty braces syntax and do not explicitly assigns a value, we are not initializing the pointer with a value. */

		int32_t* ptrToINT32; /* Also, not initialized with nullptr value or explicitly with some value. */

		uint64_t* ptrToUIINT64; /* Also, not initialized with nullptr value or explicitly with some value. */

		int64_t* ptrToINT64; /* Also, not initialized with nullptr value or explicitly with some value. */

	};
#pragma endregion


#pragma warning ( default: 4101 4700 ; )

};

template<typename PtrBaseType>
bool isAligned( PtrBaseType argument ) {
	return ( sizeof( argument ) % sizeof( argument ) == 0 );
};

template<typename BaseType, typename PtrBaseType>
bool isMemoryBlockSizeValid( PtrBaseType argument ) {
	return ( ( BaseType ) _msize( argument ) > 0 ? true : false );
};


#pragma region Scenario - Zero Memory from Windows API - generalization

namespace RVJ {


	/*

	In a production library, this function should be internal, and not be external accessible from an external call.

	*/

	template <typename _ptrToSecureZeroMemory, typename _memoryBlock, typename _sizeOfMemoryBlock>
	PVOID _secureZeroMemory( _ptrToSecureZeroMemory _ptrToFunction, _memoryBlock _source, _sizeOfMemoryBlock  _sizeOfBlock ) {

		return  _ptrToFunction( _source, _sizeOfBlock );

	};


	/*

	Public function for Windows API SecureZeroMemory().

	*/
#if defined( _WIN32 )
	void ZeroMemorySecure( void* const _source, uint32_t _sizeOfBlock )
#elif defined( _WIN64 ) 
	void SecureZeroMemory( void* const _source, uint64_t _sizeOfBlock )
#endif
	{

		if ( ( _source != nullptr ) && ( _sizeOfBlock > 0 ) ) {

			_secureZeroMemory< PVOID( * ) ( PVOID, DWORD ) >( SecureZeroMemory, _source, _sizeOfBlock );

		};

		return;
	};


};


#pragma endregion

void wmain() {

	uint32_t* ptrToUINT32 {}; /* When using {} empty braces syntax we are initializing the pointer with the nullptr value. */

	int32_t* ptrToINT32 {}; /* Also initialized with nullptr value when using {} empty braces syntax. */

	uint64_t* ptrToUIINT64 {}; /* Also initialized with nullptr value when using {} empty braces syntax. */

	int64_t* ptrToINT64 {}; /* Also initialized with nullptr value when using {} empty braces syntax. */


	constexpr uint32_t Length { 0x000Aui32 };
	constexpr uint32_t BlockSize { Length * sizeof( uint32_t ) };
	uint32_t* ptrForMemoryBlock { reinterpret_cast< uint32_t* >( std::malloc( BlockSize ) ) };

	RVJ::ZeroMemorySecure( ptrForMemoryBlock, BlockSize );

	uint32_t index {};

	do {

		wprintf_s( L"RVJ::ZeroMemorySecure using function pointer to Windows API SecureZeroMemory function (macro). Value: %u   Memory Position: %#0x\n", *( ptrForMemoryBlock + index ), ( ( DWORD ) ( ptrForMemoryBlock + index ) ) );

		++index;

	} while ( index != Length );


	std::free( ptrForMemoryBlock ), ptrForMemoryBlock = nullptr;

	Console::Pause( {} );

	/*

	The malloc() function returns a valid pointer, if with zero size.

	*/
	uint64_t* ptrForx64 { reinterpret_cast< uint64_t* >( std::malloc( 0ui32 ) ) };
	uint32_t* ptrForx86 { reinterpret_cast< uint32_t* >( std::malloc( 0ui32 ) ) };

	bool  validMemoryBlock { ( isMemoryBlockSizeValid<uint64_t>( ptrForx64 ) && isMemoryBlockSizeValid<uint32_t>( ptrForx86 ) ) };

	if ( validMemoryBlock &&
		( isAligned( ptrForx64 ) && isAligned( ptrForx86 ) ) ) {

		ptrForx64 = reinterpret_cast< uint64_t* >( SecureZeroMemory( reinterpret_cast< PVOID >( ptrForx64 ), ( ( SIZE_T ) sizeof( ptrForx64 ) ) ) );
		ptrForx86 = reinterpret_cast< uint32_t* >( SecureZeroMemory( reinterpret_cast< PVOID >( ptrForx86 ), ( ( SIZE_T ) sizeof( ptrForx86 ) ) ) );

#ifdef _WIN32 

		constexpr uint32_t PointerSizex86 { sizeof( ptrForx86 ) };
		constexpr uint32_t PointerSizex64 { sizeof( ptrForx64 ) };

#elif _WIN64

		constexpr uint64_t PointerSizex86 { sizeof( ptrForx86 ) };
		constexpr uint64_t PointerSizex64 { sizeof( ptrForx64 ) };


#endif
		wprintf_s( L"Sizeof pointer for uint32_t to x86 hardware platform: %u\n"
			L"Sizeof pointer for uint64_t to x64 hardware platform: %u\n\n",
			PointerSizex86, PointerSizex64 );

	};


	std::free( ptrForx86 ), std::free( ptrForx64 );

	ptrForx64 = {}, ptrForx86 = {};

	/*

if ( ptrToINT64 != nullptr ) {

	uint64_t* ( *myFunction ) ( void ) {};
	//ptrToINT64;

	//uint64_t* result = *ptrToINT64();
	wprintf_s( L"Result: %u\n\n", *result );

};
	*/




/*

Shows the various ways of getting the size of a pointer.
//	if ( ptrToUINT32 == nullptr || ptrToUINT32 != nullptr )  	wprintf_s( L"The value was initialized with a valid value: %p", ptrToUINT32 );

	*/
	SizeOfPointers_Scenario_0();
	//SizeOfPointers_Scenario_1();
	//SizeOfPointers_Scenario_2();

	Console::Pause( {} );

#pragma region Declarando ponteiros	


/*

	Tips for use.

	The assigned value for a pointer variable is a memory address.

	O valor atribuído para um ponteiro é um endereço de memória. Quando declara um ponteiro, procure sempre inicializá-lo, mesmo com nullptr. Caso não vá atribuir um endereço inicial válido, atribua __nullptr (C++) / nullptr (C++). The null value indicates that the pointer does not have a valid value.	Quando ele tem o valor __nullptr (C++) / nullptr (C++), o valor é zero.
	Tendo o valor nulo, este ponteiro é reconhecido como inválido.

*/

	uint32_t* pointerToN {};
	//uint32_t* pointerToN = nullptr;
	//uint32_t* pointerToN = __nullptr;
	//uint32_t* pointerToN = {};

	/*

	If null, shows the zero value.

	*/
	Console::WriteLine( u"Pointer with value __nullptr (C++) / nullptr (C++): 0x%p\n", pointerToN );

	/*

	Shows the memory address of variable.

	*/
	Console::WriteLine( u"Address of pointer variable: %#0x\n", &pointerToN );

	// Tentar acessar o valor através do ponteiro com o valor nulo, gera erro.
	//Console::WriteLine( u"Trying to access value through pointer variable: %u\n", *pointerToN );

#pragma endregion

#pragma region Pointer initialization.

	/*

	Tips for use.

	How to get the memory address of a variable?

	Uses the & address-of operator.

	*/

	uint32_t x { 10ui32 };
	uint32_t y { 20ui32 };


	/*

	Assigns the memory address of x variable to the pointerToX pointer variable.

	*/
	uint32_t* pointerToX { &x };

	/*

	Assigns the memory address of y variable to the pointerToY pointer variable.

	*/
	uint32_t* pointerToY { &y };

	Console::WriteLine( u"Value of x: %u\n" u"Value of y : %u\n", x, y );

	/*

	Shows the value stored by x variable and the memory address where the value is stored.

	*/
	Console::WriteLine( u"Value of x : %u\n" u"Address of x : %#0x\n", x, &x );

	/*

	Shows the memory address assigned to the pointerToX pointer variable and the value stored in that memory address pointed by the pointerToX pointer variable.

	*/
	Console::WriteLine( u"Value of pointerToX: %#0x\n\n" u"Value pointed by pointerToX: %u\n", pointerToX, *pointerToX );

	/*

	Shows the memory address where y variable is stored. It is the same value assigned to the pointerToY pointer variable.

	*/
	Console::WriteLine( u"Address of y : %#0x\n" u"Value of pointerToY: %#0x\n", &y, pointerToY );

	/*

	Shows the value assigned to the y variable, and through the pointerToY pointer variable.

	*/
	Console::WriteLine( u"Value pointed by pointerToY: %u\n" u"Value of y: %u\n", *pointerToY, y );

	Console::Pause( {} );

#pragma endregion

#pragma region Pointer comparisons.	

	/*

	Tips for use.

	When the comparisons are made between non-dereferenced pointer variables, we are comparing the memory address assigned to the pointer variables.
	When the comparisons are made between dereferenced pointer variables, using the indirection * operator, we are comparing the values stored in the memory address pointed by the pointer variables.

	*/

	/*

	Verifies if the pointer variable pointer points to the same memory address of x variable.

	*/
	Console::WriteLine( u"pointerToX: %#0x\n&x: %#0x\nare equals?: %s\n\n", pointerToX, &x,
		( ( pointerToX == &x ) ? u"true." : u"false" ) );


	/*

	Verifies if the pointer variable points to the same memory address of y variable.

	*/
	//	Verifica se o ponteiro aponta para o mesmo endereço de memória da variável y.
	Console::WriteLine( u"pointerToY: %#0x\n&y: %#0x\nAre equals?: %s\n\n", pointerToY, &y,
		( ( &y == pointerToY ) ? u"true" : u"false" ) );


	/*

	Verifies if the values are equals.

	*/
	//	Verifica se os valores são iguais.
	Console::WriteLine( u"*pointerToX: %u\nx: %u\nAre equals?: %s\n\n", *pointerToX, x,
		( ( *pointerToX == x ) ? u"true" : u"false" ) );


	/*

	Verifies if the values are equals.

	*/
	Console::WriteLine( u"*pointerToY: %u\ny: %u\nAre equals?: %s\n\n", *pointerToY, y,
		( ( y == *pointerToY ) ? u"true" : u"false" ) );


	Console::Pause( {} );

#pragma endregion

#pragma region Ponteiro para ponteiro

	uint32_t someValue { 10ui32 };

#pragma region Assembly inline

	/*
		These are the assembly instructions to the line:
		uint32_t *pointerToUInt{ &someValue };

		This was compiled using debug configuration for x86 (32-bit) target processor.
	*/

	uint32_t* pointerToUInt { &someValue };

#ifdef _M_IX86

	__asm {

		lea eax, [ someValue ]
		mov dword ptr [ pointerToUInt ], eax

	};

#endif

	/*

		These are the assembly instructions to the line:
		uint32_t **pointerToPointer{  &pointerToUInt };

		lea eax,[pointerToUInt]
		dword ptr [pointerToPointer],eax

	*/

	uint32_t** pointerToPointer { &pointerToUInt };

#ifdef _M_IX86

	__asm {

		lea eax, [ pointerToUInt ]
		mov dword ptr [ pointerToPointer ], eax

	};

#endif

	/*
		E o que as instruções em linguagem de programação Assembly significam?

		A instrução LEA quer dizer: LOAD EFFECTIVE ADDRESS.
		LEA realiza o cálculo para obter o endereço do segundo operando (chamado SOURCE OPERAND), neste caso a variável
		someValue, então atribui este ENDEREÇO ao registrador de propósito geral EAX. de 32-bit. O SOURCE OPERAND é o endereço de memória.
		LEA pode trabalhar com endereços de 16-bit, 32-bit e 64-bit.

		A partir da execução da instrução LEA EAX,[someValue] o endereço
		de memória de someValue está no registrador de propósito geral EAX.

		Então a instrução seguinte MOV DWORD PTR [pointerToUInt],EAX copia o segundo operando (SOURCE OPERAND) para o primeiro operando.
		A partir deste momento o endereço de memória em EAX, que é o endereço de memória da variável someValue, está atribuído para pointerToUInt.

		A próxima instrução LEA EAX,[pointerToUInt] calcula o endereço de memória armazenado na variável pointerToUInt e copia para o registrador de propósito geral EAX.

		A próxima instrução MOV DWORD PTR [pointerToPointer],EAX copia o valor que está em EAX para pointerToPointer.

		E COMO ESTE VALOR É RECUPERADO?

		Este valor é recuperado através da movimentação dos endereços dos ponteiros e dos endereços armazenados nos ponteiros.

	*/

	uint32_t temp {};

#ifdef _M_X64

	pointerToUInt = &someValue;
	pointerToPointer = &pointerToUInt;
	temp = **pointerToPointer;

#elif _M_IX86

	__asm {

		mov eax, dword ptr [ pointerToPointer ]
		mov ecx, dword  ptr [ eax ]
		mov eax, dword ptr [ ecx ]
		mov dword ptr [ temp ], eax

	};

#endif

#pragma endregion

	Console::WriteLine( u"%u\n", *( *( pointerToPointer ) ) );
	/* OR */
	Console::WriteLine( u"%u\n", **( pointerToPointer ) );
	/* OR */
	Console::WriteLine( u"%u\n", **pointerToPointer );

	Console::Pause( {} );

	uint32_t* anotherPointer { &someValue };

	/*anotherPointer = anotherPointer;*/

	Console::WriteLine( u"anotherPointer : %#0x\n" u"&someValue : %#0x\n", anotherPointer, &someValue );

#pragma endregion

	Console::Pause( true );

	return;
};



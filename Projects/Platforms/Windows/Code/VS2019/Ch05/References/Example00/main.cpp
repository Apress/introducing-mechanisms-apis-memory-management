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

->	2018 (RTM, Update 3).
->	2019 (RTM, Update 1).

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

	Declarando e inicializando References (Referências).

DETAILS

	Assim como um ponteiro, uma referência armazena um endereço de memória.
	Diferentemente de um ponteiro, uma referência não pode ter seu valor alterado após ter sido inicializada.
	A referência não pode referir-se para outro objeto ou ter __nullptr (C++) / nullptr (C++) atribuído.

	Existem dois tipos de referências: Lvalue reference e Rvalue reference.

	Lvalue reference, que se referem a uma variável nomeada, ou seja, uma variável típica.
	Rvalue reference, que se referem a um OBJETO TEMPORÁRIO (TEMPORARY OBJECT).

	O operador & (reference operator) significa uma LVALUE REFERENCE (REFERÊNCIA LVALUE).
	O operador && significa uma RVALUE REFERENCE (REFERÊNCIA RVALUE).
	Dependendo de como é utilizado, o operador && pode significar uma UNIVERSAL REFERENCE (REFERÊNCIA UNIVERSAL),
	que pode ser ambas, uma lvalue reference ou uma rvalue reference, dependendo do contexto.

	Uma referência armazena o endereço em memória de um objeto, mas se comporta sintaticamente como o objeto.


	LINKS

	http://en.cppreference.com/w/cpp/language/reference


*/

#ifdef __INTEL_COMPILER
#pragma warning( disable: 1079; )
#endif

#pragma region Include Files

#include <cstdlib>
#include <cstdint>

#include <Utils.h>

#include "Person.h"
#include "_Data.h"
#include "ByReference.h"

#pragma endregion

#pragma region Namespaces

using namespace std;

#pragma endregion

extern "C++" void PassingByReference( _Data& _localData );
extern "C++" _Data GetARvalue();

/*

Na passagem de parâmetros, quando lida com tipos fundamentais como uint32_t, int32_t e outros, exceto quando
explicitamente indicado, é realizada uma cópia do valor original e a função lida com a cópia da informação original e não lida com a informação
original. Apesar de existir um custo de processamento na passagem de parâmetros quanto à quantidade de dados copiadas de
um local para outro, isto é compensado com recursos técnicos como instruções especializadas e técnicas de programação para
gerenciamento de recursos. Mas existem formações chamadas estruturas complexas. Por exemplo, qualquer item declarado com a palavra
reservada struct ou class é uma estrutura complexa e precisa de um gerenciamento especializado.
Não é viável em termos de processamento de dados e consumo de memória, utilizar passagem de parâmetro por valor quando se
trata de estruturas complexas. Mesmo porque, na maior parte do tempo, uma implementação lida com um subconjunto de informações.
Para resolver este problema, é utilizada a passagem de parâmetro por referência.

A invés de realizar uma cópia da estrutura complexa, é informado como argumento o endereço de memória de uma variável do tipo daquela
estrutura complexa. Na linguagem de programação C++ isto é realizado através de dois recursos:

- Pointer
- Reference

O ponteiro é o recurso de uso mais comum. O primeiro motivo é a eficiência. Em linguagem de programção assembly existe o tipo ponteiro e
instruções especializadas para lidar com o contexto, como verificar se é válido o endereço de memória armazenado naquele ponteiro e sequência
de instruções para proteger informações no contexto de execução quando algo assim ocorre.

A referência (reference) é utilizada com muito mais frequência em anos recentes.
A referência (reference) é utilizada fundamentalmente na passagem de parâmetros e retorno de funções.
Com muita frequência, profissionais utilizam a referência (reference) ao invés do tipo ponteiro (pointer type) citando como argumento "favorável" a simplificação da sintaxe.
A referência (reference) é utilizada com estruturas complexas como classes e certos recursos em OOP, como copy constructor.
Templates também utilizam recursos avançados disponíveis através de referência (reference).
No padrão C++ não é descrito se a referência (reference) deve utilizar armazenamento (storage), ou é apenas um recurso sintático. É fato que, ao final,
está lidando com ponteiros e as instruções em linguagem assembly geradas pelo compilador são as mesmas.
Em linguagem de programação assembly, não existem instruções específicas para  referência (reference) e não existe o "reference type".
O argumento "desfavorável" é que o uso exagerado de referências pode induzir o compilador a gerar instruções "extras", se introduzidas muitas
facilidades sintáticas na linguagem de programação C++.


*/


constexpr uint32_t Item_Not_Found { 0x0000 };








#pragma region Passing by value

void PassingByValue( _Data _localData ) {

	_localData.Id = 2000ui32;

	return;
};

#pragma endregion

#pragma region Passing by memory address using a pointer.

void PassingByPointer( _Data* const _pointerToData ) {

	if ( _pointerToData != nullptr ) _pointerToData->Id = 200ui32;

	/*

	Or using another option for pointer syntax.
	if ( _pointerToData !=nullptr ) ( *_pointerToData ).Id = 200ui32;

	*/

	return;
};

#pragma endregion

#pragma region Pass by Reference

void PassByReference( _Data& refData ) {

	refData.Id = 100ui32;

	/*_Data c {};

	refData = c;*/

	return;
};

#pragma endregion





#pragma region Pass by reference

void PassByRValueOrLValueReference( _Data& _localData ) {

	//_Data local { 20ui32 };

	//_localData = local;

	//_localData.Id = 300ui32;

	return;
}

#pragma endregion


/*
Passagem de parâmetro utilizando referência para ponteiro.
*/
void PassByRefToPointerOne( _Data* const& data ) {

	if ( data != nullptr ) 	data->Id = 300ui32;
	//if ( data != nullptr ) ( *data ).Id = 300ui32;

	return;
};


/*
Passagem de parâmetro utilizando referência.
A função retorna uma referência.
*/
_Data& ReturnReferenceOne( _Data& info ) {

	/*
	A mudança ocorre apenas localmente, o objeto original não é modificado.
	Depois que uma reference é inicializada, ela não pode apontar para qualquer outro objeto.
	*/
	//return ( info = _Data { 1000ui32 } );

	return info;
};


/*
Passagem de parâmetro utilizando ponteiro.
A função retorna uma referência.
*/
_Data& ReturnReferenceTwo( _Data* const local, uint32_t index ) {
	return *( local + index );
};

/*
Passagem de parâmetro utilizando referência para array.
A função retorna uma referência.
*/
_Data& ReturnReferenceThree( _Data ( &local ) [], uint32_t index ) {
	return local [ index ];
	//return *( local+ index  );
};


/*

	- Declara uma referência para array.
	- Declara
	- Declara uma referência para uma função

	A função informada como argumento deve ter os seguintes parâmetros:

	- Uma referência para array.

	Retorna o índice para a instância.

*/


/*
	Função que aplica um critério para localização do item e retorno da posição no array.
*/
int32_t _get_index_by_Id( _Data& _what, _Data ( &_where ) [], uint32_t _maxItems ) {

	int32_t index {};

	while ( ( index != _maxItems ) && ( _what.Id != _where [ index ].Id ) ) index++;

	return ( ( index == _maxItems ) && ( _what.Id != _where [ --index ].Id ) ? Item_Not_Found : index );

};


#pragma region Demonstra erro ao percorrer a memória.
//TODO: Demonstra erro ao percorrer a memória.
/*
O erro ocorre quando tenta identificar quantos itens existe em um array, sem utilizar um marcador de limite para os itens no array.
Qualquer sequência na memória é utilizada para preencher a estrutura de dados.
Exceto por funcionalidades que conseguem identificar sequências de bytes como não válidas para representação de um tipo, não é
possível identificar quando um array termina no cenário da função.
*/
/*
	- Função que aplica um critério para localização do item e retorno da posição no array.



uint32_t _find_index_by_Id( _Data& _what, _Data ( &_items )[] ) {

	//uint32_t index{ UINT32_MAX };
	//uint32_t ( *fntAddress )( _Data&, _Data ( & )[] )  = _find_index_by_Id;
	//std::function< uint32_t ( _Data&, _Data ( & )[] ) > fnt( _find_index_by_Id );

	_Data* ptr = _items;

	while ( true ) {

		++ptr;

		//if ( sizeof( *ptr ) == sizeof( _Data ) ) WriteMessageOnConsole( u"OK" ); else break;
	};


	return 0;

};

*/

#pragma endregion

int32_t GetIndexById( _Data& _what, _Data ( &_where ) [], uint32_t _maxItems,
	int32_t ( &criteria )( _Data&, _Data ( & ) [], uint32_t ) ) {

	return criteria( _what, _where, _maxItems );

};




void PassByReference() {

	//_Data Information { 1000ui32 };

	/*

	Declara uma referência para função.
	Características da função:

	- Retorna uma referência.
	- Têm dois parâmetros: uma referência para array e um inteiro não sinalizado.


	*/
	_Data& ( &refToFunction )( _Data ( & ) [], uint32_t ) { ReturnReferenceThree };

	//_Data* ptrToInfo { &Information };
	//_Data list [] { {}, { 1ui32 }, { 2ui32 }, { 3ui32 } };

	//PassByReference( Information );

	//PassingByPointer( &Information );

	//PassByRefToPointerOne( ptrToInfo );

	/*
	Os campos são inicializados com valores default.
	*/
	//_Data local {};

	//_cwprintf_s( L"information.Id: %u\n", Information.Id );

	//local = ( ReturnReferenceOne( Information ) = { _Data { 10ui32 } } );

	//_cwprintf_s( L"local.Id: %u\n", Information.Id );

	//local = {};

	::Pause();

	//local = ( ReturnReferenceTwo( list, 1ui32 ) = { 500ui32 } );

	//_cwprintf_s( L"local.id: %u\n", local.Id );

	//local = {};

	::Pause();

	/*

		Chama a função via referência para função.

	*/

	//_Data ( && refToArray )[] { {}, { 1ui32 }, { 2ui32 }, { 3ui32 } };

	//OR

	//local = refToFunction( refToArray, 2ui32 ) = { 500ui32 };

	int32_t ( &fnt )( _Data&, _Data ( & ) [], uint32_t ) { _get_index_by_Id };

	//GetIndexById( local = { 2ui32 }, refToArray, 3ui32, fnt );

	//_cwprintf_s( L"local.id: %u\n", local.Id );

	//OR
	//_cwprintf_s( L"local.id: %u\n", refToArray [ GetIndexById( { local = { 2ui32 } }, refToArray, 3ui32, fnt ) ].Id );

	//OR
	/*_cwprintf_s( L"local.id: %u\n",
		( ( _Data* ) ( refToArray + GetIndexById( { local = { 2ui32 } }, refToArray, 3ui32, fnt ) ) )->Id );*/

	return;
};


void CopyConstructor() {

	char16_t* newName { new char16_t [ 80ui32 ] { u"Roger Villela\n" } };
	Person* b = new Person( 47ui32, newName );
	Person* a { new Person() };
	Person* c { new Person() };

	*c = *b;
	*a = *c;

	SecureZeroMemory( newName, _msize( newName ) );
	delete [] newName;

	delete a;
	delete b;
	delete c;

	a = nullptr, b = nullptr, c = nullptr;
	newName = nullptr;


	return;
};

void MoveConstructor() {

	return;
};

void wmain() {

	_Data _mainData { 5000ui32 };


	/*

	Pass the memory address where the information of data structure is currently stored.

	*/
	::PassingByPointer( &_mainData );

	/*  Pass a copy of data structure and data values. */
	::PassingByValue( _mainData );

	/* Passing the address of source data structure instance. */
	::PassingByReference( _mainData );


	/*

	Working with rvalue as argument value.

	*/
	{

		_Data myData( ::GetARvalue() );


	};


	_Data&& _refByRef {};
	/* Pass the address of source data structure. */

	PassByRValueOrLValueReference( _refByRef ); // Performing as Right-value.
	PassByRValueOrLValueReference( _mainData ); // Performing as Left-value.


	::Pause( true );

	return;
};

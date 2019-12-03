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

	Declarando e inicializando References (Refer�ncias).

DETAILS

	Assim como um ponteiro, uma refer�ncia armazena um endere�o de mem�ria.
	Diferentemente de um ponteiro, uma refer�ncia n�o pode ter seu valor alterado ap�s ter sido inicializada.
	A refer�ncia n�o pode referir-se para outro objeto ou ter __nullptr (C++) / nullptr (C++) atribu�do.

	Existem dois tipos de refer�ncias: Lvalue reference e Rvalue reference.

	Lvalue reference, que se referem a uma vari�vel nomeada, ou seja, uma vari�vel t�pica.
	Rvalue reference, que se referem a um OBJETO TEMPOR�RIO (TEMPORARY OBJECT).

	O operador & (reference operator) significa uma LVALUE REFERENCE (REFER�NCIA LVALUE).
	O operador && significa uma RVALUE REFERENCE (REFER�NCIA RVALUE).
	Dependendo de como � utilizado, o operador && pode significar uma UNIVERSAL REFERENCE (REFER�NCIA UNIVERSAL),
	que pode ser ambas, uma lvalue reference ou uma rvalue reference, dependendo do contexto.

	Uma refer�ncia armazena o endere�o em mem�ria de um objeto, mas se comporta sintaticamente como o objeto.


	LINKS

	http://en.cppreference.com/w/cpp/language/reference


*/

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




static uint32_t PersonIdCounter{ UINT32_MAX };

#pragma region Person type

class Person {


#pragma region Constructors

	public:

		/*

		Aqui existe um memory leak em fun��o do comportamento padr�o  do Copy constructor default!!!

		*/
	Person( void ) : name( new u16string( u"(none)" ) ) {

		this->Id = ++::PersonIdCounter;

	#if _DEBUG 
		_cwprintf_s( L"Person's constructor...\nId: %u\n\n", this->getId() );
	#endif
		

		return;
	};

	Person( const char16_t* newName ) : Person() {

		if ( newName != nullptr ) {

			this->name->clear();
			this->name->assign( newName );

		};

		return;
	};



	/*

		Non-default copy constuctor.

	*/
	Person( const Person& ) {

	#if _DEBUG 
		_cwprintf_s( L"Person's copy constructor...\nId: %u\n\n", this->getId() );
	#endif

		return;
	};

	/*

		Non-default operator= assign.

	*/
	Person& operator=( const Person& ) {


		return *this;
	};


#pragma endregion

	public:

	const char16_t* getName( void ) const { return this->name->c_str(); };
	const uint32_t getId( void ) const { return this->Id; };

	public:

#pragma region Destructors

	~Person( void ) {


	#if _DEBUG 
		_cwprintf_s( L"Person's destructor...\nId: %u\n\n", this->getId() );
	#endif

		this->name->clear();
		delete this->name;
		this->name = {};

		::PersonIdCounter--;

		return;
	};


#pragma endregion

	private:

	uint32_t Id;
	u16string* name;

};

#pragma endregion

#pragma region 00 - References

void CreateDynamicArray( uint32_t numberOfElements ) {

	//{ 0ui32, 1ui32, 2ui32, 3ui32, 4ui32, 5ui32, 6ui32, 7ui32, 8ui32, 9ui32 };


	if ( numberOfElements > 0ui32 ) {

		// Aloca um bloco de mem�ria com N bytes de tamanho e inicializa com o valor zero.
		uint32_t* list{ new  uint32_t[ numberOfElements ]{} };
		uint32_t sizeInBytes{ _msize( list ) };

	};


	//for( uint32_t index{}; index != length; index++ ) {

	//	current = index;

	//};

	//SecureZeroMemory( ( ( PVOID ) list ), ( ( SIZE_T ) sizeInBytes ) ); 

	//delete [] list;

	//list = __nullptr;


	return;
};

#pragma endregion

#pragma region 01 - References

/*

==> Verifica se a faixa de valores � v�lida.
==> Sendo v�lida, atribui o pr�ximo valor para o �ndice.

*/
void ChangeIndexWhenInRange( uint32_t & newIndex, const uint32_t start, const uint32_t end ) {

	uint32_t temp{ ( newIndex + 2ui32 ) };
	bool result{ ( ( temp >= start ) && ( temp <= end ) ) };

	if ( result ) newIndex = temp;

	return;
};

#pragma endregion

#pragma region 02 - References

/*

==> Verifica se a faixa de valores � v�lida.
==> Sendo v�lida, atribui o pr�ximo valor para o �ndice.
==> Mant�m o estado entre as chamadas.
==> Utilizar em loops.

*/
void IndexInRange( uint32_t & newIndex, bool& dontStop, const uint32_t start, const uint32_t end ) {

	uint32_t temp{ ( newIndex + 2ui32 ) };
	dontStop = ( ( temp >= start ) && ( temp <= end ) );

	if ( dontStop ) newIndex = temp;

	return;
};

#pragma endregion

#pragma region Class / Struct type and Lvalue reference

	/*

		A utiliza��o da sintaxe de ponteiro nem sempre � vista como algo relevante por muitas pessoas.
		A utiliza��o da sintaxe de refer�ncia em muitos cen�rios, torna mais "simples" a manipula��o das estruturas de dados.
		Mas o prop�sito principal n�o � facilitar a vida de quem escreve os c�digo, � permitir a efici�ncia do c�digo assembly
		gerado e reduzir a probabilidade de erros cometidos comumente na codifica��o. Estes e outros recursos existem para
		proteger o ambiente da linguagem de programa��o, de quem tem dificuldade em lidar com programa��o mais avan�ada.

		Qual motivo em algo "extra" ocupando espa�o em mem�ria quando o tipo ponteiro j� � um recurso comprovadamente eficiente?

		Bom, nem tudo que voc� v�, existe.

		Na especifica��o da linguagem de programa��o C++, n�o � obrigat�rio que a refer�ncia exista de fato.
		A refer�ncia pode ser apenas e t�o somente um artif�cio sint�tico para reduzir a dificuldade de programa��o em certos cen�rios.
		Quando uma sequ�ncia de c�digo pode ser reconhecida como um padr�o abstrato ou gen�rico, essa sequ�ncia pode ser organizada
		em estruturas que podem ser aplicadas atrav�s da sintaxe. Ou seja, quem codifica apenas informa os argumentos, e a parte mais
		avan�ada e repetitiva � gerada automaticamente pelo compilador.
		Isto facilita a remo��o autom�tica de instru��es de c�digo que certamente geram erro. O compilador consegue compreender o contexto
		e n�o considera na gera��o do c�digo certas sequ�ncias.

	*/
void Example( void ) {


	// Declara e inicializa inst�ncias.

	Person p0{}; // Direct initialization utilizada.
	Person p1{}; // Direct initialization utilizada.

	// Declara e inicializa um ponteiro para a inst�ncia.
	Person* ptr{ &p0 };

	/*

		Declara uma lvalue reference para a inst�ncia.
		Uma vez inicializada, a refer�ncia n�o pode apontar outro objeto ou receber o valor nullptr (C++) / __nullptr (C++).

	*/
	Person& lvRef{ p0 };

	/*

		Copia todos os valores de p1 para p0.

		C++11 - Copy Assignment

		Em C++11 foram introduzidas duas opera��es de atribui��o: Copy Assignment e Move Assignment.

		Assignment: Quando o valor em uma inst�ncia A � copiado para a inst�ncia B.

		Person A{}, B{};

		A = B;

		Initialization: Ocorre quando um novo objeto � declarado, quando os argumentos s�o passados por valor para as fun��es ou
		quando os valores s�o retornados por valor pelas fun��es.

		Voc� pode definir a sem�ntica para "copy", conforme a implementa��o do class type.

		1- Utilizando o operador= (assignment).

		Juntamente com a refer�ncia para o class type como um retorno e o par�metro que passado atrav�s de uma const reference:

		const Person& operator=( const Person& object );

		Quando utiliza uma class / struct, existe um tipo de operador chamado Copy Assignment.
		Quando voc� n�o implementa o operador Copy Assignment, o compilador gera uma implementa��o default.
		Implementar o operador Copy Assignment n�o inibe a cria��o do Copy Constructor e vice-versa.
		No entanto, se voc� implementar um deles, � recomendado implementar o outro.

		2- Utilizando o Copy Constructor.

		Quando utiliza uma class / struct, existe um tipo de constructor chamado Copy Constructor.
		O tipo pode implementar um Copy Constructor, mas quando o tipo n�o implementa um Copy Constructor default, o compilador gera um Copy Constructor default.
		Implementar o operador Copy Constructor n�o inibe a cria��o do Copy Assignment e vice-versa.
		No entanto, se voc� implementar um deles, � recomendado implementar o outro.
		O Copy Constructor tem a seguinte assinatura:

		Person( const Person& object );

		Sempre que poss�vel declare como const para prevenir que o Copy Constructor troque a inst�ncia da qual est� realizando a c�pia.
		Isto tamb�m permite que a c�pia seja realizada a partir de class type's declarados com const.

		O Copy Constructor t�pico gerado pelo compilador, assim como aqueles em uma implementa��o customizada, tem apenas um par�metro
		declarado e sem o uso qualificador const:

		Person( Person& object );

		Quando o tipo do argumento informado ao Copy Constructor n�o � declarado com o qualificador const, a opera��o de Initialization atrav�s
		do processo de c�pia de um objeto const, gera um erro.
		Quando o tipo do argumento informado ao Copy Constructor � declarado com o qualificador const, a opera��o de Initialization atrav�s
		do processo de c�pia de um objeto n�o const pode ser realizada.


		Essa atribui��o est� copiando todos os dados dos campos em A para B.
		Neste caso em particular, est� utilizando o Copy Constructor default.
		Quando n�o utiliza uma class / struct, se fosse o tipo uint32_t, uma c�pia comum acontece, isto �, sem a utiliza��o de um Copy Constructor que
		� uma special member function (fun��o membro especial) dispon�vel em class / struct.



	*/
	_cwprintf_s( L"(BEFORE)Person's name: %s\nPerson's Id: %u\n\n", lvRef.getName(), lvRef.getId() );
	lvRef = p1;
	_cwprintf_s( L"(AFTER)Person's name: %s\nPerson's Id: %u\n\n", lvRef.getName(), lvRef.getId() );





	/*

		A ATRIBUI��O N�O � IGNORADA.

		Este � um caso espec�fico de utiliza��o de v�rios recursos em fun��o da atribui��o.
		Como � uma class / struct, essa sintaxe denota a chamada de um constructor, default ou non-default.
		O que indica qual � o constructor chamado, � a lista de par�metros.
		A inst�ncia � criada e o Copy constructor, default ou non-default, � utilizado para copiar os valores de uma inst�ncia para outra.
		Na especifica��o da linguagem de programa��o C++, est� indicado que uma atribui��o pode ter uma c

	*/

	/*

		Chama o constructor default.

	*/
	//lvRef = {}; 
	//lvRef = Person();

	/*

		Chama o constructor non-default que aceita uma string como argumento.


	*/
	//lvRef = {}; 
	//lvRef = Person( {} );
	//lvRef = { u"C++ Programming Language." }; 
	//lvRef = Person( u"C++ Programming Language." );

	/*

		Utilizando um ponteiro.

	*/

	uint32_t length{};
	const char16_t* local{ ptr->getName() };


	//StringCbLength( ( ( STRSAFE_PCNZWCH ) local ), STRSAFE_MAX_CCH, &length );
	//SecureZeroMemory( local, ( ( length ) + sizeof( char16_t ) ) );


	/*

		Utilizando uma refer�ncia.

	*/


	_cwprintf_s( L"Person's name: %s\nPerson's Id: %u\n\n", lvRef.getName(), lvRef.getId() );


	/*

	Desvincula o ponteiro.

	*/
	ptr = {};

	return;
};

#pragma endregion


#pragma region Example00
/*
Lvalue reference para uma vari�vel de um tipo fundamental.
*/
void Example00() {

	uint32_t index{ 10ui32 };
	uint32_t& refVarToIndex{ index };

	/*
	Pode utilizar da mesma maneira, tanto a vari�vel quanto a refer�ncia.
	*/

	index = 50ui32;

	_cwprintf_s( L"index value: %u\n", index );

	refVarToIndex = 100ui32;

	_cwprintf_s( L"refVarToIndex value: %u\n\n", refVarToIndex );

	/*
	Quando acessa um objeto atrav�s de um ponteiro, precisa utilizar uma sintaxe especializada.
	*/

	uint32_t* ptrToindex{ &index };

	*ptrToindex *= 200ui32;

	_cwprintf_s( L"ptrToIndex address of: %#0x\nptrToIndex value: %u\n\n", ptrToindex, *ptrToindex );

	Pause( );

	return;
};
#pragma endregion


#pragma region Example01
/*
Lvalue reference para uma struct.
*/
void Example01() {

	struct _Person {

		uint32_t Id{};

	} Person;

	_Person& refToPerson{ Person };

	Person.Id = 10ui32;

	_cwprintf_s( L"Person.Id: %u\n", Person.Id );

	refToPerson.Id *= 20ui32;

	_cwprintf_s( L"refToPerson.Id: %u\n\n", refToPerson.Id );

	_Person* ptrToPerson{ &Person };

	_cwprintf_s( L"ptrToPerson->Id: %u\n", ptrToPerson->Id );
	_cwprintf_s( L"ptrToPerson->Id: %u\n\n", ( *ptrToPerson ).Id );

	Pause();

	return;
};
#pragma endregion

#pragma region Example01
/*
Lvalue reference para uma classe.
*/
void Example02() {

	class _Person {

		public:
		uint32_t Id{};

	} Person;


	_Person& refToPerson{ Person };

	Person.Id = 10ui32;

	_cwprintf_s( L"Person.Id: %u\n", Person.Id );

	refToPerson.Id *= 20ui32;

	_cwprintf_s( L"refToPerson.Id: %u\n\n", refToPerson.Id );

	_Person* ptrToPerson{ &Person };

	_cwprintf_s( L"ptrToPerson->Id: %u\n", ptrToPerson->Id );
	_cwprintf_s( L"ptrToPerson->Id: %u\n\n", ( *ptrToPerson ).Id );

	Pause();

	return;
};
#pragma endregion

#pragma region
/*

	Lvalue reference para vari�veis do tipo ponteiro.

*/
void Example03() {

	/*

	Declara e inicializa uma vari�vel para um tipo num�rico.

	*/
	uint32_t index{};

	/*

	Declara e inicializa um vari�vel do tipo ponteiro.

	*/
	uint32_t* ptrToIndex{ &index };

	/*

	Declara uma vari�vel do tipo Lvalue reference.
	Mas a refer�ncia ainda n�o foi inicializada.

	*/
	uint32_t*& refToPointer{ ptrToIndex };


	/*

	Inicializa Lvalue reference to pointer.
	O prop�sito de um ponteiro � armazenar um endere�o de mem�ria.
	O proposito de uma Lvalue reference to pointer � o mesmo.
	Este tipo de refer�ncia s� faz sentido quando utilizada com fun��es na passagem de par�metros.

	*/
	refToPointer = &index;

	index = 10ui32;
	*ptrToIndex = 20ui32;
	*refToPointer = 30;

	return;
};
#pragma endregion

extern "C++" void PassByReference( void );

void FillBlock( uint32_t* const block, uint32_t count ) {

	if ( block != nullptr ) {

		uint32_t* const localBlock{ block };

		// Change item-by-item.
		for ( uint32_t index{}; index != count; index++ ) {
			*( localBlock + index ) = ( index << 2ui32 );
			_cwprintf_s( L"Value: %u\n", *( localBlock + index ) );
		};

	};

	return;
};


//void * rvj_memmove(void * dst, void * src, size_t count)
//{
//		void * ret = dst;
//
//		if (dst <= src || dst >= (src + count)) {
//				/*
//				 * Non-Overlapping Buffers
//				 * copy from lower addresses to higher addresses
//				 */
//				while (count--)
//						*dst++ = *src++;
//				}
//		else {
//				/*
//				 * Overlapping Buffers
//				 * copy from higher addresses to lower addresses
//				 */
//				dst += count - 1;
//				src += count - 1;
//
//				while (count--)
//						*dst-- = *src--;
//				}
//
//		return(ret);
//}


void wmain() {

#pragma region Example 2

	HANDLE hProcessHeap{ GetProcessHeap() };
	uint32_t* source{ ( uint32_t* ) HeapAlloc( hProcessHeap, HEAP_ZERO_MEMORY, 400ui32 ) };
	uint32_t heapSize{ HeapSize( hProcessHeap, {}, source ) };

	source = ( uint32_t* ) SecureZeroMemory( source, heapSize );

	/* Exibe conte�do do bloco de mem�ria */


	/*

	- Primeira pergunta: o destino � menor ou igual � posi��o ATUAL de source?
	SIM: Os endere�os N�O v�o se sobrepor.

	CEN�RIO

	Source == (CURRENT POSITION).
	Destination <= Source;

	Percorre Source em dire��o aos endere�os maiores (mais altos) e copia o n�mero de bytes indicados para Destination.

	- Segunda pergunta: o destino � menor do que a �ltima posi��o de source?
	SIM: Os endere�os v�o se sobrepor.

	Source == (CURRENT POSITION).
	Destination < (Source + N�mero de bytes que devem ser copiados).

	dst < ( src + count )

	*/

	/* Blocos de mem�ria se sobrep�em. */
	uint32_t* destination{ ( source + 10ui32 ) };

	MoveMemory( destination, source, 5ui32 );

	if FAILED( HeapFree( hProcessHeap, {}, source ) ) _cwprintf_s( L"%s", L"" ); //Console::LastError();

	source = {}; heapSize = {}; hProcessHeap = {};

#pragma endregion


/*
	Example00();
	Example01();
	Example02();

*/
	PassByReference();
	//Example(), Pause( {} );

/*
	DICAS DE USO


*/

	uint32_t index{ 10ui32 };

#pragma region Pointer and Pointer to pointer

	uint32_t* ptrToVarIndex{ &index };
	uint32_t** ptrToPointer{ &ptrToVarIndex };

#pragma endregion

#pragma region Reference and Reference to pointer

	uint32_t& refToVarIndex{ index };
	uint32_t*& refToPointer{ *ptrToPointer };

#pragma endregion

#pragma region Reference for the static array

	uint32_t numbers[]{ {}, 1ui32, 2ui32, 3ui32, 4ui32, 5ui32, 6ui32, 7ui32, 8ui32, 9ui32 };
	uint32_t( &refToArray )[ _countof( numbers ) ]{ numbers };

	index = 5ui32;

	refToArray[ index ] *= 100ui32;
	*( refToArray + index ) *= 200ui32;

#pragma endregion


#pragma region Reference to function

/*

*/
	void( &refToFunction )( uint32_t * const, uint32_t ) { FillBlock };

	/*
	*/
	const uint32_t Length{ 100ui32 };
	uint32_t blockSizeInBytes{};

	uint32_t* block{ new uint32_t[ Length ]{} };
	blockSizeInBytes = _msize( block );
	refToFunction( block, Length );

	delete[]( block = ( uint32_t* ) SecureZeroMemory( block, blockSizeInBytes ) );

	block = {};

#pragma endregion

	uint32_t start{};
	uint32_t end{ 10ui32 };
	bool more{ true };

	//ChangeIndexWhenInRange( index, start, end );
	//Console::Pause ( {} );


		/*
		do {


			IndexInRange( index, more, start, end );
			WriteMessageOnConsole( u"New index: %u\n", index );

		} while ( more );
		*/

#pragma region Using the pointer

	* ptrToVarIndex = 100ui32;
	**ptrToPointer = 200ui32;

#pragma endregion

#pragma region Using the reference

	refToVarIndex = 300ui32;
	*refToPointer = 400ui32;

#pragma endregion

	_cwprintf_s( L"index: %u\npointer to index: %u\npointer to pointer: %u\nreference to index: %u\nreference to pointer: %u\n",
		index, *ptrToVarIndex, **ptrToPointer, refToVarIndex, *refToPointer );


	Pause( true );

	return;
};



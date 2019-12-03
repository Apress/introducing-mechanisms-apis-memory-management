#pragma once

#pragma region Include Files

#include <cstdlib>
#include<cstdio>
#include <cwchar>
#include <cstdint>
#include <cstring>


#include <Utils.h>

#pragma endregion

#pragma region Type definitions
typedef char16_t BaseType;
#pragma endregion


#pragma region Copy Constructor sample

class Person {

private:

	const BaseType* NameDefaultValue { u"(none)\n" };
	const uint32_t DefaultBufferSize { 0x00A0 }; /* In characters. */
	uint32_t _age {};
	BaseType* _name {};
	uint32_t _lengthInBytes {};
	uint32_t _lengthInCharacters {};

public:

	/*

	- Default Constructor.
	- Parameterless.
	- Overloadable.

	*/
	Person() {

#ifdef _DEBUG
		_cwprintf_s( reinterpret_cast< const wchar_t* const >( u"\n\nIn Person default constructor. \n\n" ) );
#endif

		/*
		Calculate the size of text value "(none)\n", in characters.
		*/
		this->_lengthInCharacters = wcsnlen_s( reinterpret_cast< const wchar_t* >( Person::NameDefaultValue ), (size_t) Person::DefaultBufferSize );
		this->_lengthInBytes = ( this->_lengthInCharacters * sizeof( BaseType ) );
		this->_name = new BaseType [ this->_lengthInBytes ] {};
		SecureZeroMemory( reinterpret_cast< PVOID >(this->_name), (SIZE_T)this->_lengthInBytes );

		wmemcpy_s( reinterpret_cast< wchar_t* >( this->_name ), (rsize_t) this->_lengthInBytes, reinterpret_cast< const wchar_t* >( Person::NameDefaultValue ), (rsize_t) wcsnlen_s( reinterpret_cast< const wchar_t* >(
			Person::NameDefaultValue ), (size_t) this->_lengthInBytes ) );



		return;
	};

	/*

	- Non-default constructor.
	- Overloaded implementation.

	*/
	Person( uint32_t age, BaseType* const  name ) : Person::Person() {

		uint32_t __newBufferSize {};
		/*
		Calling default constructor.
		*/

#ifdef _DEBUG
		_cwprintf_s( reinterpret_cast< const wchar_t* const >( u"In Person constructor. \n\n" ) );
#endif

		if ( name != nullptr ) {

			__newBufferSize = wcsnlen_s( reinterpret_cast< const wchar_t* > ( name ), Person::DefaultBufferSize );

			/* Accept zero size memory block. */
			if ( ( __newBufferSize < Person::DefaultBufferSize ) && ( __newBufferSize >= 0x0000ui32 ) && ( __newBufferSize != this->_lengthInCharacters ) ) {

				/* Remove old information. */

				SecureZeroMemory( this->_name, this->_lengthInBytes );
				delete [] this->_name;
				this->_name = nullptr;

				this->_lengthInCharacters = __newBufferSize;
				this->_lengthInBytes = ( this->_lengthInCharacters * sizeof( BaseType ) );
				this->_name = new BaseType [ this->_lengthInBytes ] {};
				SecureZeroMemory( this->_name, this->_lengthInBytes );

				wmemcpy_s( reinterpret_cast< wchar_t* >( this->_name ), this->_lengthInBytes, reinterpret_cast< const wchar_t* >( name ), this->_lengthInBytes );

			};

		};
	};

	~Person() {
#ifdef _DEBUG
		_cwprintf_s( reinterpret_cast< const wchar_t* const >( u"In ~Person destructor\n\n" ) );
#endif

		if ( this->_name != nullptr ) {
#ifdef _DEBUG
			_cwprintf_s( reinterpret_cast< const wchar_t* const >( u" Deleting resources.\n\n" ) );
#endif
			SecureZeroMemory( this->_name, this->_lengthInBytes );
			delete [] this->_name, this->_name = nullptr;
		};


	};

	// Copy constructor.
	Person( const Person& other )
		: _age ( other._age ) {

#ifdef _DEBUG
		_cwprintf_s( reinterpret_cast< const wchar_t* const >( u"In Person copy constructor. Copying resources." ) );
#endif

		this->__CopyForNewInstance( const_cast< Person* >( &other ), this );

	};

	// Copy assignment operator.
	Person& operator=( const Person& other ) {

#ifdef _DEBUG
		_cwprintf_s( reinterpret_cast< const wchar_t* const >( u"In operator=. Copying resources. " ) );
#endif

		/* Do not copy between the same instances. */
		if ( this != &other ) this->__CopyForNewInstance( const_cast< Person* >( &other ), this );

		return *this;

	};

	void __CopyForNewInstance( Person* const  __other, Person* const __this ) {

		uint32_t __newSize {};

		if ( __other->_name != nullptr ) {

			__newSize = wcsnlen_s( reinterpret_cast< wchar_t* >( __other->_name ), Person::DefaultBufferSize );

			if ( ( __newSize < Person::DefaultBufferSize ) && ( __newSize >= 0x0000ui32 ) ) {

				/* Remove old content. */
				SecureZeroMemory( __this->_name, __this->_lengthInBytes );
				delete [] __this->_name;
				__this->_name = nullptr;

				__this->_lengthInCharacters = __newSize;
				__this->_lengthInBytes = ( __this->_lengthInCharacters * sizeof( BaseType ) );
				__this->_name = new BaseType [ __this->_lengthInBytes ];
				SecureZeroMemory( __this->_name, __this->_lengthInBytes );

				wmemcpy_s( reinterpret_cast< wchar_t* >( __this->_name ), __this->_lengthInBytes, reinterpret_cast< wchar_t* >( __other->_name ), __this->_lengthInBytes );
			};

		};

		return;

	};

};

#pragma endregion


#pragma region Include Files

#include <cstdlib>
#include<cstdio>
#include <cwchar>
#include <cstdint>
#include <cstring>



#include <Utils.h>

#pragma endregion

#pragma region Move Constructor sample

class Person {

private:

	uint32_t _age {};
	char16_t* _name {};

public:

	Person( uint32_t age, char16_t* name ) : _age( age ), _name( name ) {
		_cwprintf_s( reinterpret_cast< const wchar_t* const >( u"In Person constructor = " ) );

	};

	~Person() {
		_cwprintf_s( reinterpret_cast< const wchar_t* const >( u"In ~Person destructor  " ) );

		if ( this->_name != nullptr ) {
			_cwprintf_s( reinterpret_cast< const wchar_t* const >( u" Deleting resources.\n\n" ) );
			delete [] this->_name, this->_name = nullptr;
		}


	}

	// Copy constructor.
	Person( const Person& other )
		: _age ( other._age )
		, _name( new char16_t [ _msize( other._name ) + 1ui32 ] ) {
		_cwprintf_s( reinterpret_cast< const wchar_t* const >( u"In Person copy constructor. Copying resources." ) );


		wmemmove( reinterpret_cast< wchar_t* >( other._name ), reinterpret_cast< wchar_t* >( this->_name ), _msize( other._name ) );

	};

	// Copy assignment operator.
	Person& operator=( const Person& other ) {
		_cwprintf_s( reinterpret_cast< const wchar_t* const >( u"In operator=. Copying resources. " ) );

		if ( this != &other ) {

			wmemset( reinterpret_cast< wchar_t* >( other._name ), L'0', _msize( other._name ) + 1ui32 );

		};
		return *this;
	};


};

#pragma endregion
#pragma once

#pragma region Include Files

#include <cstdint>

#pragma endregion

struct _Data {

public:
	uint32_t Id {};

public:

	_Data() { return; };
	_Data( uint32_t __newId ) : _Data() {
		Id = __newId;
		return;
	};

	_Data( const _Data& __other ) noexcept : _Data( __other.Id ) {

		_cwprintf_s( L"Copying..." );

		return;
	};

	_Data( _Data&& __other ) noexcept : _Data( __other.Id ) {

		_cwprintf_s( L"Moving..." );

		return;
	};

};
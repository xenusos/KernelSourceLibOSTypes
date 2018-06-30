/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson
*/  
#include <xenus_lazy.h>
#include <libtypes.hpp>

#define CHECK_SIGNED_n(n)																									    \
                                                                                                                                  \
if (x > INT ## n ## _MAX)																										    \
{																																    \
	printf("Variable Type Reference Int Overflow; %lli exceeds the limit of %lli for type int"  #n  "_t \n", x, (int64_t) INT ## n ##_MAX);	\
}																																    \
																																    \
if (x < INT ## n ## _MIN)																										    \
{																																    \
	printf("Variable Type Reference Int Underflow; %lli exceeds the limit of %lli for type int"  #n  "_t \n", x, (int64_t)INT ## n ##_MIN);	\
}

#define CHECK_UNSIGNED_n(n)																									    \
                                                                                                                                  \
if (x > UINT ## n ## _MAX)																										    \
{																																    \
	printf("Variable Type Reference Int Overflow; %lli exceeds the limit of %llu for type uint"  #n  "_t \n", x, (uint64_t) UINT ## n ##_MAX);	\
}

#define DEFINE_GETTERS_AND_SETTERS_FOR_n(n)							 \
															 		   \
void __var_type_set_int ## n ## _checked(void * ptr, int_t x)			 \
{															 			 \
	CHECK_SIGNED_n(n);										 			 \
	*(int ## n ## _t*)(ptr) = (int ## n ## _t)x;					     \
}															 			 \
															 			 \
void __var_type_set_uint ## n ## _checked(void * ptr, uint_t x)		 	 \
{																		 \
	CHECK_UNSIGNED_n(n);												 \
	*(uint ## n ## _t*)(ptr) = (uint ## n ## _t)x;				    	 \
}																		 \
																		 \
void __var_type_set_int  ## n(void * ptr, int_t x)						 \
{																		 \
	*(int ## n ## _t*)(ptr) = (int ## n ## _t)x;					     \
}																		 \
																		 \
void __var_type_set_uint ## n(void * ptr, uint_t x)						 \
{																		 \
	*(uint  ## n ## _t*)(ptr) = (uint ## n ## _t)x;				    	 \
}																		 \
																		 \
int_t __var_type_get_int ## n(void * ptr)								 \
{																		 \
	return *(int ## n ## _t*)(ptr);										 \
}																		 \
																		 \
uint_t __var_type_get_uint ## n(void * ptr)								 \
{																		 \
	return *(uint ## n ## _t*)(ptr);									 \
}

DEFINE_GETTERS_AND_SETTERS_FOR_n(8);
DEFINE_GETTERS_AND_SETTERS_FOR_n(16);
DEFINE_GETTERS_AND_SETTERS_FOR_n(32);
DEFINE_GETTERS_AND_SETTERS_FOR_n(64);

_set_int_p fptrtbl_signed_set_checked[8 + 1] = {
	nullptr,                       // 0
	__var_type_set_int8_checked,   // 1
	__var_type_set_int16_checked,  // 2
	nullptr,                       // 3
	__var_type_set_int32_checked,  // 4
	nullptr,                       // 5
	nullptr,                       // 6
	nullptr,                       // 7
	__var_type_set_int64_checked,  // 8
};

_set_uint_p fptrtbl_unsigned_set_checked[8 + 1] = {
	nullptr,                       // 0
	__var_type_set_uint8_checked,  // 1
	__var_type_set_uint16_checked, // 2
	nullptr,                       // 3
	__var_type_set_uint32_checked, // 4
	nullptr,                       // 5
	nullptr,                       // 6
	nullptr,                       // 7
	__var_type_set_uint64_checked, // 8
};

_set_int_p fptrtbl_signed_set[8 + 1] = {
	nullptr,                       // 0
	__var_type_set_int8,           // 1
	__var_type_set_int16,          // 2
	nullptr,                       // 3
	__var_type_set_int32,          // 4
	nullptr,                       // 5
	nullptr,                       // 6
	nullptr,                       // 7
	__var_type_set_int64,          // 8
};

_set_uint_p fptrtbl_unsigned_set[8 + 1] = {
	nullptr,                       // 0
	__var_type_set_uint8,          // 1
	__var_type_set_uint16,         // 2
	nullptr,                       // 3
	__var_type_set_uint32,         // 4
	nullptr,                       // 5
	nullptr,                       // 6
	nullptr,                       // 7
	__var_type_set_uint64,         // 8
};

_get_int_p fptrtbl_signed_get[8 + 1] = {
	nullptr,                       // 0
	__var_type_get_int8,           // 1
	__var_type_get_int16,          // 2
	nullptr,                       // 3
	__var_type_get_int32,          // 4
	nullptr,                       // 5
	nullptr,                       // 6
	nullptr,                       // 7
	__var_type_get_int64,          // 8
};

_get_uint_p fptrtbl_unsigned_get[8 + 1] = {
	nullptr,                       // 0
	__var_type_get_uint8,          // 1
	__var_type_get_uint16,         // 2
	nullptr,                       // 3
	__var_type_get_uint32,         // 4
	nullptr,                       // 5
	nullptr,                       // 6
	nullptr,                       // 7
	__var_type_get_uint64,         // 8
};

VarTypeRef::VarTypeRef(void * ptr, size_t length)
{
	_data = ptr;
	_length = length;
#ifdef DYNAMIC_TYPES_CHECK_LENGTH
	_len_chk = true;
#else 
	_len_chk = false;
#endif
	Update();
}

VarTypeRef::VarTypeRef(void * ptr, size_t length, bool len_chk)
{
	_data = ptr;
	_length = length;
	_len_chk = len_chk;
	Update();
}

void VarTypeRef::Update()
{
	if (_length > 8) return;
	if (_len_chk)
	{
		_functions.set_int	= fptrtbl_signed_set_checked	[_length];
		_functions.set_uint	= fptrtbl_unsigned_set_checked	[_length];
		_functions.get_int	= fptrtbl_signed_get			[_length];
		_functions.get_uint	= fptrtbl_unsigned_get			[_length];
	}
	else
	{
		_functions.set_int	= fptrtbl_signed_set	[_length];
		_functions.set_uint	= fptrtbl_unsigned_set	[_length];
		_functions.get_int	= fptrtbl_signed_get	[_length];
		_functions.get_uint	= fptrtbl_unsigned_get	[_length];
	}
}

void VarTypeRef::SetUInt(uint_t value)
{
	if (_functions.set_uint == nullptr)
	{
		printf("Setting a non-int value failed! \n");
		return;
	}
	_functions.set_uint(_data, value);
}

uint_t VarTypeRef::GetUInt()
{
	if (_functions.get_uint == nullptr)
	{
		printf("Getting a non-int value failed! \n");
		return -1;
	}
	return _functions.get_uint(_data);
}

void VarTypeRef::SetInt(int_t value)
{
	if (_functions.set_int == nullptr)
	{
		printf("Setting a non-int value failed! \n");
		return;
	}
	_functions.set_int(_data, value);
}

int_t VarTypeRef::GetInt()
{
	if (_functions.get_int == nullptr)
	{
		printf("Getting a non-int value failed! \n");
		return -1;
	}
	return _functions.get_int(_data);
}

void VarTypeRef::Set(uint_t value)
{
	SetUInt(value);
}

void VarTypeRef::Set(int_t value)
{
	SetInt(value);
}

void * VarTypeRef::AsPtr()
{
	return _data;
}

void VarTypeRef::Copy(void * src)
{
	memcpy(_data, src, _length);
}

void VarTypeRef::Copy(VarTypeRef & src)
{
	memcpy(_data, src.AsPtr(), _length);
}
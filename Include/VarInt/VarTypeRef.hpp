/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson
*/  
#pragma once

#define PS_TO_VARTYPE(data, name, member)  VarTypeRef(name ## _get_ ## member(data), name ## _sizeof_ ## member())

typedef uint_t(*_get_uint_p)(void * ptr);
typedef int_t(*_get_int_p)(void * ptr);
typedef void(*_set_uint_p)(void * ptr, uint_t val);
typedef void(*_set_int_p)(void * ptr, int_t val);

class VarTypeRef
{
private:
	void * _data;
	bool _len_chk;
	size_t _length;

	struct
	{
		_set_uint_p set_uint;
		_get_uint_p get_uint;
		_set_int_p set_int;
		_get_int_p get_int;
	} _functions;

public:
	VarTypeRef(void * ptr, size_t length);
	VarTypeRef(void * ptr, size_t length, bool len_chk);

	void SetUInt(uint_t value);
	uint_t GetUInt();

	void SetInt(int_t value);
	int_t GetInt();

	void Set(uint_t value);
	void Set(int_t value);

	void * AsPtr();

	void Copy(void * src);
	void Copy(VarTypeRef &);

protected:
	void Update();
};
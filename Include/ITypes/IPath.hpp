/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson (See License.txt)
*/  
#pragma once
#include "Macros\0_init.macros"

class IPath
{
private:
	path_k _data;

public:
	IPath();
	IPath(path_k path);

#include "Macros/VariablePath.macros"
#include "Macros/TypedPath.macros"

	vfsmount_k	GetMount();
	dentry_k	GetDEntry();

	bool operator==(const IPath& other) const;
};

#undef DEFINE_MEMBER
#undef DEFINE_TYPED_MEMBER
#undef DEFINE_MEMBER_2
#undef DEFINE_TYPED_MEMBER_2
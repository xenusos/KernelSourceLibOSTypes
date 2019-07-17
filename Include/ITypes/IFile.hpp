/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson (See License.txt)
*/  
#pragma once
#include "Macros\0_init.macros"

class IFile
{
private:
	file_k _data;

public:

	IFile();
	IFile(file_k statfs);

#include "Macros\VariableFile.macros"
#include "Macros\TypedFile.macros"

	//TODO: f_lock

	llist_node *  		GetFULlList();
	path_k				GetPath();
	inode_k  			GetINode();
	file_operations_k   GetFileOperations();

	fown_struct_k		GetOwner();
	file_ra_state_k		GetRA();

	void *				GetSec();
	void *				GetPrivateBuffer();

	bool operator==(const IFile& other) const;
};

#undef DEFINE_MEMBER
#undef DEFINE_TYPED_MEMBER
#undef DEFINE_MEMBER_2
#undef DEFINE_TYPED_MEMBER_2
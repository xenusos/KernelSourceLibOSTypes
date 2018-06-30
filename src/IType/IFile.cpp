/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFile.hpp>

#define CFG_DEFINE_PS_TYPE_NAME file
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFile

#include "0_init.macros"

#include <ITypes\Macros\VariableFile.macros>
#include <ITypes\Macros\TypedFile.macros>

IFile::IFile()
{

}

IFile::IFile(file_k statfs)
{
	_data = statfs;
}

llist_node * IFile::GetFULlList()
{
	return (llist_node *) file_get_f_u_fu_llist(_data);
}

path_k IFile::GetPath()
{
	return (path_k) file_get_f_path(_data);
}

inode_k IFile::GetINode()
{
	return (inode_k) file_get_f_inode_uint64(_data);
}

file_operations_k IFile::GetFileOperations()
{
	return (file_operations_k) file_get_f_op_uint64(_data);
}

fown_struct_k IFile::GetOwner()
{
	return (fown_struct_k) file_get_f_owner(_data);
}

file_ra_state_k IFile::GetRA()
{
	return (file_ra_state_k) file_get_f_ra(_data);
}

void * IFile::GetSec()
{
	return file_get_f_security(_data);
}

void * IFile::GetPrivateBuffer()
{
	return file_get_private_data(_data);
}

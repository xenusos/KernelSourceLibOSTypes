/*                                               
    Purpose:                                     
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPath.hpp>

#define CFG_DEFINE_PS_TYPE_NAME path
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPath

#include "0_init.macros"

IPath::IPath()
{

}

IPath::IPath(path_k path)
{
	_data = path;
}

vfsmount_k IPath::GetMount()
{
	return (vfsmount_k) path_get_mnt_uint64(_data);
}

dentry_k IPath::GetDEntry()
{
	return (dentry_k)path_get_dentry_uint64(_data);
}

bool IPath::operator==(const IPath& other) const
{
	return this->_data == other._data;
}
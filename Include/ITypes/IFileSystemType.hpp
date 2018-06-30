/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFileSystemType
{
private: 
    file_system_type_k _data;

public: 
    IFileSystemType();
    IFileSystemType(file_system_type_k buffer);

    #include "Macros/VariableFileSystemType.macros"
    #include "Macros/TypedFileSystemType.macros"


    file_system_type_k InternalBuffer() { return _data; }
    bool operator==(const IFileSystemType& other) const;
};

#include "Macros/0_cleanup.macros"

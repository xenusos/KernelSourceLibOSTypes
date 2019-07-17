/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFileOperations
{
private: 
    file_operations_k _data;

public: 
    IFileOperations();
    IFileOperations(file_operations_k buffer);

    #include "Macros/VariableFileOperations.macros"
    #include "Macros/TypedFileOperations.macros"


    file_operations_k InternalBuffer() { return _data; }
    bool operator==(const IFileOperations& other) const;
};

#include "Macros/0_cleanup.macros"

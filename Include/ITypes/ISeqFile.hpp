/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISeqFile
{
private: 
    seq_file_k _data;

public: 
    ISeqFile();
    ISeqFile(seq_file_k buffer);

    #include "Macros/VariableSeqFile.macros"
    #include "Macros/TypedSeqFile.macros"


    seq_file_k InternalBuffer() { return _data; }
    bool operator==(const ISeqFile& other) const;
};

#include "Macros/0_cleanup.macros"

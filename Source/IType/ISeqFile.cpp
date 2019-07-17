/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISeqFile.hpp>

#define CFG_DEFINE_PS_TYPE_NAME seq_file
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISeqFile

#include "0_init.macros"

#include <ITypes/Macros/VariableSeqFile.macros>
#include <ITypes/Macros/TypedSeqFile.macros>

ISeqFile::ISeqFile() {}

ISeqFile::ISeqFile(seq_file_k buffer)
{
     _data = buffer;
}


bool ISeqFile::operator==(const ISeqFile& other) const
{
    return this->_data == other._data;
}

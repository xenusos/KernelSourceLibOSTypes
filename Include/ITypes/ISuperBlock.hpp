/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISuperBlock
{
private: 
    super_block_k _data;

public: 
    ISuperBlock();
    ISuperBlock(super_block_k buffer);

    #include "Macros/VariableSuperBlock.macros"
    #include "Macros/TypedSuperBlock.macros"


    super_block_k InternalBuffer() { return _data; }
    bool operator==(const ISuperBlock& other) const;
};

#include "Macros/0_cleanup.macros"

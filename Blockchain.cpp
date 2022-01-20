#include "Blockchain.h"

Blockchain::Blockchain(){
    _chain.emplace_back(Block(0, "Genesis Block"));
    _difficulty = 6;
}

void Blockchain::add_block(Block new_block){
    new_block.prev_hash = _get_last_block().get_hash();
    new_block.mine_block(_difficulty);
    _chain.push_back(new_block);
}

Block Blockchain::_get_last_block() const {
    return _chain.back();
}
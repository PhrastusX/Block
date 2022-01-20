#ifndef BLOCKCHAIN_HEADER
#define BLOCKCHAIN_HEADER

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain{

public:
    Blockchain();

    void add_block(Block new_block);

private:

    uint32_t _difficulty;
    vector<Block> _chain;

    Block _get_last_block() const;

};
#endif
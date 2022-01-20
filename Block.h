#ifndef BLOCK_HEADER
#define BLOCK_HEADER

#include <cstdint>
#include <iostream>

using namespace std;

class Block{

public:
    string prev_hash;

    Block(uint32_t index_in, const string &data_in);

    string get_hash();

    void mine_block(uint32_t diff);

private:

    uint32_t _index;
    int64_t _nonce;
    string _data;
    string _hash;
    time_t _time;

    string _calculate_hash() const;
    
};

#endif


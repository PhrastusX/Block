#include "Block.h"
#include "sha256.h"
#include <sstream>

Block::Block(uint32_t index_in, const string &data_in) : _index(index_in), _data(data_in){
    _nonce = -1;
    _time = time(nullptr);
}

string Block::get_hash(){
    return _hash;
}

void Block::mine_block(uint32_t diff){

    char cstr[diff +1];

    for (uint32_t i = 0; i < diff; ++i){
        cstr[i] = '0';

    }

    cstr[diff] = '\0';

    string str(cstr);

    do {
        _nonce++;
        _hash = _calculate_hash();

    } while(_hash.substr(0, diff) != str);

    cout << "Block mined: " << _hash  << endl;
}

inline string Block::_calculate_hash() const {
    stringstream ss;

    ss << _index << _time << _data << _nonce << prev_hash;

    return sha256(ss.str());

}
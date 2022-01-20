#include "Blockchain.h"

int main() {

    Blockchain bChain = Blockchain();

    cout << "Mining block 1..." << endl;
    bChain.add_block(Block(1, "Block 1 Data"));
}
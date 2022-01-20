#ifndef MERKLE
#define MERKLE

#include <string>


class Merkle{
private:

    struct node {
        unsigned int index;
        string value;
        node *lnode;
        node *rnode;

    }

};
#endif
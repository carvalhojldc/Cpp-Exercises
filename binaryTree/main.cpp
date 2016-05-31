#include <iostream>

#include "Tree.h"

using namespace std;

int main() {

    Tree tree;

    tree.insert(5);
    tree.insert(1);
    tree.insert(7);
    tree.insert(2);
    tree.insert(3);
    tree.insert(15);
    tree.insert(4);
    tree.insert(90);
    tree.insert(21);

    tree.showTree();

    return 0;
}

#ifndef _TREE_H_
#define _TREE_H_

#include <iostream>

struct Node {
    int data;
    Node *left;
    Node *right;
};

class Tree {

private:
    Node *top;

    Node* defineNode(int data);
    void insertAux(Node *node, int data);
    void show(Node *node);

public:
    Tree();
    void insert(int data);
    void showTree();
};

#endif // _TREE_H_

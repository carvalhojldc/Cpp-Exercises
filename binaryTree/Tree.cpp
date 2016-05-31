#include "Tree.h"

Tree::Tree() {
    top=(Node *)nullptr;
}

Node* Tree::defineNode(int data) {
     Node *temp = new Node;
     temp->data = data;
     return temp;
}

void Tree::insertAux(Node *node, int data) {
    if(data < node->data) {
        if(node->left == nullptr) {
            node->left = defineNode(data);
        } else {
            insertAux(node->left, data);
        }
    } else if(data > node->data) {
        if(node->right == nullptr) {
            node->right = defineNode(data);
        } else {
            insertAux(node->right, data);
        }
    }
}

void Tree::show(Node *node) {
    if(node!=NULL) {
        show(node->left);
        std::cout << node->data << ' ';
        show(node->right);
    }
}

void Tree::insert(int data) {
    if(top == nullptr) { // define top
        top = defineNode(data);
    } else {
        insertAux(top, data);
    }
}

void Tree::showTree() {
    show(top);
}

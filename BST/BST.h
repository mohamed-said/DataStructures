//
// Created by kogo on 3/17/18.
//

#ifndef DATASTRUCTURES_BST_H
#define DATASTRUCTURES_BST_H

#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;

class BST {
private:
    Node *root;

    void __insert(Node *&node, int p_value);
    bool __lookup(Node *node, int p_value);
    void __inorder(Node *node);
    void __preorder(Node *node);
    void __postorder(Node *node);
    void __destroy(Node *node);

public:
    BST();
    ~BST();
    void insert(int p_value);
    bool lookup(int p_value);
    void remove(int p_value);
    void print_inorder();
    void print_preorder();
    void print_postorder();
    void clear();
};


#endif //DATASTRUCTURES_BST_H

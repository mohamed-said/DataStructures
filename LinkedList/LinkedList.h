//
// Created by kogo on 3/17/18.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H

#include <iostream>
#include "LLNode.h"

using std::cout;
using std::endl;

class LinkedList {

private:

    LLNode *head;

public:

    LinkedList();
    ~LinkedList();
    void insert(int);
    void insert_head(int);
    void remove_head();
    int get_head();
    bool lookup(int);
    void remove_value(int);
    void print();
    void clear();
};


#endif //DATASTRUCTURES_LINKEDLIST_H

//
// Created by kogo on 3/17/18.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H

#include <iostream>
#include <exception>
#include "LLNode.h"

using std::cout;

class ListEmptyException : public std::exception {
public:
    const char* what() const throw() override {
        return "List Empty Exception";
    }
};

class LinkedList : public ListEmptyException {

private:

    LLNode *head;

public:

    LinkedList();
    void insert(int);
    void insert_head(int);
    void remove_head();
    int get_head();
    bool lookup(int);
    void remove_value(int);
    void print();
};


#endif //DATASTRUCTURES_LINKEDLIST_H

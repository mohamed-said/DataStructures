//
// Created by kogo on 3/24/18.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H

#include "../LinkedList/LinkedList.h"

class Stack {
private:
    LinkedList my_stack;
    int number_of_elements;

public:

    Stack();
    void push(int);
    void pop();
    int top();
    int size();
    bool empty();

};


#endif //DATASTRUCTURES_STACK_H

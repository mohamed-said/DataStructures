//
// Created by kogo on 3/24/18.
//

#include "Stack.h"


Stack::Stack() {
    number_of_elements = 0;
}

void Stack::push(int p_value) {
    my_stack.insert_head(p_value);
    number_of_elements++;
}

void Stack::pop() {
    my_stack.remove_head();
    number_of_elements--;
}

int Stack::top() {
    return my_stack.get_head();
}

int Stack::size() {
    return number_of_elements;
}

bool Stack::empty() {
    return (number_of_elements == 0);
}

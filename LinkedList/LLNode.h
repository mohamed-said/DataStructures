//
// Created by kogo on 3/17/18.
//

#ifndef DATASTRUCTURES_NODE_H
#define DATASTRUCTURES_NODE_H

struct LLNode {

    int data;
    LLNode *next;

    LLNode(): next(nullptr) {

    }

    LLNode(int p_data): next(nullptr) {
        data = p_data;
    }

};

#endif //DATASTRUCTURES_NODE_H

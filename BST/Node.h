//
// Created by kogo on 3/17/18.
//

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(): left(nullptr), right(nullptr) {

    }

    Node(int __data): left(nullptr), right(nullptr) {
        data = __data;
    }
};
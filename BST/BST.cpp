//
// Created by kogo on 3/17/18.
//

#include "BST.h"

BST::BST() {
    root = nullptr;
}

void BST::insert(int p_value) {

    if (root == nullptr) {
        root = new Node(p_value);
        return;
    }

    __insert(root, p_value);

}

bool BST::lookup(int p_value) {

    if (root == nullptr) {
        return false;
    }

    if (root->data == p_value) {
        return true;
    }

    return __lookup(root, p_value);
}

void BST::remove(int p_value) {

}

void BST::print_inorder() {

    if (root == nullptr) {
        return;
    }

    __inorder(root);
}

void BST::print_preorder() {

    if (root == nullptr) {
        return;
    }

    __preorder(root);
}

void BST::print_postorder() {

    if (root == nullptr) {
        return;
    }

    __postorder(root);
}

void BST::__inorder(Node *node) {

    if (node == nullptr) {
        return;
    }
    __inorder(node->left);
    cout << node->data << " ";
    __inorder(node->right);
}

void BST::__preorder(Node *node) {

    if (node == nullptr) {
        return;
    }

    cout << node->data << " ";
    __preorder(node->left);
    __preorder(node->right);
}

void BST::__postorder(Node *node) {
    if (node == nullptr) {
        return;
    }

    __postorder(node->left);
    __postorder(node->right);
    cout << node->data << " ";
}

bool BST::__lookup(Node *node, int p_value) {

    if (node == nullptr) {
        return false;
    }

    if (p_value == node->data) {
        return true;
    }

    if (p_value > node->data) {
        __lookup(node->right, p_value);
    } else {
        __lookup(node->left, p_value);
    }
}

void BST::__insert(Node *&node, int p_value) {
    if (node == nullptr) {
        node = new Node(p_value);
        return;
    }

    if (p_value > node->data) {
        __insert(node->right, p_value);
    } else if (p_value < node->data) {
        __insert(node->left, p_value);
    }
}
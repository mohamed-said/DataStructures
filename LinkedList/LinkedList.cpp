//
// Created by kogo on 3/17/18.
//

#include "LinkedList.h"
#include "../Exceptions/ListEmptyException.h"

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::insert(int p_value) {

    if (head == nullptr) {
        head = new LLNode(p_value);
        return;
    }

    LLNode *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = new LLNode(p_value);
}

void LinkedList::insert_head(int p_value) {

    if (head == nullptr) {
        head = new LLNode(p_value);
        return;
    }

    auto *node = new LLNode(p_value);
    node->next = head;
    head = node;

}

void LinkedList::remove_head() {

    if (head == nullptr) {
        return;
    }

    LLNode *temp = head->next;
    delete head;
    head = temp;
}

int LinkedList::get_head() {

    try {
        if (head == nullptr) {
            throw ListEmptyException();
        }
    } catch (ListEmptyException e) {
        cout << "Exception Caught: " << e.what() << std::endl;
    }

    return head->data;
}

bool LinkedList::lookup(int p_value) {

    if (head == nullptr) {
        return false;
    }

    LLNode *temp = head;
    while (temp != nullptr) {
        if (temp->data == p_value) {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

void LinkedList::remove_value(int p_value) {

    if (head == nullptr) {
        return;
    }

    if (head->data == p_value) {
        LLNode *temp = head->next;
        delete head;
        head = temp;
        return;
    }

    LLNode *prev = head, *iter = head->next;
    while (iter->next != nullptr) {
        if (iter->data == p_value) {
            LLNode *temp = prev->next;
            prev->next = iter->next;
            delete temp;
            break;
        }
        prev = iter;
        iter = iter->next;
    }

    if (iter->data == p_value) {
        delete iter;
        prev->next = nullptr;
    }

}

void LinkedList::print() {

    if (head == nullptr) {
        return;
    }

    LLNode *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}
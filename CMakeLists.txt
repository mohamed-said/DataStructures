cmake_minimum_required(VERSION 3.9)
project(datastructures)

set(CMAKE_CXX_STANDARD 11)

add_executable(datastructures

        Exceptions/ListEmptyException.h
        Exceptions/ListEmptyException.cpp

        BST/Node.h
        BST/BST.h
        BST/BST.cpp

        LinkedList/LLNode.h
        LinkedList/LinkedList.h
        LinkedList/LinkedList.cpp

        Stack/Stack.h
        Stack/Stack.cpp

        main.cpp)
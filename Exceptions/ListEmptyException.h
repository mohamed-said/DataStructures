//
// Created by kogo on 3/25/18.
//

#ifndef DATASTRUCTURES_LISTEMPTYEXCEPTION_H
#define DATASTRUCTURES_LISTEMPTYEXCEPTION_H


#include <exception>

class ListEmptyException : public std::exception {
public:
    const char* what() const throw() override;
};

#endif //DATASTRUCTURES_LISTEMPTYEXCEPTION_H

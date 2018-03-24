//
// Created by kogo on 3/25/18.
//

#include "ListEmptyException.h"

const char *ListEmptyException::what() const throw() {
    return "List Empty Exception";
}

#pragma once

#include <iostream>
#include "stddef.h"

template<typename T, typename F>
void iter(T* array, const size_t lenght, F func) {
    for (size_t i = 0; i < lenght; i++)
        func(array[i]);
}

template <typename T>
void print_elem(T t) {
    std::cout << t << " | ";
}

template <typename T>
void incr_elem(T &t) {
    t++;
}
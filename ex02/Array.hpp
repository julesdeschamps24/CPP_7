#pragma once

#include <iostream>
#include <ctime>
#include <cstdlib>

template <typename T>
class Array
{
public:
    Array(unsigned int size = 0);
    Array(const Array& copy);
    Array& operator=(const Array& other);
    ~Array();

    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    unsigned int size() const;
private:
    T* _data;
    unsigned int _size;
};

#include "Array.tpp"
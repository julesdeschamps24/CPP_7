#include <iostream>
#include <stdexcept>

template <typename T>
Array<T>::Array(unsigned int size) : _data(NULL), _size(size) {
    if(size > 0)
        _data = new T[size];
}

template <typename T>
Array<T>::Array(const Array<T>& copy) : _data(NULL), _size(copy._size) {
    *this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T>& other) {
    if(this != &other) {
        if(_data != NULL)
            delete[] _data;
        _size = other._size;
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _data[i] = other._data[i];
    }
    return (*this);
}

template <typename T>
Array<T>::~Array() {
    if(_data != NULL)
        delete [] _data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if(index >= _size)
        throw std::out_of_range("Index out of range");
    return(_data[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if(index >= _size)
        throw std::out_of_range("Index out of range");
    return(_data[index]);
}

template <typename T>
unsigned int Array<T>::size() const { return (_size); }
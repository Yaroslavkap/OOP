#include <iostream>
#include <memory>
#include "tstack_i.h"

template <class T>
TStack_i<T>::TStack_i(const T& val, TStack_i<T>* item)
{
    value = new T(val);
    next = item;
}

template <class T>
void TStack_i<T>::Push(const T& val)
{
    *value = val;
}

template <class T>
T& TStack_i<T>::Pop() const
{
    return *value;
}

template <class T>
void TStack_i<T>::SetNext(TStack_i<T>* item)
{
    next = item;
}

template <class T>
TStack_i<T>& TStack_i<T>::GetNext() const
{
    return *next;
}

template <class T>
TStack_i<T>::~TStack_i()
{
    delete value;
}

template class
TStack_i<void*>;
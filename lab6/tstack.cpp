#include <iostream>
#include <memory>
#include "tstack.h"

template <class T>
TStack<T>::TStack()
{
    head = nullptr;
    count = 0;
}

template <class T>
void TStack<T>::Push(const T& item)
{
    TStack_i<T>* tmp = new TStack_i<T>(item, head);
    head = tmp;
    ++count;
}

template <class T>
bool TStack<T>::IsEmpty() const
{
    return !count;
}

template <class T>
uint32_t TStack<T>::GetSize() const
{
    return count;
}

template <class T>
void TStack<T>::Pop()
{
    if (head) {
        TStack_i<T>* tmp = &head->GetNext();
        delete head;
        head = tmp;
        --count;
    }
}

template <class T>
T& TStack<T>::Top()
{
    return head->Pop();
}

template <class T>
TStack<T>::~TStack()
{
    for (TStack_i<T>* tmp = head, *tmp2; tmp; tmp = tmp2) {
        tmp2 = &tmp->GetNext();
        delete tmp;
    }
}

template class
TStack<void*>;
#pragma once
#include <iostream>
#include <memory>

template <class T>
class TStack_i
{
public:
    TStack_i(const T& val, TStack_i<T>* item);
    virtual ~TStack_i();

    void Push(const T& val);
    T& Pop() const;
    void SetNext(TStack_i<T>* item);
    TStack_i<T>& GetNext() const;

private:
    T* value;
    TStack_i<T>* next;
};

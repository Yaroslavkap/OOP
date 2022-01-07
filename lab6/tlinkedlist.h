#pragma once
#include "tlinkedlist_i.h"
#include "iterator.h"


template<typename T>
class TLinkedList {
private:
    size_t len;
    shared_ptr<TLinkedListItem<T>> head;
public:
    TLinkedList();

    TLinkedList(const TLinkedList<T>& list);

    shared_ptr<T> First();

    shared_ptr<T> Last();

    void InsertFirst(shared_ptr<T> rectangle);

    void InsertLast(shared_ptr<T> rectangle);

    void Insert(shared_ptr<T> rectangle, size_t pos);

    void RemoveFirst();

    void RemoveLast();

    void Remove(size_t pos);

    shared_ptr<T> GetItem(size_t ind);

    bool Empty();

    size_t Length();

    template<typename X>
    friend std::ostream& operator<<(std::ostream& os, const TLinkedList<X>& list);

    void Clear();

    virtual ~TLinkedList();

    Iter<TLinkedListItem<T>, T> begin();

    Iter<TLinkedListItem<T>, T> end();
};
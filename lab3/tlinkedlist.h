#pragma once
#include "rectangle.h"
#include "tlinkedlist_i.h"
#include "iostream"

class TLinkedList {
private:
    size_t len;
    shared_ptr<TLinkedListItem> head;
public:
    TLinkedList();

    TLinkedList(const TLinkedList& list);

    shared_ptr<Rectangle> First();

    shared_ptr<Rectangle> Last();

    void InsertFirst(shared_ptr<Rectangle> rectangle);

    void InsertLast(shared_ptr<Rectangle> rectangle);

    void Insert(shared_ptr<Rectangle> rectangle, size_t pos);

    void RemoveFirst();

    void RemoveLast();

    void Remove(size_t pos);

    shared_ptr<Rectangle> GetItem(size_t ind);

    bool Empty();

    size_t Length();

    friend std::ostream& operator<<(std::ostream& os, const TLinkedList& list);

    void Clear();

    virtual ~TLinkedList();
};

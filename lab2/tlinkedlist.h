#pragma once
#include "rectangle.h"
#include "tlinkedlist_i.h"
#include "iostream"

class TLinkedList {
private:
    size_t len;
    TLinkedListItem* head;
public:
    TLinkedList();

    TLinkedList(const TLinkedList& list);

    const Rectangle& First();

    const Rectangle& Last();

    void InsertFirst(const Rectangle& rectangle);

    void InsertLast(const Rectangle& rectangle);

    void Insert(const Rectangle& rectangle, size_t pos);

    void RemoveFirst();

    void RemoveLast();

    void Remove(size_t pos);

    const Rectangle& GetItem(size_t ind);

    bool Empty();

    size_t Length();

    friend std::ostream& operator<<(std::ostream& os, const TLinkedList& list);

    void Clear();

    virtual ~TLinkedList();
};
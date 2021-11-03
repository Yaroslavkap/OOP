#pragma once
#include "rectangle.h"
#include "iostream"
#include "memory"
using std::shared_ptr;
using std::make_shared;

class TLinkedListItem {
private:
    shared_ptr<Rectangle> val;
    shared_ptr<TLinkedListItem> next;
public:
    TLinkedListItem(shared_ptr<Rectangle> rectangle, shared_ptr<TLinkedListItem> nxt);

    void SetNext(shared_ptr<TLinkedListItem> nxt);

    shared_ptr<TLinkedListItem> GetNext();

    shared_ptr<Rectangle> GetVal();

    friend std::ostream& operator<<(std::ostream& os, const TLinkedListItem& item);

    virtual ~TLinkedListItem();
};

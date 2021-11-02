#pragma once
#include "rectangle.h"
#include "iostream"

class TLinkedListItem {
private:
    Rectangle val;
    TLinkedListItem* next;
public:
    TLinkedListItem(const Rectangle& rectangle, TLinkedListItem* nxt);

    void SetNext(TLinkedListItem* nxt);

    TLinkedListItem* GetNext();

    const Rectangle& GetVal();

    friend std::ostream& operator<<(std::ostream& os,const TLinkedListItem& item);

    virtual ~TLinkedListItem();
};
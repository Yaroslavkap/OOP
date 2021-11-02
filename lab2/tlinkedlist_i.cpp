#include "tlinkedlist_i.h"


TLinkedListItem::~TLinkedListItem() {
    
}

TLinkedListItem::TLinkedListItem(const Rectangle& rectangle, TLinkedListItem* nxt) {
    val = rectangle;
    next = nxt;
}

TLinkedListItem* TLinkedListItem::GetNext() {
    return next;
}

void TLinkedListItem::SetNext(TLinkedListItem* nxt) {
    next = nxt;
}

const Rectangle& TLinkedListItem::GetVal() {
    return val;
}

std::ostream& operator<<(std::ostream& os, const TLinkedListItem& item) {
    os << "["<< item.val << "]   ";
    return os;
}
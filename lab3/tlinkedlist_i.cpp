#include "tlinkedlist_i.h"


TLinkedListItem::~TLinkedListItem() {

}

TLinkedListItem::TLinkedListItem(shared_ptr<Rectangle> rectangle, shared_ptr<TLinkedListItem> nxt) {
    val = rectangle;
    next = nxt;
}

shared_ptr<TLinkedListItem> TLinkedListItem::GetNext() {
    return next;
}

void TLinkedListItem::SetNext(shared_ptr<TLinkedListItem> nxt) {
    next = nxt;
}

 shared_ptr<Rectangle> TLinkedListItem::GetVal() {
    return val;
}

std::ostream& operator<<(std::ostream& os, const TLinkedListItem& item) {
    os << "[" << *item.val << "]   ";
    return os;
}
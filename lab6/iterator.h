#pragma once
#include "iostream"
#include "memory"

using std::shared_ptr;

template<typename node, typename T>
class Iter {
public:
    Iter(shared_ptr<node> t) {
        ptr = t;
    }

    shared_ptr<T> operator*() {
        return ptr->GetVal();
    }

    shared_ptr<T> operator->() {
        return ptr->GetVal();
    }

    Iter<node, T> operator++() {
        return ptr = ptr->GetNext();
    }

    Iter<node, T> operator++(int) {
        Iter iter(*this);
        ++(*this);
        return iter;
    }

    bool operator==(Iter<node, T> const& t) {
        return ptr == t.ptr;
    }

    bool operator!=(Iter<node, T> const& t) {
        return !(*this == t);
    }

private:
    shared_ptr<node> ptr;
};
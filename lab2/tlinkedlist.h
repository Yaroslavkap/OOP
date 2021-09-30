#pragma once
using namespace std;

class Node {
public:
    Rectangle val;
    Node* next;

    Node(Rectangle _val) : val(_val), next(nullptr) {};
};

class list {
public:
    Node* first;
    Node* last;

    list() : first(nullptr), last(nullptr) {}
    bool is_empty();
    void push_back(Rectangle _val);
    void print();
    Node* find(Rectangle _val);
    void remove_first();
    void remove_last();
    void remove(Rectangle _val);
    Node* operator[] (const int index);
    

};

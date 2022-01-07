#include"rectangle.h"
#include "tlinkedlist_i.h"
#include "tlinkedlist.h"
#include"point.h"
#include<iostream>
#include "iterator.h"
#include "allocator.h"
#include <string>

using namespace std;


int main()
{
    TAllocationBlock block(sizeof(int), 10);
    int* n1;
    int* n2;
    int* n3;
    n1 = (int*)block.allocate();
    Rectangle* f1 = new Rectangle(Point(0, 0), Point(1, 1), Point(1, 0), Point(0, 1));
    (*f1).Print(std::cout);
    n2 = (int*)block.allocate();
    Rectangle* f2 = new Rectangle(Point(0, 0), Point(10, 10), Point(0, 10), Point(10, 0));
    (*f2).Print(std::cout);
    n3 = (int*)block.allocate();
    Rectangle* f3 = new Rectangle(Point(10, 10), Point(20, 20), Point(20, 10), Point(10, 20));
    (*f3).Print(std::cout);
   
    delete f1;
    delete f2;
    delete f3;
    *n1 = 10; *n2 = 100; *n3 = 1000;
    std::cout << *n1 << " " << *n2 << " " << *n3 << "\n";
    if (block.has_free_blocks()) {
        std::cout << "Free blocks are avaible !\n";
    }
    else {
        std::cout << "Free blocks are not avaible!\n";
    }
    return 0;
}
#include"rectangle.h"
#include "tlinkedlist_i.h"
#include "tlinkedlist.h"
#include"point.h"
#include<iostream>
#include "iterator.h"

using namespace std;

int main() {

	Point a;
	a.setX(1);
	a.setY(1);
	Point b(2, 2);
	Point c(3, 3);
	Point d(4, 4);

	Rectangle rc(c, a, b, d);
	Rectangle rc1(a, b, c, d);
	Rectangle rc2(d, b, c, d);

	cout << b << endl;
	cout << rc << endl;

	shared_ptr<Rectangle> rec = make_shared<Rectangle>(rc);
	shared_ptr<Rectangle> rec1 = make_shared<Rectangle>(rc1);
	shared_ptr<Rectangle> rec2 = make_shared<Rectangle>(rc2);

	TLinkedList<Rectangle> list;
	list.InsertFirst(rec);
	list.InsertFirst(rec1);
	list.InsertLast(rec2);
	cout << list << endl;
	list.RemoveFirst();
	
	cout << list.Length() << endl;
	cout << list << endl;
	cout << list.Empty() << endl;
	
	for (auto i : list) {
		std::cout <<"[" << *i <<"]  ";
	}

	





	return 0;

}
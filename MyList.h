#pragma once
#include "Node.h"

class MyList {
public:
	Node* first;
	Node* last;
	Node* pointer;

	MyList();
	MyList(int d);
	bool isEmpty();
	void insertFirst(int n);
	void insertLast(int n);
	void deleteFirst();
	void deleteLast();
};
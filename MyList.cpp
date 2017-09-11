#include "MyList.h"

MyList::MyList() {
	first = nullptr;
	last = nullptr;
	pointer = nullptr;
}
MyList::MyList(int d) {
	Node* node = new Node(d);
	first = node;
	last = node;
	node->next = nullptr;
}
bool MyList::isEmpty() {
	return first == nullptr;
}
void MyList::insertFirst(int n) {
	Node* node = new Node(n);
	if (isEmpty()) {//Si esta vacia           
		first = node;
		last = node;
		node->next = nullptr;
	}
	else {//Caso lista con elementos
		node->next = first;
		first = node;
	}
}
void MyList::insertLast(int n) {
	Node* node = new Node(n);
	if (isEmpty()) {//Si esta vacia           
		first = node;
		last = node;
		node->next = nullptr;
	}
	else {//Caso lista con elementos
		last->next = node;
		last = node;
	}
}
void MyList::deleteFirst() {
	if (!isEmpty()) {
		if (first->next == nullptr) {//Si la lista solo tiene un elemento
			first = nullptr;
			last = nullptr;
		}
		else {//Si la lista tiene mas de un elemento
			first = first->next;
		}
	}
	cout<<"The list is empty"<<endl;
}
void MyList::deleteLast() {
	if (!isEmpty()) {
		if (first == last) {//Si la lista solo tiene un elemento (porque apuntan al mismo elemento)
			first = last = nullptr;
		}
		else {//Buscamos dentro del arreglo
			pointer = first; //Se coloca en el primer sitio para recorar
			while (pointer->next != last) {//Recorre la lista y se detiene en el elemento anterior al ultimo
				pointer = pointer->next;
			}
			last = pointer;
			last->next = nullptr;
			pointer = nullptr;
		}
	}
}
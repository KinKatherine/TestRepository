#include "List.h"
#include <iostream>

List::List() 
{
	first = nullptr;
}

List::List(int a)
{
	first = new SElement(a, nullptr);
}

List::List(int a, int b)
{
	first = new SElement(a, nullptr);
	SElement* temp = new SElement(b, nullptr);
	first->next = temp;
}

List::List(int a, int b, int c)
{
	first = new SElement(a, nullptr);
	SElement* temp = new SElement(b, nullptr);
	first->next = temp;
	temp = new SElement(c, nullptr);
	first->next->next = temp;
}

void List::Print() 
{
	for (SElement* tmp = first; tmp != nullptr; tmp = tmp->next) 
	{
		std::cout << tmp->data << ' ';
	}
}

void List::AddFirst(int Element) 
{
	SElement* NewEl = new SElement(Element, this->first);
	this->first = NewEl;
}

bool List::isEmpty() 
{
	return (first == nullptr);
}

int List::DeleteFirst() 
{
	if (first == nullptr) 
	{ 
		return 0; 
	}

	SElement* tmp = first;
	first = first->next;
	delete tmp;
	return tmp->data;
}
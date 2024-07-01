#pragma once
#include "Iterator.h"
#include "SElement.h" 

class ListIterator;
class List
{
public:
    friend class ListIterator;
    List();
    List(int a);
    List(int a, int b);
    List(int a, int b, int c);
    void Print();
    void AddFirst(int Element);
    int DeleteFirst();
    bool isEmpty();
private:
    SElement* first;
};




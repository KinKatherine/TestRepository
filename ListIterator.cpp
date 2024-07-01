#include "Iterator.h"
#include "ListIterator.h"

void ListIterator::First() 
{
	ptr = list->first;
}

bool ListIterator::IsDone() const  
{
	return ptr == nullptr;
}
void ListIterator::Next()  
{
	if (!IsDone()) 
	{
		ptr = ptr->next;
	}
}
int ListIterator::CurrentItem() const  
{
	return ptr->data;
}

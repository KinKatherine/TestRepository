#include "Iterator.h"

class ListIterator :public Iterator<int>
{
    List* list;
    SElement* ptr;
    void First() override;
    bool IsDone() const override;
    void Next() override;
    int CurrentItem() const override;
};

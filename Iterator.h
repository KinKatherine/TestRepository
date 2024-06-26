#pragma once
#include "List.h"

template <class ItemType>
class Iterator 
{
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual ItemType CurrentItem() const = 0;
protected:
    Iterator();
};

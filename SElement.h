#pragma once
struct SElement
{
    int data;
    SElement* next;
    SElement() = default;
    SElement(const int& data_, SElement* next_ = nullptr)
    {
        data = data_;
        next = next_;
    }
    ~SElement() = default;
};

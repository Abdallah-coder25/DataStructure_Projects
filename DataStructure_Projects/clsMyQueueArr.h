#pragma once

#include <iostream>
#include "clsDaynamicArray.h"

using namespace std;

template <class T>
class clsMyQueueArr
{
protected:
    clsDaynamicArray<T> _MyList;

public:
    void push(T Item)
    {
        _MyList.InserAtEnd(Item);
    }

    void pop()
    {
        _MyList.DeleteFirstItem();
    }

    void Print()
    {
        _MyList.printList();
    }

    int Size()
    {
        return _MyList.Size();
    }

    bool IsEmpty()
    {
        return _MyList.IsEmpty();
    }

    T front()
    {
        return _MyList.GetItem(0);
    }

    T back()
    {
        return _MyList.GetItem(Size() - 1);
    }

    T GetItem(int Index)
    {
        return _MyList.GetItem(Index);
    }

    void Reverse()
    {
        _MyList.Reverse();
    }

    void UpdateItem(int Index, T NewValue)
    {
        _MyList.SetItem(Index, NewValue);
    }

    void InsertAfter(int Index, T NewValue)
    {
        _MyList.InserAfter(Index, NewValue);
    }

    void InsertAtFront(T Value)
    {
        _MyList.InserAtBeginng(Value);
    }

    void InsertAtBack(T Value)
    {
        _MyList.InserAtEnd(Value);
    }

    void Clear()
    {
        _MyList.Clear();
    }
};


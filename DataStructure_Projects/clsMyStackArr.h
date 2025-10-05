#pragma once
#include <iostream>
#include "clsMyQueueArr.h"
using namespace std;

//template <class T>
//class clsMyStackArr
//{
//protected:
//	clsDaynamicArray<T> _MyList;
//public:
//    void push(T Item)
//    {
//        _MyList.InserAtBeginng(Item);
//    }
//
//    void pop()
//    {
//        _MyList.DeleteFirstItem();
//    }
//
//    void Print()
//    {
//        _MyList.printList();
//    }
//
//    int Size()
//    {
//        return _MyList.Size();
//    }
//
//    bool IsEmpty()
//    {
//        return _MyList.IsEmpty();
//    }
//
//    T front()
//    {
//        return _MyList.GetItem(0);
//    }
//
//    T back()
//    {
//        return _MyList.GetItem(Size() - 1);
//    }
//
//    T GetItem(int Index)
//    {
//        return _MyList.GetItem(Index);
//    }
//
//    void Reverse()
//    {
//        _MyList.Reverse();
//    }
//
//    void UpdateItem(int Index, T NewValue)
//    {
//        _MyList.SetItem(Index, NewValue);
//    }
//
//    void InsertAfter(int Index, T NewValue)
//    {
//        _MyList.InserAfter(Index, NewValue);
//    }
//
//    void InsertAtFront(T Value)
//    {
//        _MyList.InserAtBeginng(Value);
//    }
//
//    void InsertAtBack(T Value)
//    {
//        _MyList.InserAtEnd(Value);
//    }
//
//    void Clear()
//    {
//        _MyList.Clear();
//    }
//};

template <class T>
class clsMyStackArr : public clsMyQueueArr <T>
{
public:
	void push(T Item)
	{
		clsMyQueueArr<T>::_MyList.InserAtBeginng(Item);
	}

	void pop()
	{
		clsMyQueueArr<T>::_MyList.DeleteFirstItem();
	}

	void Print()
	{
		clsMyQueueArr<T>::_MyList.printList();
	}

	int Size()
	{
		return clsMyQueueArr<T>::_MyList.Size();
	}

	bool IsEmpty()
	{
		return clsMyQueueArr<T>::_MyList.IsEmpty();
	}

	T front()
	{
		return clsMyQueueArr<T>::_MyList.GetItem(0);
	}

	T back()
	{
		return clsMyQueueArr<T>::_MyList.GetItem(Size() - 1);
	}

	T GetItem(int Index)
	{
		return clsMyQueueArr<T>::_MyList.GetItem(Index);
	}

	void Reverse()
	{
		clsMyQueueArr<T>::_MyList.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		clsMyQueueArr<T>::_MyList.SetItem(Index, NewValue);
	}

	void InsertAfter(int Index, T NewValue)
	{
		clsMyQueueArr<T>::_MyList.InserAfter(Index, NewValue);
	}

	void InsertAtFront(T Value)
	{
		clsMyQueueArr<T>::_MyList.InserAtBeginng(Value);
	}

	void InsertAtBack(T Value)
	{
		clsMyQueueArr<T>::_MyList.InserAtEnd(Value);
	}

	void Clear()
	{
		clsMyQueueArr<T>::_MyList.Clear();
	}
};


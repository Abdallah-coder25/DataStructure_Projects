#pragma once
#include <iostream>
#include "clsMyQueue.h"
using namespace std;

template <class T>
class clsMyStack : public clsMyQueue<T>
{
public:
	void push(T Item)
	{
		this->_MyList.InsertAtBeginning(Item);
	}

	T top() {
		return this->front();
	}
	T bottom()
	{
		return this->back();
	}

	void Print()
	{
		this->_MyList.PrintList();
	}

	int Size()
	{
		return this->_MyList.Size();
	}

	bool IsEmpty()
	{
		return this->_MyList.IsEmpty();
	}

	T GetItem(T value) {
		return this->_MyList.GetItem(value);
	}

	void Reverse() {
		this->_MyList.Reverse();
	}

	T UpdateItem(int index, T value) {
		return this->_MyList.UpdateItem(index, value);
	}

	T InsertAfter(int index, T value) {
		return this->_MyList.InsertAfter(index, value);
	}

	void InsertAtFront(T value) {
		this->_MyList.InsertAtBeginning(value);
	}

	void InsertAtBack(T value) {
		this->_MyList.InsertAtEnd(value);
	}

	void Clear() {
		this->_MyList.Clear();
	}
};

#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

/*
template <class T>
class clsMyQueue
{
protected:
	int _Size;


public:
	class Queue {
	public:
		T value;
		Queue* next;
	};
	Queue* front = NULL;
	Queue* tail = NULL;

	void push(T value) {
		Queue* new_queue = new Queue();
		new_queue->value = value;

		if (tail == NULL)
			front = tail = new_queue;
		else {
			tail->next = new_queue;
			tail = new_queue;
		}
		_Size++;
	}
	void Pop() {
		Queue* Current = front;

		if (front == NULL) {
		   cout << "\n\nQueue is empty\n\n";
			return;
		}
		else
			front = Current->next;

		if (front == NULL)
			tail = NULL;

		delete Current;

		_Size--;
	}
	T Front() {
		if (front != NULL)
			return front->value;
		else
			return 0;
	}
	T Back() {
		if (tail != NULL)
			return tail->value;
		else
			return 0;
	}
	T Size() {
		if (_Size > 0)
			return _Size;
		else
			return 0;
	}
	void Print() {
		Queue* temp = front;
		while (temp != NULL) {
			cout << temp->value << " ";
			temp = temp->next;
		}
	}
};*/

template <class T>
class clsMyQueue
{

protected:
	clsDblLinkedList <T> _MyList;

public:

	void push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}


	void pop()
	{
		_MyList.DeleteFirstNode();
	}

	void Print()
	{
		_MyList.PrintList();
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
	T GetItem(T value) {
		return _MyList.GetItem(value);
	}
	void Reverse() {
		_MyList.Reverse();
	}
	T UpdateItem(int index, T value) {
		return _MyList.UpdateItem(index, value);
	}
	T InsertAfter(int index, T value) {
		return _MyList.InsertAfter(index, value);
	}
	void InsertAtFront(T value) {
		_MyList.InsertAtBeginning(value);
	}
	void InsertAtBack(T value) {
		_MyList.InsertAtEnd(value);
	}
	void Clear() {
		_MyList.Clear();
	}

};


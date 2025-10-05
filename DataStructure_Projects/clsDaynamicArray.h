#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDaynamicArray
{
protected:
	short _size = 0;
	T* _TempArray;
public:
	T* OrriginalArray;

	clsDaynamicArray(short size = 0) {
		if (size < 0)
			size = 0;

		_size = size;
		OrriginalArray = new T[_size];
	}
	bool SetItem(short index, T value) {
		if (index >= 0 && index < _size) {
			OrriginalArray[index] = value;
			return true;
		}
		else
			return false;
	}
	bool IsEmpty() {
		return (_size == 0) ? true : false;
	}
	short Size() {
		return _size;
	}
	void printList() {
		for (short i = 0; i < _size; i++) {
			cout << OrriginalArray[i] << " ";
		}
	}
	void Resize(short size) {
		if (size < 0)
			size = 0;

		if (size < _size)
			_size = size;

		_TempArray = new T[size];

		for (short i = 0; i < _size; i++)
			_TempArray[i] = OrriginalArray[i];

		_size = size;
		delete[] OrriginalArray;
		OrriginalArray = _TempArray;

	}
	T GetItem(short index) {
		if (index < 0 || index > _size)
			return T();
		return OrriginalArray[index];
	}
	void Reverse() {
		_TempArray = new T[_size];
		short counter = 0;

		for (short i = _size - 1; i >= 0; i--) {
			_TempArray[counter] = OrriginalArray[i];
			counter++;
		}
		delete[] OrriginalArray;
		OrriginalArray = _TempArray;
	}
	void Clear() {
		_TempArray = new T[0];
		_size = 0;
		delete[] OrriginalArray;
		OrriginalArray = _TempArray;
	}
	bool DeleteAtItem(short index) {
		if (index >= _size || index < 0)
			return false;

		_size--;
		_TempArray = new T[_size];

		for (short i = 0; i < index; i++)
			_TempArray[i] = OrriginalArray[i];


		for (short i = index + 1; i < _size + 1; i++)
			_TempArray[i - 1] = OrriginalArray[i];


		delete[] OrriginalArray;
		OrriginalArray = _TempArray;
		return true;
	}
	void DeleteFirstItem() {
		DeleteAtItem(0);
	}
	void DeleteLastItem() {
		DeleteAtItem(_size - 1);
	}
	short Find(T value) {
		for (short i = 0; i < _size; i++) {
			if (OrriginalArray[i] == value)
				return i;
		}
		return -1;
	}
	bool DeleteItem(T value) {
		short index = Find(value);
		if (index == -1)
			return false;

		DeleteAtItem(index);
		return true;

	}
	bool InserAt(short index, T value) {
		if (index < 0 || index > _size)
			return false;

		_size++;
		_TempArray = new T[_size];

		for (short i = 0; i < index; i++)
			_TempArray[i] = OrriginalArray[i];

		_TempArray[index] = value;

		for (short i = index; i < _size - 1; i++)
			_TempArray[i + 1] = OrriginalArray[i];

		delete[] OrriginalArray;
		OrriginalArray = _TempArray;
		return true;
	}

	void InserAtBeginng(T value) {
		InserAt(0, value);
	}
	bool InserBefor(short index, T value) {
		if (index < 1)
			return InserAt(0, value);
		else
			return InserAt(index - 1, value);
	}
	bool InserAfter(short index, T value) {
		if (index >= _size)
			return InserAt(_size - 1, value);
		else
			return InserAt(index + 1, value);
	}
	bool InserAtEnd(T value) {
		return InserAt(_size, value);
	}
	~clsDaynamicArray() {
		delete[] OrriginalArray;
	}
};



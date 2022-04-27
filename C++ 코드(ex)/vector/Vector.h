#pragma once
#include "Iterator.h"

template<typename T>
class Vector
{
public:
	Vector() : _data(nullptr), _size(0), _capacity(0){}
	~Vector() {
		if (_data != nullptr) {
			delete[] _data;
		}
	}

	void push_back(const T& value);
	void pop_back();
	void reserve(int capacity);

	T& operator[](const int pos);
	int size() { return _size; }
	int capacity() { return _capacity; }

	typedef Iterator<T> iterator;
	iterator begin() { return iterator(&_data[0]); }
	iterator end() { return begin() + _size; }
private:
	T* _data;
	int _size;
	int _capacity;
};


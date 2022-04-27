#pragma once;

template<typename T>
class Iterator
{
public:
	Iterator() : _ptr(nullptr) {}
	Iterator(T* ptr) : _ptr(ptr) {}

	
	Iterator& operator++(); //전위형(front)
	Iterator operator++(int); //후위형
	Iterator& operator--();
	Iterator operator--(int);

	Iterator operator+(const int cnt);
	Iterator operator-(const int cnt);

	bool operator==(const Iterator& right)
	{
		return _ptr == right->_ptr;
	}

	bool operator !=(const Iterator& right)
	{
		return !(*this == right);
	}

	T& operator*()
	{
		return *_ptr;
	}

private:
	T* _ptr;
};
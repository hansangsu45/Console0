
#include "Iterator.h"

template<typename T>
Iterator<T>& Iterator<T> :: operator++()
{
	_ptr++;
	return *this;
}

template<typename T>
Iterator<T> Iterator<T> :: operator++(int)
{
	Iterator temp = *this;
	_ptr++;
	return temp;
}

template<typename T>
Iterator<T>& Iterator<T> :: operator--()
{
	_ptr--;
	return *this;
}

template<typename T>
Iterator<T> Iterator<T> :: operator--(int)
{
	Iterator temp = *this;
	_ptr--;
	return temp;
}

template<typename T>
Iterator<T> Iterator<T> :: operator+(const int cnt)
{
	Iterator temp = *this;
	temp._ptr += cnt;
	return temp;
}

template<typename T>
Iterator<T> Iterator<T> :: operator-(const int cnt)
{
	Iterator temp = *this;
	temp._ptr -= cnt;
	return temp;
}


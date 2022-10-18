#pragma once

#include <iostream>

template <typename T>
class Node
{
public:
	T data;
	Node<T>* next;
	Node<T>* prev;

	Node<T>()
	{
		data = NULL;
		next = nullptr;
		prev = nullptr;
	}
	Node<T>(T data)
	{
		this->data = data;

		next = nullptr;
		prev = nullptr;
	}
	Node<T>(T data, Node<T>* prev, Node<T>* next)
	{
		this->data = data;
		this->prev = prev;
		this->next = next;
	}

	void Delete()
	{
		if (next != nullptr)
		{
			next->Delete();
			delete next;
		}
	}

	~Node()
	{
		//delete next;
		//delete prev;
	}
};


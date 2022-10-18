#pragma once

#include "Node.h"

#include<iostream>

template <typename T>  //iterator �ʿ�
class LinkedList
{
private:
	Node<T>* head;
	int count;

public:
	LinkedList<T>()
	{
		count = 0;
		head = nullptr;
	}
	~LinkedList()
	{
		head->Delete();
	}

	int GetCount()
	{
		return count;
	}

	void PushBack(T data)
	{
		Node<T>* newNode = new Node<T>(data);

		if (count == 0)
		{
			head = newNode;
		}
		else if (count == 1)
		{
			head->next = newNode;
			head->prev = newNode;
			newNode->prev = head;
			newNode->next = head;
		}
		else 
		{
			head->prev->next = newNode;
			newNode->prev = head->prev;
			head->prev = newNode;
			newNode->next = head;
		}

		count++;
	}

	T GetData(const int index)
	{
		/*if (head == nullptr) 
		{
			std::count << "head�� ����" << std::endl;
			return NULL;
		}
		if (count <= index || index < 0) 
		{
			std::count << "index�� ���� ����" << std::endl;
			return NULL;
		}*/

		Node<T>* data = head;
		for (int i = 0; i < index; i++)
		{
			data = data->next;
		}

		return data->data;
	}

	void Insert(int index, T data)  //count�� 0, 1���� �� ����ó�� �ʿ�
	{
		Node<T>* newNode = new Node<T>(data);

		Node<T>* node = head;

		for (int i = 0; i < index; i++)
		{
			node = node->next;
		}

		newNode->prev = node->prev;
		node->prev = newNode;
		newNode->next = node;
		newNode->prev->next = newNode;

		count++;
	}

	void Remove(int index)  //count�� 0, 1���� �� ����ó�� �ʿ�
	{
		Node<T>* node = head;

		for (int i = 0; i < index; i++)
		{
			node = node->next;
		}

		node->prev->next = node->next;
		node->next->prev = node->prev;

		count--;

		delete node;
	}
};


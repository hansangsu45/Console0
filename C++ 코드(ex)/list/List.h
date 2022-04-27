//#pragma once
//template<class T>
//class Node 
//{
//public:
//	Node* _prev;
//	T _data;
//	Node* _next;
//public:
//	Node() : _prev(nullptr), _next(nullptr), _data(T()) {}
//	Node(const T& value) : _prev(nullptr), _next(nullptr), _data(value) {}
//
//};
//
//template<class T>
//class Iterator
//{
//public:
//	Node<T>* _node;
//public:
//	Iterator() : _node(nullptr){}
//	Iterator(Node<T>* node) : _node(node) {}
//	Iterator<T>& operator++()
//	{
//		_node = _node->_next;
//		return *this;
//	}
//	Iterator<T> operator++(int)
//	{
//		Iterator<T> temp = *this;
//		_node = _node->_next;
//		return temp;
//	}
//	Iterator<T>& operator--()
//	{
//		_node = _node->_prev;
//		return *this;
//	}
//	Iterator<T> operator--(int)
//	{
//		Iterator<T> temp = *this;
//		_node = _node->_prev;
//		return temp;
//	}
//
//	T& operator*()
//	{
//		return _node->_data;
//	}
//
//	bool operator==(const Iterator& right)
//	{
//		return _node == right._node;
//	}
//	bool operator!=(const Iterator& right)
//	{
//		return _node != right._node;
//	}
//};
//
//template<typename T>
//class List
//{
//public:
//	Node<T>* _header;
//	int _size;
//public:
//	List() :_size(0)
//	{
//		_header = new Node<T>();
//		_header->_next = _header;
//		_header->_prev = _header;
//	}
//	~List()
//	{
//		while (_size > 0)
//		{
//			pop_back();
//			delete _header;
//		}
//	}
//
//	void push_back(const T& value)
//	{
//		AddNode(_header, value);
//	}
//
//	Node<T>* AddNode(Node<T>* before, const T& value)
//	{
//		Node<T>* node = new Node<T>(value);
//		Node<T>* prev = before->_prev;
//
//		prev->_next = node;
//		before->_prev = node;
//
//		node->_prev = prev;
//		node->_next = before;
//
//		_size++;
//		return node;
//	}
//	void pop_back()
//	{
//		RemoveNode(_header->_prev);
//	}
//	Node<T>* RemoveNode(Node<T>* node)
//	{
//		node->_prev->_next = node->_next;
//		node->_next->_prev = node->_prev;
//		
//		Node<T>* nextNode = node->_next;
//		delete node;
//
//		_size--;
//		
//		return nextNode;
//	}
//
//	int size() { return _size; }
//	typedef Iterator<T> iterator;
//	iterator begin()
//	{
//		return iterator(_header->_next);
//	}
//	iterator end()
//	{
//		return iterator(_header);
//	}
//	iterator insert(iterator it, const T& value)
//	{
//        auto node = AddNode(it._node, value);
//		return iterator(node);
//	}
//	iterator erase(iterator it)
//	{
//		auto node = RemoveNode(it._node);
//		return iterator(node);
//	}
//};

#include<iostream>
#include<vector>
#include "Vector.h"
#include "Vector.cpp"
using namespace std;

int main()
{
	//STL (Standard Template Library)
	//컨테이너 (데이터를 저장하는 객체 (DS - Data structure)
	// vector : 동적 배열, capacity : 가용 공간, size : 가용공간중에 현재 사용중인 공간
	
	if (true)
	{
		Vector<int> v;
		
		v.reserve(1000);

		for (int i = 0; i < 1000; i++)
		{
			v.push_back(i + 1);
			cout << v.size() << ", " << v.capacity() << endl;
		}

		//v.clear();
		cout << v.size() << ", " << v.capacity() << endl;

		//vector<int>().swap(v);
		//cout << v.size() << ", " << v.capacity() << endl;
	}


#pragma region 주석


	//if (false)
	//{
	//	vector<int> v(10);

	//	for (vector<int> :: size_type i =0; i<v.size(); i++)
	//	{
	//		v[i] = i + 1;
	//	}

	//	vector<int>::iterator it;
	//	int* ptr;
	//	ptr = &v[0];
	//	it = v.begin();

	//	cout << *(ptr+5) << endl;
	//	cout << *(it+5) << endl;

	//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) 
	//	{
	//		cout << *it << endl;
	//	}

	//	cout << "test" << endl;
	//}

	//if (false)
	//{
	//	vector<int> v(10);
	//	for (int i = 0; i < v.size(); i++)
	//		v[i] = i + 1;

	//	//v.insert(v.begin() + 5, 10);

	//	for (auto it = v.begin(); it!=v.end(); ++it)
	//	{
	//		cout << *it << endl;
	//	}

	//	//v.erase(v.begin() + 3);

	//	for (auto it = v.begin(); it != v.end();)
	//	{
	//		if (*it % 2 == 0)
	//		{
	//			it = v.erase(it);
	//			cout << "Test" << endl;
	//		}
	//		else {
	//			it++;
	//		}
	//	}
	//	cout << "test2" << endl;

	//	for (auto it = v.begin(); it != v.end(); ++it)
	//	{
	//		cout << *it << endl;
	//	}
	//}
#pragma endregion
}
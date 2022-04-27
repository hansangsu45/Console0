//#include <iostream>
//#include<list>
//#include "List.h"
//using namespace std;
//
//int main()
//{
//
//	cout << "Test" << endl;
//	//list : 이중 연결 리스트
//	List<int> li;
//	for (int i = 0; i < 100; i++)
//	{
//		li.push_back(i);
//	}
//
//	li.push_back(-10);
//
//	//cout << li.front() << endl;
//	//cout << li.back() << endl;
//	
//	List<int>::iterator itBegin = li.begin();
//	List<int>::iterator itEnd = li.end();
//
//	for (auto it = li.begin(); it != li.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//
//	li.erase(li.begin());
//	//li.remove(20);
//	
//
//	return 0;
//}
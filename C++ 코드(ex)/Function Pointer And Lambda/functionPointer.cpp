#include<iostream>
using namespace std;

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//class Knight
//{
//public:
//	Knight() : _hp(5)
//	{
//		cout << "Knight!!!" << endl;
//	}
//	Knight(int hp) : _hp(hp)
//	{
//		cout << "Knight(int)" << endl;
//	}
//	~Knight()
//	{
//		cout << "~Knight!" << endl;
//	}
//	int Test(int a, int b)
//	{
//		cout << a << ", " << b << ", hp : " << _hp << endl;
//		return a + b;
//	}
//public :
//	int _hp;
//};

class Item
{
public:
	Item(){}
public:
	int _itemId = 0;
	int _rarity = 0;
	int _ownerId = 0;
};

using COMPARE = bool(Item* item);

bool IsRareItem(Item* item)
{
	return item->_rarity >= 2;
}

Item* FindItem(Item items[], int itemCnt, COMPARE* selector)
{
	for (int i = 0; i < itemCnt; i++)
	{
		Item* item = &items[i];
		if (selector(item)) return item;
	}
	return nullptr;
}

int main()
{
	/*int a = 10;
	typedef int DATA;
	DATA* ptr = &a;

	typedef int(*FUNCTYPE)(int,int);
	using FUNCTYPE2 = int(int, int);

	FUNCTYPE pFn = Add;

	FUNCTYPE2* pFn2 = [](int a, int b) {return a + b; };*/

	/*typedef int(Knight::*PMemFunc)(int, int);

	Knight k1;

	cout << k1._hp << endl;

	PMemFunc mFn = &Knight :: Test;

	int result = (k1.*mFn)(10, 20);
	cout << result << endl;*/
	
	Item items[10]={};
	items[3]._rarity = 3;
	items[3]._itemId = 10;

	Item* item = FindItem(items, 10, IsRareItem);

	cout << item->_itemId << endl;

	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

enum class ItemType 
{
	None,
	Armor,
	Weapon,
	Jewelry,
	Consumable
};

enum class Rarity
{
	Common,
	Rare,
	Unique
};

class Item
{
public:
	Item(){}
	Item(int itemId, Rarity rarity, ItemType type) : _itemId(itemId), _rarity(rarity), _type(type) {}
public :
	int _itemId = 0;
	Rarity _rarity = Rarity::Common;
	ItemType _type = ItemType::None;
};

int main()
{
	vector<Item> v;
	v.reserve(20);

	v.push_back(Item(1, Rarity::Common, ItemType::Weapon));
	v.push_back(Item(2, Rarity::Common, ItemType::Armor));
	v.push_back(Item(3, Rarity::Rare, ItemType::Jewelry));
	v.push_back(Item(4, Rarity::Unique, ItemType::Weapon));

	if (false)
	{
		class IsUniqueItem 
		{
		public:
			bool operator() (const Item& item)
			{
				return item._rarity == Rarity::Unique;
			}
		};
		IsUniqueItem compare;
		auto it = find_if(v.begin(), v.end(), compare);
		if (it != v.end())
		{
			cout << "아이템 ID : " << it->_itemId << endl;
		}
	}
	if (false)
	{
		auto IsUniqueLambda = [](const Item& item)->bool {return item._rarity == Rarity::Unique; };
		auto it = find_if(v.begin(), v.end(), IsUniqueLambda);
	}

	if (false)
	{
		class FindItemById
		{
		public:
			FindItemById(int itemId, Rarity rarity, ItemType type) : _itemId(itemId),_rarity(rarity), _itemType(type) {}
			bool operator()(Item& item) {
				return item._itemId == _itemId
					&& item._rarity == _rarity
					&& item._type == _itemType;
			}
		public:
			int _itemId;
			Rarity _rarity;
			ItemType _itemType;
		};

		int uinput = 2;
		//cout << "아이디 입력 : ";
		//cin >> uinput;

		Rarity _rarity = Rarity ::Common;
		ItemType _itemType = ItemType ::Armor;

		//auto it = find_if(v.begin(), v.end(), FindItemById(3));
		auto it = find_if(v.begin(), v.end(), [uinput, &_rarity, &_itemType](Item& item)->bool {return item._itemId == uinput && item._rarity == _rarity && item._type == _itemType;});

		if (it != v.end())
		{
			cout << "아이템 ID : " << it->_itemId << endl << "Rarity : " << (int)it->_rarity << endl;
		}
	    
	}

	if (true)
	{
		class Knight
		{
		public:
			auto ResetHpJob()
			{
				auto f = [this](int value) //this 빼고 = 써도 됨
				{
					_hp += value;  //this->_hp랑 같음
				};
				return f;
			}
			void PrintHP()
			{
				cout << _hp << endl;
			}
		private:
			int _hp = 100;
		};

		/*Knight k;

		k.PrintHP();
		auto job = k.ResetHpJob();
		job(20);
		k.PrintHP();*/

		Knight* pk = new Knight();
		auto job = pk->ResetHpJob();
		pk->PrintHP();
		job(20);
		pk->PrintHP();
		delete pk;
		job(20);
	}
}
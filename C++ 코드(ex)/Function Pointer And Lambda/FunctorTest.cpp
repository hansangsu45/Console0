#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void helloWorld()
{
	cout << "Hello World" << endl;
}

void helloNumber(int n)
{
	cout << "Hello Num : " << n << endl;
}

class Knight
{
public:
	void addHp(int hp)
	{
		_hp += hp;
	}

public:
	int _hp = 100;
};

class Functor
{
public:
	void operator() () {
		cout << "Functor Test : " << _value << endl;
	}
	bool operator() (int n)
	{
		cout << "Functor Numbder : " << n << endl;
		return true;
	}

private:
	int _value = 0;
};

template <typename T>
void Test(T func)
{
	func();
	func(1)
}

int main()
{
	void(*hFunc)(void);
	hFunc = &helloWorld;
	//hFunc();

	Functor func;
	vector<int> v;
	//find_if(v.begin(), v.end(), Test);

	//bool result = func(4);
	//cout << result << endl;

	//Functor func;
}
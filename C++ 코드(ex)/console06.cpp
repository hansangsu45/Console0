#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

bool compare(int i, int j)
{
	return i > j;
}

class Player
{
public:
	int lv;
	string name;
	Player(int l, string n) :lv(l), name(n) {}
};

bool classCompare(const Player* n1, const Player* n2) {
	return n1->lv < n2->lv;
}

int main()
{
	//벡터 정렬
	//vector<int> v;
	//v.push_back(3);
	//v.push_back(-1);
	//v.push_back(0);
	//v.push_back(10);
	//v.push_back(7);

	//cout << "정렬 전:  ";
	//for (auto a : v) cout << a << " ";
	//cout << endl;

	//cout << "정렬 후: ";
	//sort(v.begin(), v.end());   //int arr[10]  ---> sort(arr,arr+10)
	//for (auto& a : v) cout << a << " ";  
	//cout << endl;

	//cout << "내림차순: ";
	//sort(v.begin(), v.end(), greater<>());  //greater
	//for (auto a : v) cout << a << " ";
	//cout << endl;

	//cout << "오름차순: ";
	//sort(v.begin(), v.end(), less<>());  //less
	//for (vector<int>::iterator a = v.begin(); a != v.end(); a++) cout << *a << " ";
	//cout << endl;

	////cout << "내림차순: ";
	////sort(v.begin(), v.end(), compare);  //compare 함수
	////for (auto& a : v) cout << a << " ";
	////cout << endl;

	//cout << "내림차순: ";
	//sort(v.begin(), v.end(), [](int x, int y) {return x > y; });  //람다
	//for (auto& a : v) cout << a << " ";
	//cout << endl;



	//클래스를 가지는 벡터 정렬(클래스 속의 int형 변수 기준으로)
	vector<Player*> v;
	v.push_back(new Player(10, "p1"));
	v.push_back(new Player(30, "p2"));
	v.push_back(new Player(8, "p3"));
	v.push_back(new Player(15, "p4"));

	cout << "정렬 전: ";
	for (auto& a : v) cout << a->name << ":" << a->lv << ", ";
	cout << endl;

	cout << "정렬 후: ";
	sort(v.begin(), v.end(), classCompare);  //함수 사용
	for (auto& a : v) cout << a->name << ":" << a->lv << ", ";
	cout << endl;

	cout << "내림차순: ";
	sort(v.begin(), v.end(), [](Player* p1, Player* p2) {return p1->lv > p2->lv; });  //람다 사용
	for (auto a : v) cout << a->name << ":" << a->lv << ", ";
	cout << endl;
}
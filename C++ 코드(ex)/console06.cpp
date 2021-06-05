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
	//���� ����
	//vector<int> v;
	//v.push_back(3);
	//v.push_back(-1);
	//v.push_back(0);
	//v.push_back(10);
	//v.push_back(7);

	//cout << "���� ��:  ";
	//for (auto a : v) cout << a << " ";
	//cout << endl;

	//cout << "���� ��: ";
	//sort(v.begin(), v.end());   //int arr[10]  ---> sort(arr,arr+10)
	//for (auto& a : v) cout << a << " ";  
	//cout << endl;

	//cout << "��������: ";
	//sort(v.begin(), v.end(), greater<>());  //greater
	//for (auto a : v) cout << a << " ";
	//cout << endl;

	//cout << "��������: ";
	//sort(v.begin(), v.end(), less<>());  //less
	//for (vector<int>::iterator a = v.begin(); a != v.end(); a++) cout << *a << " ";
	//cout << endl;

	////cout << "��������: ";
	////sort(v.begin(), v.end(), compare);  //compare �Լ�
	////for (auto& a : v) cout << a << " ";
	////cout << endl;

	//cout << "��������: ";
	//sort(v.begin(), v.end(), [](int x, int y) {return x > y; });  //����
	//for (auto& a : v) cout << a << " ";
	//cout << endl;



	//Ŭ������ ������ ���� ����(Ŭ���� ���� int�� ���� ��������)
	vector<Player*> v;
	v.push_back(new Player(10, "p1"));
	v.push_back(new Player(30, "p2"));
	v.push_back(new Player(8, "p3"));
	v.push_back(new Player(15, "p4"));

	cout << "���� ��: ";
	for (auto& a : v) cout << a->name << ":" << a->lv << ", ";
	cout << endl;

	cout << "���� ��: ";
	sort(v.begin(), v.end(), classCompare);  //�Լ� ���
	for (auto& a : v) cout << a->name << ":" << a->lv << ", ";
	cout << endl;

	cout << "��������: ";
	sort(v.begin(), v.end(), [](Player* p1, Player* p2) {return p1->lv > p2->lv; });  //���� ���
	for (auto a : v) cout << a->name << ":" << a->lv << ", ";
	cout << endl;
}
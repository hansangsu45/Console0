#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

class Vector3
{
private:
	double x;
	double y;
	double z;
public:
	Vector3(int x, int y, int z) :x(x), y(y), z(z) {}

	void Coord()
	{
		cout << "x: " << x << " " << "y: " << y << " " << "z: " << z << endl;
	}

	Vector3 operator+(const Vector3& v) {
		return Vector3(x + v.x, y + v.y, z + v.z);
	}
	Vector3 operator-(const Vector3& v) {
		return Vector3(x - v.x, y - v.y, z - v.z);
	}
};

void Print(int n) {
	cout << n << " ";
}

inline int func1(int x) {
	return x * x / 2;
}

int main()
{
	//operator 연산자 재정의
	/*Vector3 myPos(3.3,9.1,-5);
	Vector3 otherPos(0, 7.76, -19.8);
	myPos.Coord();
	otherPos.Coord();

	Vector3 vec = myPos + otherPos;
	vec.Coord();
	vec = otherPos.operator-(myPos);
	vec.Coord();*/

	//for_each
	//int arr[10]{ 1,10,100,1000,10000,100000,1000000 };
	//for_each(arr, &arr[4], Print);  //v.begin(),v.end()
	//cout << endl;

	//for_each(arr, arr + 10, [](int x) {cout << x << " "; });
	//cout << endl;  

	//inline (실행 속도가 빨라짐. 실행파일의 크기가 커짐)
	/*int x = func1(10);
	cout << x;*/
}
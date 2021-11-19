#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//변환 행렬
#define PI 3.141592
#define E 2.71

template<typename T>
class vector2
{
private:
	T x;
	T y;
public:
	vector2() {}
	vector2(T x, T y) : x(x), y(y) {}
	T getX() const { return x; }
	T getY() const { return y; }
	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
};

template<typename T>
void transformVector2(vector2<T>* pos, vector<vector<T>> matrix)
{
	T result[3];

	T matrix3x1[3];
	matrix3x1[0] = pos->getX();
	matrix3x1[1] = pos->getY();
	matrix3x1[2] = 1;

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += matrix[i][j] * matrix3x1[j];
		}
		result[i] = sum;
	}

	pos->setX(result[0]);
	pos->setY(result[1]);
}

int main()
{
	vector2<double>* position = new vector2<double>(6.23, -3.102);

	transformVector2<double>(position, { {3.5,0,0}, {0,-2,0}, {0,0,1} });
	cout << "Scaling Vector2: ( " << position->getX() << " , " << position->getY() << " )" << endl;

	double rot = -PI / 6;
	transformVector2<double>(position, { {cos(rot),-sin(rot),0}, {sin(rot),cos(rot),0}, {0,0,1} });
	cout << "Rotation Vector2 ( " << position->getX() << " , " << position->getY() << " )" << endl;

	transformVector2<double>(position, { {1,0,1.4}, {0,1,-8}, {0,0,1} });
	cout << "Translation Vector2 ( " << position->getX() << " , " << position->getY() << " )" << endl;

	return 0;
}#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//변환 행렬
#define PI 3.141592
#define E 2.71

template<typename T>
class vector2
{
private:
	T x;
	T y;
public:
	vector2() {}
	vector2(T x, T y) : x(x), y(y) {}
	T getX() const { return x; }
	T getY() const { return y; }
	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
};

template<typename T>
void transformVector2(vector2<T>* pos, vector<vector<T>> matrix)
{
	T result[3];

	T matrix3x1[3];
	matrix3x1[0] = pos->getX();
	matrix3x1[1] = pos->getY();
	matrix3x1[2] = 1;

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += matrix[i][j] * matrix3x1[j];
		}
		result[i] = sum;
	}

	pos->setX(result[0]);
	pos->setY(result[1]);
}

int main()
{
	vector2<double>* position = new vector2<double>(6.23, -3.102);

	transformVector2<double>(position, { {3.5,0,0}, {0,-2,0}, {0,0,1} });
	cout << "Scaling Vector2: ( " << position->getX() << " , " << position->getY() << " )" << endl;

	double rot = -PI / 6;
	transformVector2<double>(position, { {cos(rot),-sin(rot),0}, {sin(rot),cos(rot),0}, {0,0,1} });
	cout << "Rotation Vector2 ( " << position->getX() << " , " << position->getY() << " )" << endl;

	transformVector2<double>(position, { {1,0,1.4}, {0,1,-8}, {0,0,1} });
	cout << "Translation Vector2 ( " << position->getX() << " , " << position->getY() << " )" << endl;

	return 0;
}
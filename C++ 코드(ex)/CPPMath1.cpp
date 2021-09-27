#include <iostream>
#include <math.h>
#include<vector>
#include<string>
using namespace std;

vector<double> answer;

double getFuncValue(double x) //���� x���� ���� �Լ��� ����
{
    return pow(x, 5) - 10 * pow(x, 3) + x + 3;
}

bool checkDiffSign(double a, double b)
{
    double m = getFuncValue(a);
    double n = getFuncValue(b);
    bool c = false;

    if (m == 0) {
        c = true;
        answer.push_back(m);
    }
    if (n == 0) {
        c = true;
        answer.push_back(n);
    }
    if (c) return false;

    if ((m > 0 && n < 0) || (m < 0 && n > 0)) return true;
    else return false;
}

void SetErrorRange(int& n)
{
    string s, tempS = "";
    cout << "���� ���� �Է�(1/n): ";
    cin >> s;

    for (int i = 2; i < s.size(); i++) {
        tempS += s[i];
    }
    try {
        n = stoi(tempS);
    }
    catch (exception e)
    {
        cout << "�Է� ���� �߻�" << endl;
        exit(0);
    }
}

int main()
{
    double a, b, c;  //a��b�� ����, c�� (a+b)/2�� �ӽ÷� ����
    int n;  //�ݺ� Ƚ��
    int count = 0; //��������� �ݺ� Ƚ��

    const int bigCount = 100000;  //������ �˾Ƽ� ã�� �� �� ������ ã����
    int currentCnt = 0;  //���� �˾Ƽ� ã�� �� ������� �� �� �ݺ��ߴ���

    bool rangeCheck = false;  //��ȣ�� �ٸ��� üũ

    //cout << "���� �Է�: ";
    //cin >> a;
    //cin >> b;
    a = -1;
    b = 1;
    SetErrorRange(n);
    //if (b > a) swap(a, b);

ONE:

    if (checkDiffSign(a, b))
    {
        rangeCheck = true;
        while (count < n)
        {
            c = (a + b) / 2;

            if (checkDiffSign(a, c))
            {
                b = c;
            }
            else
            {
                a = c;
            }
            count++;

            if (answer.size() > 0) break;
        }
    }
    else
    {
        if (answer.size() == 0)
        {
            a--;
            b++;
            currentCnt++;

            if (currentCnt < bigCount)
                goto ONE;
            //cout << "�ش� ���������� ���� ���缺�� �ľ��� �� �����ϴ�."<<endl;
        }
    }

    if (answer.size() > 0)
    {
        cout << "��: ";
        for (auto t : answer) cout << t << " " << endl;
    }
    if (rangeCheck)
        cout << "���� ����: " << a << " ~ " << b << endl;

}
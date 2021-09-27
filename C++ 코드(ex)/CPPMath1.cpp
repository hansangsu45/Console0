#include <iostream>
#include <math.h>
#include<vector>
#include<string>
using namespace std;

vector<double> answer;

double getFuncValue(double x) //받은 x값에 대한 함숫값 리턴
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
    cout << "오차 범위 입력(1/n): ";
    cin >> s;

    for (int i = 2; i < s.size(); i++) {
        tempS += s[i];
    }
    try {
        n = stoi(tempS);
    }
    catch (exception e)
    {
        cout << "입력 오류 발생" << endl;
        exit(0);
    }
}

int main()
{
    double a, b, c;  //a와b는 구간, c는 (a+b)/2를 임시로 담음
    int n;  //반복 횟수
    int count = 0; //현재까지의 반복 횟수

    const int bigCount = 100000;  //구간을 알아서 찾을 때 몇 번까지 찾을지
    int currentCnt = 0;  //구간 알아서 찾을 때 현재까지 몇 번 반복했는지

    bool rangeCheck = false;  //부호가 다른지 체크

    //cout << "구간 입력: ";
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
            //cout << "해당 범위에서의 해의 존재성을 파악할 수 없습니다."<<endl;
        }
    }

    if (answer.size() > 0)
    {
        cout << "해: ";
        for (auto t : answer) cout << t << " " << endl;
    }
    if (rangeCheck)
        cout << "해의 범위: " << a << " ~ " << b << endl;

}
#include <iostream>
using namespace std;

int main()
{

    //마름모 만들기
    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        for (int j = 0; j < i * 2 + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }

        for (int j = (n - i - 1) * 2 + 1; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        for (int j = 0; j < i * 2 + 1; j++) {
            if (j == 0 || j == i * 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }

        for (int j = (n - i - 1) * 2 + 1; j > 0; j--) {
            if (j == (n - i - 1) * 2 + 1 || j == 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }


    //원 그리기

    int r = 10;

    for (int x = -r; x <= r; x++) {
        for (int y = -r; y <= r; y++) {
            if (x * x + y * y <= r * r)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    /*cout << endl;

    for (int x = -r; x <= r; x++) {
        for (int y = -r; y <= r; y++) {
            if (x * x + y * y == r * r)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }*/
}



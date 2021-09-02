#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> a, vector<vector<int>> b)
{
    vector<int> an;
    vector<int> x;

    for (int i = 0; i < b.size(); i++)
    {
        for (int j = b[i][0] - 1; j < b[i][1]; j++)
        {
            x.push_back(a[j]);
        }

        sort(x.begin(), x.end());  //Á¤·Ä
        an.push_back(x[b[i][2] - 1]);

        x.clear();
    }

    return an;
}

int main()
{
    vector<int> v = { 1,5,2,6,3,7,4 };

    vector<vector<int>> vv = { {2,5,3}, {4,4,1}, {1,7,3} };

    vector<int> answer = solution(v, vv);

    cout << "[ ";
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i];

        cout << ", ";
    }
    cout << "]";
}
#include <iostream>
#include<vector>
#include<set>
//#include<map>
using namespace std;

//string solution(vector<string> participant, vector<string> completion) {
//
//    string answer = "";
//    map<string, short> m;
//    int i;
//
//    for (i = 0; i < participant.size(); ++i) {
//        m.insert(pair<string, short>(participant[i], 0));
//    }
//    for (i = 0; i < completion.size(); ++i) {
//        m[completion[i]] = 1;
//    }
//
//    for (i = 0; i < participant.size(); ++i) {
//        if (m[participant[i]]==0) {
//            answer = participant[i];
//            break;
//        }
//        else if (m[participant[i]] == 2) {
//            answer = participant[i];
//            break;
//        }
//        else {
//            m[participant[i]] = 2;
//        }
//    }
//
//    return answer;
//}

string solution(vector<string> participant, vector<string> completion) {
    multiset<string> s;
    int i;
    string answer;

    for (i = 0; i < completion.size(); ++i) {
        s.insert(completion[i]);
    }

    set<string>::iterator si;
    for (vector<string>::iterator it = participant.begin(); it != participant.end(); it++)
    {
        si = s.find(*it);
        if (si != s.end())
        {
            s.erase(si);
        }
        else {
            answer = *it;
            break;
        }
    }

    return answer;
}



int main()
{
    vector<string> a = { "leo", "kiki", "eden" };
    vector<string> b = { "eden", "kiki" };

    vector<string> c = { "marina", "josipa", "nikola", "vinko", "filipa" };
    vector<string> d = { "josipa", "filipa", "marina", "nikola" };

    vector<string> e = { "mislav", "stanko", "mislav", "ana" };
    vector<string> f = { "stanko", "ana", "mislav" };

    cout << solution(a, b) << "\n" << solution(c, d) << "\n" << solution(e, f);
}








//cout<< _rotl(4,2);  //비트 회전연산 (왼쪽으로 2번)
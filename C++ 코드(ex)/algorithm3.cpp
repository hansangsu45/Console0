//���� ��ȣ (C#) (C++�� �Ѱ� C#���� �ϴϱ� �� ��)
//public class Solution {
//    public string solution(string s, int n) {
//        string answer = "";
//
//        for (int i = 0; i < s.Length; i++) {
//
//            if (s[i] == ' ') {
//                answer += " ";
//                continue;
//            }
//
//            char c = (char)((int)s[i] + n);
//
//            if (c > 'Z' && s[i] <= 'Z')
//            {
//                int k = (int)c - (int)'Z';
//                c = (char)('A' - 1 + k);
//            }
//            else if (c > 'z')
//            {
//                int k = (int)c - (int)'z';
//                c = (char)('a' - 1 + k);
//            }
//
//            answer += c;
//        }
//
//        return answer;
//    }
//}

//���� ��ȣ   (C++�� ���α׷��ӽ����� �ش� ���� Ǯ�����ϴµ� �ð�����?���� ������ �ȵ�)
//string solution(string s, int n) 
//{
//    string answer = "";
//
//    for (int i = 0; i < s.size(); i++) {
//
//        if (s[i] == ' ') {
//            answer += " ";
//            continue;
//        }
//
//        char c = s[i] + n;
//
//        if (c>'Z' && s[i]<='Z')
//        {
//            int k = c - 'Z';
//            c = 'A' - 1 + k;
//        }
//        else if (c > 'z')
//        {
//            int k = c - 'z';
//            c = 'a' - 1 + k;
//        }
//
//        answer += c;
//    }
//
//    return answer;
//}

//����� ����
//vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
//    vector<vector<int>> answer;
//
//    for (int i = 0; i < arr1.size(); i++) {
//        vector<int> v;
//        answer.push_back(v);
//        for (int j = 0; j < arr1[i].size(); j++) {
//            answer[i].push_back(arr1[i][j] + arr2[i][j]);
//        }
//    }
//
//    return answer;
//}
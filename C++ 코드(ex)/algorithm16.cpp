//�� ��ȣ ������
//string solution(string phone_number) {
//    string answer = "";
//    int l = phone_number.size();
//
//    for (int i = 0; i < l; i++) {
//        if (i < l - 4) {
//            answer += "*";
//        }
//        else {
//            answer += phone_number[i];
//        }
//    }
//
//    return answer;
//}

// x��ŭ ������ �ִ� n���� ����
//vector<long long> solution(int x, int n) {
//    vector<long long> answer;
//    long long m = x;
//
//    for (int i = 0; i < n; i++)
//    {
//        answer.push_back(m);
//        m += x;
//    }
//
//    return answer;
//}


//���簢�� 
//int main(void) {
//    int a;
//    int b;
//
//    scanf_s("%d %d", &a, &b);
//
//    for (int i = 0; i < b; i++) {
//        for (int j = 0; j < a; j++) {
//            printf("%c", '*');
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
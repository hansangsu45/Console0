//폰 번호 가리기
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

// x만큼 간격이 있는 n개의 숫자
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


//직사각형 
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
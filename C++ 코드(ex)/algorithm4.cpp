//�ִ�����, �ּҰ����
//vector<int> solution(int n, int m) {
//    vector<int> answer;
//
//    int b = n > m ? n : m;
//    
//    int max = 1, min = 1000000;
//
//    for (int i = 1; i <= b; i++) {
//        if (n % i == 0 && m % i == 0) max = i;
//    }
//    for (int i = b; i <= 1000000; i += b) {
//        if (i % n == 0 && i % m == 0) {
//            min = i;
//            break;
//        }
//    }
//
//    answer.push_back(max);
//    answer.push_back(min);
//
//    return answer;
//}

//����� ��
//int solution(int n) {
//    int answer = 0;
//
//    for (int i = 1; i <= n; ++i) {
//
//        if (i == 1 || i == n) {
//            answer += i;
//            continue;
//        }
//
//        if (n % i == 0) answer += i;
//
//    }
//
//    return answer;
//}

//n������ �Ҽ��� �� (�����佺�׳׽��� ü)
//int solution(int n) {
//    int answer = 0;
//
//    bool* arr = new bool[n+1] {false,};
//    int j;
//
//    for (int i = 2; i <= n; i++) {
//        if (!arr[i]) {
//            answer++;
//
//            for (j = i; j <= n; j += i) arr[j] = true;
//        }
//    }
//
//    delete arr;
//    return answer;
//}
//n������ �Ҽ��� ��
//int solution(int n) {
//    int answer = 0;
//
//    for (int i = 2; i <= n; ++i) {
//        for (int j = 2; j <= sqrt(i); j++) {
//            if (i % j == 0)
//            {
//                answer--;
//                break;
//            }
//        }
//        answer++;
//    }
//
//    return answer;
//}
// Created by InQ_변해빈

int inq_atoi(char *str) {
    int idx = 0;
    int sign = 1; // deafult = 1 [ 양수 ]
    long long result = 0;

    // Step 1. 앞에서부터 공백 검사, 공백이 없는 첫 번째 인덱스 찾기
    while (str[idx] == ' ')
        idx++;

    // Step 2. 공백이 끝나는 시점에 부호 검사, 부호 없다면 Step 3으로 skip
    if (str[idx] == '+' || str[idx] == '-') {
        if (str[idx] == '-')
            sign = -1; // 음수라면 부호 -1 표시
        idx++;         // 다음 인덱스로 이동
    }

    // Step 3. 숫자로 이루어진 문자열 검사. 숫자가 오지 않을 때 까지 while Loop
    while (str[idx] >= '0' && str[idx] <= '9') {
        result *= 10;   // 자릿수 증가
        result += (int) (str[idx] - '0');
        idx++;
    }
    return (int) result * sign;
}
//#include <stdio.h>
//
//int main(void) {
//    printf("%d\n", inq_atoi("              -2147483647"));
//}
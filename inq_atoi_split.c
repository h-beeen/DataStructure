// Created by InQ_변해빈

int is_space(char *str, int idx) {
    while (str[idx] == ' ')
        idx++;
    return idx;
}

int is_flag(char *str, int idx) {
    if (str[idx] == '-')
        return -1;
    else if (str[idx] == '+')
        return 1;
    else
        return 0;
}




int inq_atoi(char *str) {
    long long result = 0;
    int idx = is_space(str, 0);
    int sign = is_flag(str, idx);
    if (sign == 1) idx++;

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
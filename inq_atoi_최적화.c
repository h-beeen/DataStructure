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

int is_number(char *str, int idx, int sign) {
    if (sign == 1 || sign == -1) idx++;
    long long result = 0;
    while (str[idx] >= '0' && str[idx] <= '9') {
        result = result * 10 + (str[idx] - '0');
        idx++;
    }
    return (int) result * sign;
}

int inq_atoi(char *str) {
    int idx = is_space(str, 0);
    int sign = is_flag(str, idx);
    int result = is_number(str, idx, sign);
    return result;
}

#include <stdio.h>

int main(void) {
    printf("%d\n", inq_atoi("       -2147483648"));
}
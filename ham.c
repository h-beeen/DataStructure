# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int num1, num2, num3, num4, a, b, sum1, sum2, n;
int arr[4];

int a = 3;

int main(void) {
    for (int i = 0; i < 4; i++) {
        printf("정수값을 입력하시오:");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 4; i++) {
        if (arr[i] >= 100)
            a += 1;
        else if (arr[i] >= 0)
            b += 1;
    }

    printf("1.큰 수 (100 이상의 숫자)개수:%d 작은 수 (0 이상 100 미만의 숫자)개수:%d\n", a, b);

    if (a > b)
        printf("2.큰 수 개수가 작은 수 개수보다 %d개 더 많다\n", a - b);

    else if (a < b)
        printf("2.작은 수 개수가 큰 수 개수보다 %d개 더 많다\n", b - a);

    else
        printf("2.큰 수 개수와 작은 수 개수는 같다\n");

    printf("3. 음수 값을 제외한 입력된 모든 숫자 통계\n");

    if (num1 >= 0)
        sum1 = sum1 + num1,
                n = n + 1;
    else
        sum2 = sum2 + num1;

    if (num2 >= 0)
        sum1 = sum1 + num2,
                n = n + 1;
    else
        sum2 = sum2 + num2;

    if (num3 >= 0)
        sum1 = sum1 + num3,
                n = n + 1;
    else
        sum2 = sum2 + num3;

    if (num4 >= 0)
        sum1 = sum1 + num4,
                n = n + 1;
    else
        sum2 = sum2 + num4;


    if (sum1 == 0)
        printf("입력된 모든 숫자가 음수값이어서 결과가 없습니다.\n");
    else {
        printf("1)음수 값을 제외한 입력된 모든 숫자의 합계:%d\n", sum1);
        printf("2)음수 값을 제외한 입력된 모든 숫자의 평균:%f\n", (double) sum1 / n);
    }
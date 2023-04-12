// 경제학부 201811210 변해빈
// 자료구조론 과제 제출

#include <stdio.h>

void hanoi(int n, char dst, char tmp, char to) {
    if(n == 1)
        printf("원판 1: %c -> %c\n", dst, to);
    else {
        for(int i=1; i<n; i++) {
            hanoi(i, dst, to, tmp);
            printf("원판 %d: %c -> %c\n", n, dst, to);
            hanoi(i, tmp, dst, to);
        }
    }
}

double power(double x, int n){
    double result = 1.0;
    for(int i = 0; i < n; i++)
        result *= x;
    return result;
}

int main(void){
    hanoi(4, 1, 3, 2);
}
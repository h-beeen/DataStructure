double power_en(double x, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) // 제곱하려는 수가 짝수라면
        return power_en(x * x, n / 2);
    else
        return (x * power_en(x * x, (n - 1) / 2));
}

double power_it(double x, int n) {
    double tmp = 1;
    for (int i = 0; i < n; i++)
        tmp *= x;
    return tmp;
}

    double res = 1;
    if (n == 0)
        return 1;
    else
        return (x * power_rec(x, n - 1));
}


#include <stdio.h>

int main(void) {
    printf("%f\n", power_en(2, 10));
    printf("%f\n", power_it(2, 10));
    printf("%f", power_rec(2, 10));
}
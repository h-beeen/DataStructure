
int factorial(int n){
    if (n == 1)
        return 1;
    else
        return (n * factorial(n-1));
}

#include <stdio.h>
int main(void){
    printf("%d", factorial(5));
}
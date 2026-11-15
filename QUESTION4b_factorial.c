#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    if (num > 20) {
        printf("Number too large: the result would overflow long long.\n");
        return 1;
    }
    printf("Factorial of %d = %lld\n", num, factorial(num));
    return 0;
}

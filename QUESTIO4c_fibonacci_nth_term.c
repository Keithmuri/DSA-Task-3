#include <stdio.h>

int fibonacciTerm(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibonacciTerm(n - 1) + fibonacciTerm(n - 2);
}

int main() {
    int n;
    printf("Enter the term number N (N >= 1): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. N must be at least 1.\n");
        return 1;
    }
    printf("Term %d of the Fibonacci series is: %d\n", n, fibonacciTerm(n));
    return 0;
}

#include <stdio.h>

void fibonacciSeries(int count, int a, int b) {
    if (count == 0) return;
    printf("%d ", a);
    fibonacciSeries(count - 1, b, a + b);
}

int main() {
    int n;
    printf("Enter the number of terms (N >= 1): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. N must be at least 1.\n");
        return 1;
    }
    printf("First %d terms of the Fibonacci series: ", n);
    fibonacciSeries(n, 0, 1);
    printf("\n");
    return 0;
}

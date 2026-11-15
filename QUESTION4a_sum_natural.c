#include <stdio.h>

int sumNatural(int n) {
    if (n == 1) return 1;
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    printf("Enter a positive integer N: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. N must be a positive integer.\n");
        return 1;
    }
    printf("Sum of the first %d natural numbers = %d\n", n, sumNatural(n));
    return 0;
}

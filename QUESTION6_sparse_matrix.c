#include <stdio.h>
#define ROWS 4
#define COLS 5

int main() {
    int i,j;
    int matrix[ROWS][COLS] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };
    int sparse[ROWS * COLS + 1][3];
    int k = 1;

    printf("Original matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
        printf("\n");
    }

    sparse[0][0] = ROWS;
    sparse[0][1] = COLS;
    sparse[0][2] = k - 1;

    printf("\nTriplet representation:\n");
    printf("Row\tCol\tValue\n");
    for (int i = 0; i < k; i++)
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);

    return 0;
}

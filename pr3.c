#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int row_sum[MAX_SIZE], col_sum[MAX_SIZE];
    int n;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < n; i++) {
        row_sum[i] = 0;
        for (int j = 0; j < n; j++) {
            row_sum[i] += matrix[i][j];
        }
    }

    // Calculate column sums
    for (int j = 0; j < n; j++) {
        col_sum[j] = 0;
        for (int i = 0; i < n; i++) {
            col_sum[j] += matrix[i][j];
        }
    }

    // Print row sums
    printf("Row sums:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    // Print column sums
    printf("Column sums:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");

    return 0;
}
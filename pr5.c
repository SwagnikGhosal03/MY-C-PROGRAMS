#include <stdio.h>

int main() {
    int n, i, j;

    // Prompt user for matrix size
    printf("Enter the number of rows and columns for a square matrix: ");
    scanf("%d", &n);

    // Create an empty matrix of size n x n
    int matrix[n][n];

    // Fill matrix with user inputs
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element at row %d column %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
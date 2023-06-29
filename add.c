#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The leading diagonal elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\nThe trailing diagonal elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n-i-1]);
    }

    return 0;
}
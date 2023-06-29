#include <stdio.h>
void transpose(int matrix[10][10], int rows, int cols) {
    int i, j, temp;
    for(i = 0; i < rows; i++) {
        for(j = i+1; j < cols; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
int main() {
    int m, n, i, j;
    int matrix[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for(i = 0; i <m; i++) {
        for(j = 0; j <n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    transpose(matrix, m, n);
    printf("Transposed Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
   int n, i, j;
   printf("Enter the size of the square matrix: ");
   scanf("%d", &n);
   int mat[n][n];

   // Input the matrix
   printf("Enter the elements of the matrix:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &mat[i][j]);
      }
   }

   // Display the upper triangular matrix
   printf("The upper triangular matrix is:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         if (j >= i) {
            printf("%d ", mat[i][j]);
         } else {
            printf("0 ");
         }
      }
      printf("\n");
   }

   // Display the lower triangular matrix
   printf("The lower triangular matrix is:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         if (j <= i) {
            printf("%d ", mat[i][j]);
         } else {
            printf("0 ");
         }
      }
      printf("\n");
   }

   return 0;
}
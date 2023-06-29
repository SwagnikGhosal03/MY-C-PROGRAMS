#include<stdio.h>
int main ()
{
int r,c;
printf("enter number of rows & coloums");
scanf("%d %d",&r,&c);
int arr[r][c];
printf("enter the matrix");
for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++){
        scanf("%d",&arr[i][j]);
    }  
}
printf("the transposed matrix is :\n");
for (int i = 0; i < c; i++){
    for (int j = 0; j < r; j++){
        printf("%d ",arr[j][i]);
    }  printf("\n");
}
return 0;
}
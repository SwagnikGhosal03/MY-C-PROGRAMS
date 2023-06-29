#include<stdio.h>
int main(){
int r1,r2,c1,c2;
printf("enter the number of rows & coloums for the first matrix\n");
scanf("%d %d",&r1,&c1);
printf("enter the number of rows & coloums for the second matrix\n");
scanf("%d %d",&r2,&c2);
if(c2!=r1) printf("the matrices cannot be multiplied\n");
else{
int a[r1][c1],b[r2][c2],ans[r1][c2];
printf("enter the first matrix elements\n");
for (int i = 0; i <r1; i++){
   for (int j = 0; j < c1; j++){
    scanf("%d",&a[i][j]);
   }
}
printf("enter the second matrix elements\n");
for (int i = 0; i <r2; i++){
   for (int j = 0; j < c2; j++){
    scanf("%d",&b[i][j]);
   }
}
for (int i = 0; i < r1; i++){
    for (int j = 0; j < c2; j++){
        ans[i][j]=0;
        for (int k = 0; k <c1; k++){
            ans[i][j]+=a[i][k]*b[k][j];
        } 
    } 
}
printf("the result is\n");
for (int i = 0; i < r1; i++){
   for (int j = 0; j < c2; j++){
    printf("%d ",ans[i][j]);
   }printf("\n");
}
}
return 0;
}
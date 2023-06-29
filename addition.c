#include<stdio.h>
int main ()
{
int arr[3][3],brr[3][3],sum[3][3],i,j;
printf("enter 1st array elements\n");
for (int i = 0; i < 3; i++)
{
   for (int j = 0; j < 3; j++)
   {
    scanf("%d",&arr[i][j]);
   }
   
}
printf("enter 2nd array elements\n");
for (int i = 0; i < 3; i++)
{
   for (int j = 0; j < 3; j++)
   {
    scanf("%d",&brr[i][j]);
   }
}
for (int i = 0; i < 3; i++)
{    
   for (int j = 0; j < 3; j++)
   {
    sum[i][j]=arr[i][j]+brr[i][j];
   }
}
printf("the sum is:");
for (int i = 0; i < 3; i++)
{
   for (int j = 0; j < 3; j++)
   {
    printf("%d\t",sum[i][j]);
   }printf("\n");
}
return 0;
}
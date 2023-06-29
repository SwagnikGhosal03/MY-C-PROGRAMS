#include<stdio.h>
int main ()
{
int arr[5],i;
int product=1;
for ( i = 0; i <5; i++)
{
    scanf("%d\n",&arr[i]);
}
for ( i = 0; i < 5; i++)
{
    product=product* arr[i];
}
printf("product=%d",product);
return 0;
}
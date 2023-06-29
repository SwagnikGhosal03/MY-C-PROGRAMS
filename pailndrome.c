#include<stdio.h>
int main ()
{
int arr[5]={1,2,3,2,1};
int brr[5];
int i;
for ( i = 0; i <5; i++)
{
    brr[i]=arr[4-i];
}
for ( i = 0; i < 5; i++)
{
    printf("%d ",brr[i]);
}
if (arr[i]=brr[i])
{
    printf("the array is a palindrome %d",arr[i]);
}
else
{
    printf("the array is not a palindrome");
}
return 0;
}
#include<stdio.h>
int main ()
{
int arr[5]={2,3,6,8,9};
int max=0;
int smax=0;
for (int i = 0; i < 5; i++)
{
    if (max<arr[i])
    {
        max=arr[i];
    }  
}
for (int i = 0; i < 5; i++)
{
    if(arr[i]!=max && smax<arr[i])
    smax=arr[i];
}
printf("the second largest element is %d",smax);
return 0;
}
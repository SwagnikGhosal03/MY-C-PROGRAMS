#include<stdio.h>
int main ()
{
int arr[3]={2,3,4};
int min=arr[0];
for (int i = 0; i < 3; i++)
{
    if (min>arr[i])
    {
        min=arr[i];
    }
    
}
printf("the minimum value is %d",min);
return 0;
}
#include<stdio.h>
int main ()
{
int x=4,count=0;
int arr[5]={1,2,3,35,5,};
for (int i = 0; i < 5; i++)
{
    if (arr[i]>x)
    {
        count++;
    }
    
}printf("the number of elements are %d",count);

return 0;
}
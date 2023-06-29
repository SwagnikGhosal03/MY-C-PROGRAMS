#include<stdio.h>
int main ()
{
int arr[6]={1,2,3,4,5,6};
for (int i = 0; i < 6; i++)
{
    if(i%2==0)
    arr[i]=arr[i]+10;
    else
    {
        arr[i]=arr[i]*2;
    }
    printf("%d\t",arr[i]);
}

return 0;
}
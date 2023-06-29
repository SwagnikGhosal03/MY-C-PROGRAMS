#include<stdio.h>
int main ()
{
int arr[6]={1,5,7,8,9,2};
int sumodd=0;
int sumeven=0;
for (int i = 0; i < 6; i++)
{
    if (i%2!=0)
    
        sumodd+=arr[i];
        else
        {
            sumeven+=arr[i];
        }
        int res=sumeven-sumodd;
        printf("%d",res);
}
return 0;
}
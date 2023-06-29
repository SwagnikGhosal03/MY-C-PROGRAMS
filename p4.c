#include<stdio.h>
int main ()
{
int n,x,oddsum=0,evensum=0;
printf("enter a number");
scanf("%d",&n);
while (n!=0)
{
    x=n%10;
    n/=10;
    if(x%2==0)
    {
        evensum+=x;
    }
    else oddsum+=x;
}
printf("ans=%d",oddsum-evensum);
return 0;
}
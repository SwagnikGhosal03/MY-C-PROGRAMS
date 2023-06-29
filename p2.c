#include<stdio.h>
int main ()
{
    int n,sum=0,t=1;
printf("enter the number of terms");
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
sum+=((1*i)/(2*i))*t;
t=(-1)*t;
}
printf("sum=%d",sum);
return 0;
}
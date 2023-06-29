#include<stdio.h>
#include<math.h>
int main ()
{
int a,b,sum=0;
printf("enter a,b");
scanf("%d %d",&a,&b);
while (b!=0)
{
    sum=sum+pow(a,b);
    a--;
    b--;
}
printf("sum=%d",sum);
return 0;
}
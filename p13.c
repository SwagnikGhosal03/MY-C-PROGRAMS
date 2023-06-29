#include<stdio.h>
int main ()
{
int n1=5,n2=8,n3,n;
printf("enter the number of terms");
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
    n3=n1+n2;
    printf("%d\t",n1);
    n1=n2;
    n2=n3;
}
return 0;
}
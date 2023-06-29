#include<stdio.h>
int main ()
{
int n,i,j;
printf("enter number of rows");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{  int a=1;
    if (i%2!=0)
{
     for ( j = 1; j<=i; j++)
     {
        printf("%d ",j);
     }    
}
else
{
    for ( j = 1; j <=i; j++)
    {
        int d=a+64;
        char ch=(char)d;
        printf("%c ",ch);
        a++; 
}
}
printf("\n");
}
return 0;
}
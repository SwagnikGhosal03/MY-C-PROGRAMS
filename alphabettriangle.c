#include<stdio.h>
int main ()
{
int i,j;
for ( i = 1; i <=5; i++)
{
    int a=1;
    for ( j = 1; j <=5-i; j++)
    {
      printf(" ");
    }
    for ( j = 1; j <=i; j++)
    {
        int d=a+64;
        char ch=(char)d;       
        printf("%c",ch);
        a++;
    }
    printf("\n");
}
return 0;
}
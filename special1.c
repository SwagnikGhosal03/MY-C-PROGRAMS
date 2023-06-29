#include<stdio.h>
int main ()
{
int i,j,k,n;
printf("enter number of rows");
scanf("%d",&n);
for ( i = 1; i <=n; i++){
    int a=1;
    for ( j = 1; j<=n-i; j++)
    {
        printf(" ");
    }
      for ( j = 1; j <=i; j++)
      {
           printf("%d",j);
      }
       for (k = 1; k <=i-1;k++)
       {
        printf("%d",a);
        a++;
       }printf("\n");    
}

return 0;
}
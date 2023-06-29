#include<stdio.h>
void main ()
{
int i,j,k;
int a=1;
for ( i = 1; i <=5; i++)
{
    for(j=1;j<=5-i;j++){
     printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("%d",a++);
        a++;
    }
    for (k = 1; k<=i-1; k++){

     printf("%d",a);

    }printf("\n");      
    }
    
}

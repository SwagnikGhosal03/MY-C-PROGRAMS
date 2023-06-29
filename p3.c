#include<stdio.h>
int main ()
{
int n,rev=0,rem;
printf("enter a number");
scanf("%d",&n);
while (n!=0)
{
   rem=n%10;
   rev=rev*10+rem;
   n/=10;
}
printf("reverse=%d",rev);
if (rev==rem)
{
    printf("the number is a palindrome");
}
else 
printf("the number is not a palindrome");
return 0;
}
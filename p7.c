#include<stdio.h>
int main ()
{
char ch;
printf("enter a character");
scanf("%c",&ch);
if (ch>='a'&& ch<='z'){
   char ch1=ch-32;
printf("the upper case character is %c",ch1);
}
else if (ch>='A'&& ch<='Z'){
 char ch2=ch+32;
printf("the lower case character is %c",ch2);
}
return 0;
}
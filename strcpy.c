#include<stdio.h>
#include<string.h>
int main (){
char s1[25],s2[25],i;
puts("enter a string");
gets(s1);
for ( i = 0; s1[i]!='\0'; ++i)
{
   s2[i]=s1[i];
}
s2[i]='\0';
printf("you entered %s",s2);
return 0;
}
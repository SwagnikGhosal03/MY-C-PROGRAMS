#include<stdio.h>
#include<string.h>
int main (){
char s1[100],s2[100];
int i,j;
puts("enter 1st string");
gets(s1);
puts("enter 2nd string");
gets(s2);
for ( i = 0; s1[i]!='\0'; i++);
    for (j = 0; s2[j]!='\0'; j++)
    {
       s1[i+j]=s2[j];
    }
s1[i+j]='\0';
printf("concatenated string %s",s1);
return 0;
}
//count no of vowels using pointer
#include<stdio.h>
#include<string.h>
int main (){
char str[100];
char*ptr;
int count;
puts("enter a string");
gets(str);
ptr=str;
count=0;
while (*ptr!='\0'){
    if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
        count++;
        *ptr++; 
}
printf("the number of vowels in the string is %d ",count);
return 0;
}
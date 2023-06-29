#include<stdio.h>
int main (){
int s,m,h;
printf("enter time in seconds");
scanf("%d",&s);
h=s/3600;
m=s/60;
m=m%60;
s=s%60;
printf("h=%d m=%d s=%d",h,m,s);
return 0;
}
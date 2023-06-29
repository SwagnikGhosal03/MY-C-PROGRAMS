// marks and roll number of a student in an array
#include<stdio.h>
int main ()
{
int marks[10],i;
for ( i = 0; i <10; i++)
{
    printf("enter the marks of student number %d\n",i+1);
    scanf("%d",&marks[i]);
}
for ( i = 0; i <10; i++)
{
    if (marks[i]<35)
    printf("the roll number of the student is %d\n",i);
}
return 0;
}
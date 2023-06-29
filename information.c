//student information
#include <stdio.h>
struct student {
    char name[50];
    int roll_number;
    float marks;
};
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter the details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_number);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_number);
        printf("Marks: %.2f\n", s[i].marks);
    }
    return 0;
}
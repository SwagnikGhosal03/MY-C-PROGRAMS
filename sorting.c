//sorting student data
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNo;
    float marks;
};
void sortStudents(struct Student students[], int n) {
    int i, j;
    struct Student temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (students[j].marks < students[j+1].marks) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}
int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter the details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No.: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    sortStudents(students, n);
    printf("\nSorted student information based on marks:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No.: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
    }
}
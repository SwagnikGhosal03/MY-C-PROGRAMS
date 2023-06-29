//employee details
#include <stdio.h>
struct address {
    char street[50];
    char city[50];
    char state[50];
    int pincode;
};
struct employee {
    char name[50];
    int age;
    float salary;
    struct address addr;
};
int main() {
    struct employee emp;
    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", emp.name);
    printf("Age: ");
    scanf("%d", &emp.age);
    printf("Salary: ");
    scanf("%f", &emp.salary);
    printf("\nEnter employee address:\n");
    printf("Street: ");
    scanf("%s", emp.addr.street);
    printf("City: ");
    scanf("%s", emp.addr.city);
    printf("State: ");
    scanf("%s", emp.addr.state);
    printf("Pincode: ");
    scanf("%d", &emp.addr.pincode);
    printf("\nEmployee details:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);
    printf("\nEmployee address:\n");
    printf("Street: %s\n", emp.addr.street);
    printf("City: %s\n", emp.addr.city);
    printf("State: %s\n", emp.addr.state);
    printf("Pincode: %d\n", emp.addr.pincode);
    return 0;
}
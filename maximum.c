//maximum of 2 numbers using pointer
#include <stdio.h>
void max(int num1, int num2, int *result) {
    if (num1 > num2)
        *result = num1;
    else
        *result = num2;
}
int main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max(num1, num2, &result);
    printf("Maximum of %d and %d is %d\n", num1, num2, result);
    return 0;
}

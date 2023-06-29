//printing a string using pointer
#include <stdio.h>
void print_string(char *str) {
    while (*str != '\0') {
        printf("%c", *str);
        str++;
    }
}
int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);
    printf("entered String is: ");
    print_string(str);
    return 0;
}
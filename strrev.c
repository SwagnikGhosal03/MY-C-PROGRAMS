//reverse a string using pointer
#include <stdio.h>
#include <string.h>
void reverse_string(char *str){
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main(){
    char str[50];
    printf("Enter a string: ");
    gets(str);
    reverse_string(str);
    printf("Reversed string: %s", str);
    return 0;
}
#include <stdio.h>
int main(){
    char str[100];
    int i, j, len, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    for (len = 0; str[len] != '\0'; len++);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("the reverse of the string is %s\n",str);
    for (i = 0; i < len; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
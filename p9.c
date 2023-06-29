#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE], new_str[MAX_SIZE];
    int i, j;

    printf("Enter the first string: ");
    scanf("%[^\n]s", str1);

    printf("Enter the second string: ");
    scanf(" %[^\n]s", str2);

    // Copy the first string to the new string
    for (i = 0; str1[i] != '\0'; i++) {
        new_str[i] = str1[i];
    }

    // Concatenate the second string to the new string
    for (j = 0; str2[j] != '\0'; j++) {
        new_str[i+j] = str2[j];
    }

    // Add the null character at the end of the new string
    new_str[i+j] = '\0';

    printf("The concatenated string is: %s\n", new_str);

    return 0;
}
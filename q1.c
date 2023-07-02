// Write a program to calculate the length of the string. (without using built-in method

#include <stdio.h>

int calculateStringLength(const char string[]) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString) - 1] = '\0'; // Remove trailing newline

    int length = calculateStringLength(inputString);
    printf("Length of the string: %d\n", length);

    return 0;
}

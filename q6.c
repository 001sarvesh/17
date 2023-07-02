// 6. Write a program to reverse a string.

#include <stdio.h>
#include <string.h>

void reverseString(char string[]) {
    int length = strlen(string);
    int i, j;
    char temp;
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString) - 1] = '\0'; // Remove trailing newline

    reverseString(inputString);
    printf("Reversed string: %s\n", inputString);

    return 0;
}

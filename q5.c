// 5. Write a program to convert a given string into lowercase

#include <stdio.h>
#include <string.h>

void convertToLowercase(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = tolower(string[i]);
    }
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString) - 1] = '\0'; // Remove trailing newline

    convertToLowercase(inputString);
    printf("Lowercase string: %s\n", inputString);

    return 0;
}

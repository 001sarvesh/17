// 8. Write a program in C to copy one string to another string.

#include <stdio.h>

void copyString(const char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Add null terminator to the destination string
}

int main() {
    char sourceString[100];
    char destinationString[100];

    printf("Enter the source string: ");
    fgets(sourceString, sizeof(sourceString), stdin);
    sourceString[strlen(sourceString) - 1] = '\0'; // Remove trailing newline

    copyString(sourceString, destinationString);

    printf("Copied string: %s\n", destinationString);

    return 0;
}

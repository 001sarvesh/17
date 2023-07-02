// . Write a program to count the occurrence of a given character in a given string

#include <stdio.h>

int countCharacterOccurrence(const char string[], char character) {
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == character) {
            count++;
        }
    }
    return count;
}

int main() {
    char inputString[100];
    char targetCharacter;
    
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString) - 1] = '\0'; // Remove trailing newline
    
    printf("Enter a character: ");
    scanf("%c", &targetCharacter);
    
    int occurrence = countCharacterOccurrence(inputString, targetCharacter);
    printf("Occurrence of '%c' in the string: %d\n", targetCharacter, occurrence);
    
    return 0;
}

// 7. Write a program in C to count the total number of alphabets, digits and special 
// characters in a string.

#include <stdio.h>
#include <ctype.h>

void countCharacters(const char string[], int* alphabetCount, int* digitCount, int* specialCharCount) {
    int i = 0;
    while (string[i] != '\0') {
        char c = string[i];
        
        if (isalpha(c)) {
            (*alphabetCount)++;
        } else if (isdigit(c)) {
            (*digitCount)++;
        } else {
            (*specialCharCount)++;
        }
        
        i++;
    }
}

int main() {
    char inputString[100];
    int alphabetCount = 0, digitCount = 0, specialCharCount = 0;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString) - 1] = '\0'; // Remove trailing newline

    countCharacters(inputString, &alphabetCount, &digitCount, &specialCharCount);

    printf("Alphabets: %d\n", alphabetCount);
    printf("Digits: %d\n", digitCount);
    printf("Special Characters: %d\n", specialCharCount);

    return 0;
}

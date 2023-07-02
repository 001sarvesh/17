// . Write a program to count vowels in a given string

#include <stdio.h>
#include <ctype.h>

int countVowels(const char string[]) {
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        char c = tolower(string[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString) - 1] = '\0'; // Remove trailing newline

    int vowelCount = countVowels(inputString);
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}

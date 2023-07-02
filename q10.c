// 10. Write a program in C to Find the Frequency of Characters

#include <stdio.h>

void findCharacterFrequency(const char string[], int frequency[]) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            frequency[string[i] - 'a']++;
        } else if (string[i] >= 'A' && string[i] <= 'Z') {
            frequency[string[i] - 'A']++;
        }
        i++;
    }
}

int main() {
    char inputString[100];
    int frequency[26] = {0};  // Assuming only lowercase English alphabets

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString) - 1] = '\0'; // Remove trailing newline

    findCharacterFrequency(inputString, frequency);

    printf("Character Frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", 'a' + i, frequency[i]);
        }
    }

    return 0;
}

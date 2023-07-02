// . Write a program to count vowels in a given string

#include <stdio.h>

int CountVowels(const char string[]){
     int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a' || 'i' || 'e' || 'o' || 'u') {
            count++;
        }
    }
    return count;
}

int main()
{
     char inputString[100];
    
    
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    return 0;
}
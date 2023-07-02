// 9. Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>

void sortStringArray(char arr[][100], int size) {
    int i, j;
    char temp[100];

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int i, size;
    char arr[100][100];

    printf("Enter the number of strings: ");
    scanf("%d", &size);

    printf("Enter the strings:\n");
    for (i = 0; i < size; i++) {
        scanf("%s", arr[i]);
    }

    sortStringArray(arr, size);

    printf("Sorted strings:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

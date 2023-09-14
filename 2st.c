#include <stdio.h>
#include<string.h>

void reverseString(const char* str, char* reversedStr) {
    int length = strlen(str);
    int i, j;

    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversedStr[j] = str[i];
    }

    reversedStr[j] = '\0'; 
}

int main() {
    char str[100];
    char reversedStr[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str, reversedStr);

    printf("Reversed string: %s\n", reversedStr);

    return 0;
}

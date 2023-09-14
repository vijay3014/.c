#include <stdio.h>
#include <string.h>

int main() {
    char strArray[5][20]; 
    char mergedString[100] = ""; 
    int i;

    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        printf("String %d: ", i + 1);
        fgets(strArray[i], sizeof(strArray[i]), stdin);
        strArray[i][strcspn(strArray[i], "\n")] = '\0'; 
    }

    for (i = 0; i < 5; i++) {
        strcat(mergedString, strArray[i]);
    }

    printf("Merged string: %s\n", mergedString);

    return 0;
}

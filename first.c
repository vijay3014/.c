#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};

    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array2) / sizeof(array2[0]);

    printf("Array 1: ");
    for (int i = 0; i < length1; i++) {
        printf("%d ", array1[i]);
    }

    printf("\nArray 2: ");
    for (int i = 0; i < length2; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}

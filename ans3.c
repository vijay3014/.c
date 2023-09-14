#include <stdio.h>

int main() {
    int n, i;
    int oddSum = 0, evenSum = 0;

    printf("size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    printf("even positions: %d\n", evenSum);
    printf("odd positions: %d\n", oddSum);

    return 0;
}

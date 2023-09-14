#include <stdio.h>

int main() {
    int n;
    float number = 0.5;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("%.1f ", number);
        number += 1.5;
    }

    return 0;
}

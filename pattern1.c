#include <stdio.h>

int main() {
    int i, b;
    int c= 5;

    for (i = b; i >= 1; --i) {
        for (b = c; b >= i; --b) {
            printf("%d ", b);
        }
        printf("\n");
    }
    
    for (i = 2; i <= c; ++i) {
        for (b = c; b >= i; --b) {
            printf("%d ", b);
        }
        printf("\n");
    }

    return 0;
}

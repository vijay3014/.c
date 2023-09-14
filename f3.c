#include <stdio.h>

  void nv (int a) {
    if (a > 0) {
        printf("%d is positive.\n", a);
    } else if (a < 0) {
        printf("%d is negative.\n", a);
    } else {
        printf("%d is zero.\n", a);
    }
}

int main() {
    int a;

    printf("Enter a value: ");
    scanf("%d", &a);

    nv(a);

    return 0;
}
